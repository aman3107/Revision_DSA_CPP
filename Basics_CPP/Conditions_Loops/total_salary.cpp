#include <iostream>
using namespace std;

int main(){
    int basic_salary;
    char grade;
    cout << "Enter Basic Salary and grade :";
    cin >> basic_salary >> grade;

    double hra = basic_salary * 0.20;
    double da = basic_salary *0.50;
    int allow;

    if(grade == 'A'){
        allow = 1700;
    }
    else if(grade == 'B'){
        allow = 1500;
    }
    else{
        allow = 1300;
    }

    double pf = basic_salary * 0.11;
    double total_salary = (double)basic_salary + hra + da + allow - pf;
    double salary = total_salary - int(total_salary);
    if(salary < 0.5){
        cout << int(total_salary);
    }
    else{
        cout << int(total_salary) + 1;
    }
    // cout << total_salary;
}