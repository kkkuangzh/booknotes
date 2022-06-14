//
//  seven.cpp
//  C++PP
//
//  Created by zhkuang on 2022/5/24.
//

#include <iostream>
using namespace std;

void task1();
void task2();
void task5();


int main() {
    // task1();
    // task2();
    task5();
}


float task1_func(float a, float b) {
    return 2 * a * b / (a + b);
}

void task1() {
    // 调和平均数
    cout<<"Input two values: "<<endl;
    float a, b;
    while (cin>>a>>b and a != 0 and b != 0) {
        cout<<"res "<<task1_func(a, b)<<endl;
    }
}

int task2_input(float* score) {
    cout<<"Please input golf scores (10 max): "<<endl;
    float temp;
    int cnt = 0;
    while (cin>>temp) {
        score[cnt] = temp;
        cnt += 1;
    }
    return cnt;
}

void task2_display(const float* score, int cnt) {
    int total = 0;
    cout<<"Data captured: ";
    for (int i = 0; i < cnt; i++) {
        total += score[i];
        cout<<score[i]<<" ";
    }
    cout<<endl<<"Mean score: "<<float(total)/float(cnt)<<endl;
}

void task2() {
    float score [10];
    int cnt = task2_input(score);
    task2_display(score, cnt);
}

int task5_recur(int num) {
    if (num == 1)
        return 1;
    else
        return num*task5_recur(num-1);
}

void task5() {
    cout<<"Input a number to calculate n!: ";
    int number;
    while (cin>>number) {
        cout<<number<<"!="<<task5_recur(number)<<endl;
    }
}


