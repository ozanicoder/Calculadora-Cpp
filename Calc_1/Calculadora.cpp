#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    float num1, num2/*,resexpo*/;
    char esc;
    //int i;

    cout<<"        <<CALCULADORA>>"<<endl<<endl<<endl<< "digite um numero:";
    cin>>num1;
    cout<<"+; -; *; /"<<endl;
    esc= getch();
    
    if (esc != '+' && esc != '-' && esc != '*' && esc != '/'/* && esc != '^'*/){
        cout<<"Escolha invalida, feche a app e tente novamente";
    }else{
    cout<<num1<<esc<<"";
    cin>>num2;
    }
    switch (esc)
    {
    case '+':
       cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
    case '-':
       cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
    case '*':
       cout<<num1<<"x"<<num2<<"="<<num1*num2;
        break;
    case '/':
       cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;
    /*case '^':
    
       cout<<num1<<"^"<<num2<<"="<<resexpo;
        break;*/
    default:
    cout<<"operador invalido, feche a app e tente novamente";
        break;
    }
    return 0;
}
