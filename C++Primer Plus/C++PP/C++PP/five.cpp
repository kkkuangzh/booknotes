//
//  five.cpp
//  C++PP
//
//  Created by zhkuang on 2022/5/20.
//

/*
 

#include <iostream>
#include <array>
#include <string>
using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task9();
void task10();

int main() {
    // task1();
    // task2();
    // task3();
    // task4();
    // task5();
    // task6();
    // task7();
    // task9();
    task10();
}


void task1(){
    // 2~9整数和
    int first, last;
    int total = 0;
    cin>>first;
    cin>>last;
    for (int i = first; i <= last; i++){
        total += i;
    }
    cout<<total<<endl;
}

void task2(){
    // 用array计算100！的值
    array<long double, 100> dp;
    dp[0] = 1;
    for (int i = 1; i < 100; i++){
        dp[i] = (i + 1) * dp[i - 1];
    }
    cout<<"100! result: "<<dp[99]<<endl;
}

void task3(){
    // 输入0停止，输出到目前为止累计输出和
    int temp = 1;
    int total = 0;
    while (temp) {
        cout<<"Please input a number: ";
        cin>>temp;
        total += temp;
        cout<<"Accumulated sum so far: "<<total<<endl;
    }
}

void task4(){
    // 银行复利问题
    int total_d = 100;
    float total_c = 100;
    int year = 0;
    while (total_c <= total_d) {
        total_d += 10;
        total_c *= 1.05;
        year += 1;
    }
    cout<<"After "<<year<<" years, Cleo will earn more than Daphne."<<endl;
    cout<<"Cleo will have "<<total_c<<" dollars then."<<endl;
    cout<<"Daphne will have "<<total_d<<" dollars then."<<endl;
}

void task5() {
    // 每个月销量以及总销量
    string months [12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int nums [12];
    int total = 0;
    for (int i = 0; i < 12; i++) {
        cout<<"Input the number of books in "<< months[i]<<": ";
        cin>>nums[i];
        total += nums[i];
    }
    cout<<"The total number of books is "<<total<<endl;
}

void task6() {
    int sales [3][12];
    for (int year = 1; year < 4; year++) {
        int total = 0;
        for (int month = 0; month < 12; month++) {
            sales[year-1][month] = year;
            total += sales[year-1][month];
        }
        cout<<"the total number of sales in year "<<year<<" is "<<total<<endl;
    }
}

void task7() {
    // 交替读取数值和字符串
    struct Car {
        string company;
        int year;
    };
    int num = 0;
    cout<<"Input number of cars: ";
    cin>>num;
    // cin完了之后换行符还存在于输入队列中，需要把换行符消耗掉，否则getline直接没了
    cin.get();
    Car* p = new Car [num];
    for (int i = 0; i < num; i++) {
        cout<<"Car #"<<i+1<<endl;
        cout<<"Enter the company: ";
        getline(cin, p[i].company);
        cout<<"Enter the year made: ";
        cin>>p[i].year;
        // cin完了之后换行符还存在于输入队列中，需要把换行符消耗掉，否则getline直接没了
        cin.get();
    }
    cout<<"Here is the collection: "<<endl;
    for (int i = 0; i < num; i++) {
        cout<<p[i].year<<" "<<p[i].company<<endl;
    }
}

void task9() {
    string temp = "";
    int cnt = 0;
    while (temp != "done") {
        cout<<"Enter word: ";
        cin>>temp;
        cnt += 1;
    }
    cout<<"You have entered "<<cnt<<" words."<<endl;
}

void task10() {
    // 显示图形
    int num;
    cout<<"Enter number of rows: ";
    cin>>num;
    int dots = num-1;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < dots; j++) {
            cout<<".";
        }
        for (int j = 0; j < num-dots; j++) {
            cout<<"*";
        }
        dots -= 1;
        cout<<endl;
    }
}
 */
