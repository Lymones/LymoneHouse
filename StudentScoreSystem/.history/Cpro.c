#include <stdio.h>
#include <windows.h>
typedef struct student ifm;
struct student
{
    int ID;
    char name[10];
    float admath[3];
    float marx[3];
    float C[3];
};
ifm stu[10];
int input(ifm *stu);
int calculation(ifm *stu);
int sort(ifm *stu);
int statistics(ifm *stu);

int main()
{
    int i, j;
    input(stu);
    calculation(stu);
    sort(stu);
    statistics(stu);
    system("pause");
    return 0;
}

int input(ifm *stu)
{
    int i, j, flag;
    float p;
    for (i = 0; i < 10; i++)
    {
        scanf("%d%s", &(stu + i)->ID, (stu + i)->name);
        for(j = 0; j < 2; j++)
        {
            flag = 0;
            do
            { 
                if(flag)
                {
                    printf("error!\n");
                }
                scanf("%f", &(stu + i)->admath[j]);
                flag = 1;
            } while (((stu + i)->admath[j] <= 0.0) || ((stu + i)->admath[j] >= 100.0));
        }
        for(j = 0; j < 2; j++)
        {
            flag = 0;
            do
            {
                if(flag)
                {
                    printf("error!\n");
                }
                scanf("%f", &(stu + i)->marx[j]);
                flag = 1;
            } while (((stu + i)->marx[j] <= 0.0) || ((stu + i)->marx[j] >= 100.0));
        }
        for(j = 0; j < 2; j++)
        {
            flag = 0;
            do
            {
                if(flag)
                {
                    printf("error!\n");
                }
                scanf("%f", &(stu + i)->C[j]);
                flag = 1;
            } while (((stu + i)->C[j] <= 0.0) || ((stu + i)->C[j] >= 100.0));
        }
    }
    return 0;
}

int calculation(ifm *stu)
{
    int i;
    for(i = 0; i < 10; i++)
    {
        (stu + i)->admath[2] = (stu + i)->admath[0] * 0.3 + (stu + i)->admath[1] * 0.7;
        (stu + i)->marx[2] = (stu + i)->marx[0] * 0.5 + (stu + i)->marx[1] * 0.5;
        (stu + i)->C[2] = (stu + i)->C[0] * 0.4 + (stu + i)->C[1] * 0.6;
    }
    return 0;
}

int sort(ifm *stu)
{
    int i, j;
    ifm k;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if ((stu + i)->C[2] < (stu + i + 1)->C[2])
            {
                k = *(stu + i + 1);
                *(stu + i + 1) = *(stu + i);
                *(stu + i) = k;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("\nID:%d\nNAME:%s\n", (stu + i)->ID, (stu + i)->name);
        printf("Advanced mathematics:\nusual performance:%f\nexamination performance:%f\ntotal points:%f\n", (stu + i)->admath[0], (stu + i)->admath[1], (stu + i)->admath[2]);
        printf("Marx:\nusual performance:%f\nexamination performance:%f\ntotal points:%f\n", (stu + i)->marx[0], (stu + i)->marx[1], (stu + i)->marx[2]);
        printf("C programming language:\nusual performance:%f\nexamination performance:%f\ntotal points:%f\n\n", (stu + i)->C[0], (stu + i)->C[1], (stu + i)->C[2]);
    }
    return 0;
}

int statistics(ifm *stu)
{
    float aver[3] = {0.0}, sum;
    int i, blow[3] = {0};
    sum = 0.0;
    for (i = 0; i < 10; i++)
    {
        sum += (stu + i)->admath[2];
    }
    aver[0] = sum / 10.0;
    sum = 0.0;
    for (i = 0; i < 10; i++)
    {
        sum += (stu + i)->marx[2];
    }
    aver[1] = sum / 10.0;
    sum = 0.0;
    for (i = 0; i < 10; i++)
    {
        sum += (stu + i)->C[2];
    }
    aver[2] = sum / 10.0;
    for (i = 0; i < 10; i++)
    {
        if ((stu + i)->admath[2] < aver[0])
        {
            blow[0] += 1;
        }
        if ((stu + i)->marx[2] < aver[1])
        {
            blow[1] += 1;
        }
        if ((stu + i)->C[2] < aver[2])
        {
            blow[2] += 1;
        }
    }
    printf("The number of students who scored below average in Advanced Mathematics:%d\n", blow[0]);
    printf("The number of students who scored below average in Marx:%d\n", blow[1]);
    printf("The number of students who scored below average in C programming language:%d\n", blow[2]);
    return 0;
}