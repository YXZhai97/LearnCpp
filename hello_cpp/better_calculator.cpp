#include <iostream>
using namespace std;

int main(){

    int num1, num2, result;
    char op;

    cout <<"Enter first number:";
    cin >> num1;
    cout <<"Enter the operator:";
    cin >> op;
    cout <<"Enter second number:";
    cin >> num2;

    if (op=='+'){
        result=num1+num2;
    }else if (op=='-'){
        result=num1-num2;
    }else if (op=='/'){
        result=num1/num2;
    }else if (op=='*'){
        result=num1*num2;
    }else{
        cout<<"Invalid Operator";
    }
    cout<<"The result is:"<<result;

}

