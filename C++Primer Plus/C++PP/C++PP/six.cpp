//
//  six.cpp
//  C++PP
//
//  Created by zhkuang on 2022/5/20.
// https://wenku.baidu.com/view/c56881a280d049649b6648d7c1c708a1284a0af1.html
//

/*

#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();
void task8();

int main() {
    // task1();
    // task2();
    // task3();
    // task4();
    // task5();
    // task6();
    // task7();
    task8();
}


void task1() {
    // cctype库 大小写转化
    char ch;
    cout<<"Input a character (type @ to stop): ";
    cin>>ch;
    while (ch != '@') {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);
        if (!isdigit(ch))
            cout<<ch;
        cin>>ch;
    }
}

void task2() {
    // 遇到非数字时停止输入，并输出平均值
    double vals [10];
    double total = 0;
    int i = 0;
    
    while (i < 10 && cin>>vals[i]) {
        total += vals[i];
        i++;
    }
    if (i != 0)
    {
        double mean = total / i;
        cout<<endl<<"Mean value of the array is "<<mean;
        int cnt = 0;
        for (int j = 0; j < i; j++){
            if (vals[j] > mean) {
                cnt += 1;
            }
        }
        cout<<endl<<cnt<<" items are greater than mean."<<endl;
    }
    else {
        cout<<"No valid values!"<<endl;
    }
}

void task3() {
    // switch语句
    cout<<"Enter one of the following characters:"<<endl;
    cout<<"c) carnivore"<<"\t"<<"p) pianist"<<endl;
    cout<<"t) tree"<<"\t\t\t"<<"g) game"<<endl;
    char temp;
    while (cin>>temp) {
        switch (temp) {
            case 'c':
                cout<<"You entered c"<<endl;
                break;
            case 'p':
                cout<<"You entered p"<<endl;
                break;
            case 't':
                cout<<"You entered t"<<endl;
                break;
            case 'g':
                cout<<"You entered g"<<endl;
                break;
            default:
                cout<<"Please choose from (c, p, t, g): ";
        }
    }
}

void task4() {
    // 结构体与switch
    const int size = 3;
    struct bop {
        string fullname;
        string title;
        string bopname;
        int preference;
    };
    
    bop people [size] = {
        {"Wimp Macho", "Programmer", "a", 2},
        {"Raki Rhodes", "HR", "b", 1},
        {"Celia Laiter", "Trainee", "c", 0}
    };
    
    cout<<"BOP Report:"<<endl;
    cout<<"a. display by name"<<"\t\t"<<"b. display by title"<<endl;
    cout<<"c. display by bopname"<<'\t'<<"d. display by preference"<<endl;
    cout<<"q. quit"<<endl<<"Enter your choice: ";
    char choice;
    cin>>choice;
    while (choice != 'q') {
        switch (choice) {
            case 'a':
                for (int i = 0; i < size; i++) {
                    cout<<people[i].fullname<<endl;
                }
                cout<<"Next choice: ";
                cin>>choice;
                break;
            case 'b':
                for (int i = 0; i < size; i++) {
                    cout<<people[i].title<<endl;
                }
                cout<<"Next choice: ";
                cin>>choice;
                break;
            case 'c':
                for (int i = 0; i < size; i++) {
                    cout<<people[i].bopname<<endl;
                }
                cout<<"Next choice: ";
                cin>>choice;
                break;
            case 'd':
                for (int i = 0; i < size; i++) {
                    if (people[i].preference == 0) {
                        cout<<people[i].fullname<<endl;
                    }
                    else if (people[i].preference == 1) {
                        cout<<people[i].title<<endl;
                    }
                    else {
                        cout<<people[i].bopname<<endl;
                    }
                }
                cout<<"Next choice: ";
                cin>>choice;
                break;
            default:
                cout<<"Input again: ";
                cin>>choice;
        }
    }
}

void task5() {
    // 计算应缴所得税
    int salary;
    cout<<"Input your salary: ";
    while (cin>>salary && salary>=0) {
        if (salary < 5000) {
            cout<<"You need to pay 0"<<endl;
        }
        else if (salary <= 15000) {
            cout<<"You need to pay "<<(salary-5000)*0.1<<endl;
        }
        else if (salary <= 35000) {
            cout<<"You need to pay "<<1000+(salary-15000)*0.15<<endl;
        }
        else {
            cout<<"You need to pay "<<4000+(salary-35000)*0.2<<endl;
        }
    }
}

void task6() {
    // 动态分配结构体数组，遍历数组
    struct donator {
        string name;
        double money;
    };
    
    cout<<"Input number of people: ";
    int num;
    cin>>num;
    cin.get();
    donator* people = new donator [num];
    for (int i = 0; i < num; i++) {
        cout<<"Please input the name of the "<<i+1<<" donator: ";
        getline(cin, people[i].name);
        cout<<"Please input the money of the "<<i+1<<" donator: ";
        cin>>people[i].money;
        cin.get();
    }
    cout<<"Grand Patrons: "<<endl;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < num; i++) {
        if (people[i].money > 10000) {
            cout<<people[i].name<<'\t'<<people[i].money<<endl;
            cnt1 += 1;
        }
    }
    if (cnt1 == 0) {
        cout<<"none"<<endl;
    }
    cout<<"Patrons: "<<endl;
    for (int i = 0; i < num; i++) {
        if (people[i].money <= 10000) {
            cout<<people[i].name<<'\t'<<people[i].money<<endl;
            cnt2 += 1;
        }
    }
    if (cnt2 == 0) {
        cout<<"none"<<endl;
    }
}

void task7() {
    cout<<"Enter WORDS (q to quit): "<<endl;
    int vowels = 0;
    int consonants = 0;
    int others = 0;
    char word[30];
    while (cin>>word) {
        char t = word[0];
        if (!strcmp(word, "q")) {
            break;
        }
        if (isalpha(t)) {
            if (t == 'a' || t == 'e' || t == 'i' or t == 'o' || t == 'u')
                vowels += 1;
            else
                consonants += 1;
        }
        else {
            others += 1;
        }
    }
    cout<<vowels<<" words begin with vowels"<<endl;
    cout<<consonants<<" words begin with consonants"<<endl;
    cout<<others<<" others"<<endl;
}

void task8() {
    cout<<"task8"<<endl;
    ofstream ofile;
    ofile.open("./test.txt");
    if (ofile.is_open()) {
        cout<<"1";
    }
    else {
        cout<<"0";
    }
    ofile<<"Why is this not working?";
    ofile.close();
}
 
*/

