#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define NUM_STUDENTS 10 // 学生个数
#define NUM_COURSES 3   // 课程个数

// 学生信息
typedef struct
{
    char name[20];              // 姓名
    int num;                    // 学号
    int scores[NUM_COURSES][2]; // 成绩，[0]为平时成绩，[1]为考试成绩
    int totals[NUM_COURSES];    // 总成绩
} student_t;

// 排序的辅助结构体
typedef struct
{
    int index; // 在 students 数组中的下标
    int score; // C 语言的总成绩
} sort_t;

// 将学生成绩按照 C 语言总成绩从高到低排序
int cmp(const void *a, const void *b)
{
    sort_t *x = (sort_t *)a;
    sort_t *y = (sort_t *)b;
    return y->score - x->score;
}

// 读取一个数字，如果输入不合法则重新请求输入
int read_number(const char *prompt)
{
    int num;
    while (true)
    {
        printf("%s", prompt);
        if (scanf("%d", &num) == 1 && num >= 0 && num <= 100)
        {
            break;
        }
        printf("输入有误，请重新输入！\n");
        while (getchar() != '\n')
            ;
    }
    return num;
}

/// @brief
/// @param
/// @return
int main(void)
{
    student_t students[NUM_STUDENTS];
    sort_t sorted[NUM_STUDENTS];
    int i, j;

    // 输入学生信息
    int nums[NUM_STUDENTS] = {0};
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        printf("输入第%d名学生的信息：\n", i + 1);
        printf("学号：");
        scanf("%d", &students[i].num);
        // 如果学号已经存在，就要求重新输入
        for (j = 0; j < i; j++)
        {
            if (students[i].num == nums[j])
            {
                printf("该学号已被使用，请重新输入：");
                scanf("%d", &students[i].num);
                j = -1; // 重新开始遍历 nums 数组
            }
        }
        nums[i] = students[i].num; // 保存已输入的学号
        printf("姓名：");
        scanf("%s", students[i].name);
        for (j = 0; j < NUM_COURSES; j++)
        {
            char prompt[30];
            switch (j)
            {
            case 0:
                strcpy(prompt, "高数平时成绩：");
                break;
            case 1:
                strcpy(prompt, "马克思平时成绩：");
                break;
            case 2:
                strcpy(prompt, "C语言平时成绩：");
                break;
            }
            students[i].scores[j][0] = read_number(prompt);
            strcpy(prompt, "考试成绩：");
            students[i].scores[j][1] = read_number(prompt);
        }
    }

    // 计算总成绩
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        students[i].totals[0] = students[i].scores[0][0] * 3 / 10 + students[i].scores[0][1] * 7 / 10;
        students[i].totals[1] = students[i].scores[1][0] * 5 / 10 + students[i].scores[1][1] * 5 / 10;
        students[i].totals[2] = students[i].scores[2][0] * 4 / 10 + students[i].scores[2][1] * 6 / 10;
    }

    // 从高到低排序
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        sorted[i].index = i;
        sorted[i].score = students[i].totals[2];
    }
    qsort(sorted, NUM_STUDENTS, sizeof(sort_t), cmp);

    // 按照排序结果输出学号、姓名、C 语言总成绩
    printf("\n按照 C 语言总成绩从高到低排序后的结果：\n");
    printf("学号\t姓名\tC语言总成绩\n");
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        int index = sorted[i].index;
        printf("%d\t%s\t%d\n", students[index].num, students[index].name, students[index].totals[2]);
    }
    // 计算 3 门课程的平均分
    int total_scores[NUM_COURSES] = {0};
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        for (j = 0; j < NUM_COURSES; j++)
        {
            total_scores[j] += students[i].totals[j];
        }
    }
    int avg_scores[NUM_COURSES];
    for (j = 0; j < NUM_COURSES; j++)
    {
        avg_scores[j] = total_scores[j] / NUM_STUDENTS;
    }

    // 输出 3 门课程的总成绩
    printf("\n3门课程的总成绩：\n");
    printf("学号\t姓名\t高数\t马克思\tC语言\n");
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\n", students[i].num, students[i].name, students[i].totals[0], students[i].totals[1], students[i].totals[2]);
    }

    // 输出 3 门课程总成绩的平均分
    printf("\n3门课程总成绩的平均分：\n");
    printf("高数\t马克思\tC语言\n");
    printf("%d\t%d\t%d\n", avg_scores[0], avg_scores[1], avg_scores[2]);

    // 计算 3 门课程低于平均分的学生个数
    int cnt[NUM_COURSES] = {0};
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        for (j = 0; j < NUM_COURSES; j++)
        {
            if (students[i].totals[j] < avg_scores[j])
            {
                cnt[j]++;
            }
        }
    }

    // 输出 3门课程低于平均分的学生个数
    printf("\n3门课程低于平均分的学生个数：\n");
    printf("高数\t马克思\tC语言\n");
    printf("%d\t%d\t%d\n", cnt[0], cnt[1], cnt[2]);

    return 0;
}
