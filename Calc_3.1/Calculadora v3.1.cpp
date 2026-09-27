#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;


int main(){

    double num1, num2, res[5];
    char esc;
    menu:
    cout<<"        <<CALCULADORA>>"<<endl<<endl<<endl<< "digite um numero:";
    cin>>num1;
    cout<<"+; -; *; /;^;V"<<endl;
    esc= getch();

    if (esc != '+' && esc != '-' && esc != '*' && esc != '/' && esc != '^' && esc !='v' && esc != 'V'){
        cout<<"Escolha invalida, feche a app e tente novamente";
        goto menu;

    }else if (esc = '+')
    {
        cout<<num1<<esc<<"";
        cin>>num2;
        res[0]= num1+num2;
       cout<<num1<<"+"<<num2<<"="<< res<<endl;
       cout<<num1<<"+"<<num2<<"~"<< round(res[0])<<endl;
       cout<<"Valor Abstracto: "<<abs(res[0]);
    }else if (esc='-')
    {
        cout<<num1<<esc<<"";
        cin>>num2;
        res[1]= num1-num2;
       cout<<num1<<"-"<<num2<<"="<<res<<endl;
       cout<<num1<<"-"<<num2<<"~"<<round(res[1])<<endl;
       cout<<"Valor Abstracto: "<<abs(res[1]);
    }else if (esc='*')
    {
        cout<<num1<<esc<<"";
        cin>>num2;
        res[2]= num1*num2;
       cout<<num1<<"x"<<num2<<"="<<res<<endl;
       cout<<num1<<"x"<<num2<<"~"<<round(res[2])<<endl<<endl;
       cout<<"Valor Abstracto: "<<abs(res[2]);
    }else if (esc='/')
    {
        cout<<num1<<esc<<"";
        cin>>num2;
        res[3]=num1/num2;
       cout<<num1<<"/"<<num2<<"="<<res<<endl;
       cout<<num1<<"/"<<num2<<"~"<<round(res[3])<<endl;
       cout<<"Valor Abstracto: "<<abs(res[3]);
    }else if (esc='^')
    {
        cout<<num1<<esc<<"";
        cin>>num2;
        res[4]=/*std::*/pow(num1, num2);
       cout<<num1<<"^"<<num2<<"="<<res;
       cout<<num1<<"^"<<num2<<"~"<</*std::*/round(res[4])<<endl;
       cout<<"Valor Abstracto: "<<abs(res[4]);
    }else
    {
        res[5]=sqrt(num1);
        cout<<"V"<<num1<<"="<<res<<endl;
        cout<<"V"<<num1<<"~"<<round(res[5])<<endl;
        cout<<"Valor Abstracto: "<<abs(res[5]);
    }

    return 0;
}
