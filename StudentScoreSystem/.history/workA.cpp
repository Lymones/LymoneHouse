#include <bits/stdc++.h>
using namespace std;
class Score{
public:
    double math,marx,c;
    Score(double _math,double _marx,double _c):math(_math),marx(_marx),c(_c){};
    void input(double _math,double _marx,double _c){
        math=_math;
        marx=_marx;
        c=_c;
    }
};
class Student{
private:
    string studentNo;
    string name;
    Score Usually,Finally,Total;
    static Score Average;
    static int studentNum;
public:
    Student(string _no,string _name,double _math,double _math_,double _marx,double _marx_,double _c,double _c_)
        :Usually(_math,_marx,_c),Finally(_math_,_marx_,_c_),studentNo(_no),name(_name){
            calculate();           
        }
    void input(string _no,string _name,double _math,double _math_,double _marx,double _marx_,double _c,double _c_){
        Usually.input(_math,_marx,_c);
        Finally.input(_math_,_marx_,_c_);
        studentNo=_no;
        name=_name;
        calculate();
    }
    void calculate(){
        Total.math=Usually.math*0.3+Finally.math*0.7;
        Average.math+=Total.math;
        Total.marx=Usually.marx*0.5+Finally.marx*0.5;
        Average.marx+=Total.marx;
        Total.c=Usually.c*0.4+Finally.c*0.6;
        Average.c+=Total.c;
        return;
    }
    static void getAverage(){
        Average.math/=studentNum;
        Average.marx/=studentNum;
        Average.c/=studentNum;
        return;
    }
    bool operator < (Student B){
        return this->Total.c<B.Total.c;
    }
}Data[10];
Score Student::Average(0,0,0);
int Student::studentNum = 10;
void drawStart(){
    
}
void typein(){
    string temp_No;
    string temp_name;
    double temp_math,temp_marx,temp_c;
    double temp_math_,temp_marx_,temp_c_;
    printf("您需要录入 %d 名学生的信息，请按照以下顺序录入：",Student::studentNum);
    printf("学号 姓名 高数平时成绩 高数考试成绩 马克思平时成绩 马克思考试成绩 C语言平时成绩 C语言考试成绩");
    for(int i = 0;i<Student::studentNum;i++){
        cin>>temp_No>>temp_name>>temp_math>>temp_math_>>temp_marx>>temp_marx_>>temp_c>>temp_c_;
        Data[i].input(temp_No,temp_name,temp_math,temp_math_,temp_marx,temp_marx_,temp_c,temp_c_)
    }
}
int main(){
    
}