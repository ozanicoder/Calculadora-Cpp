#include<iostream>
#include<conio.h>
#include<cmath>
#include<stdio.h>
using namespace std;


int main(){

    double num1, num2, reso, resu, resm, resd, rese, resr;
    char esc;
    menu:
    cout<<"        <<CALCULADORA>>"<<endl<<endl<<endl<< "digite um numero:";
    cin>>num1;
    cout<<"+; -; *; /;^;V"<<endl;
    esc= getch();
    fflush(stdin);

    if (esc != '+' && esc != '-' && esc != '*' && esc != '/' && esc != '^' && esc !='v' && esc != 'V'){
        cout<<"Escolha invalida, tente novamente";
        goto menu;

    }

    if (esc = '+')
    {
        cout<<num1<<esc<<"";
        cin>>num2;
        fflush(stdin);
        reso= num1+num2;
       cout<<num1<<"+"<<num2<<"="<< reso<<endl;
       cout<<num1<<"+"<<num2<<"~"<< round(reso)<<endl;
       cout<<"Valor Abstracto: "<<abs(reso);
    }

    if (esc='-')
    {
        cout<<num1<<esc<<"";
        cin>>num2;
        fflush(stdin);
        resu= num1-num2;
       cout<<num1<<"-"<<num2<<"="<<resu<<endl;
       cout<<num1<<"-"<<num2<<"~"<<round(resu)<<endl;
       cout<<"Valor Abstracto: "<<abs(resu);
    }

    if (esc='*')
    {
        cout<<num1<<esc<<"";
        cin>>num2;
        fflush(stdin);
        resm= num1*num2;
       cout<<num1<<"x"<<num2<<"="<<resm<<endl;
       cout<<num1<<"x"<<num2<<"~"<<round(resm)<<endl<<endl;
       cout<<"Valor Abstracto: "<<abs(resm);
    }

    if (esc='/')
    {
        cout<<num1<<esc<<"";
        cin>>num2;
        fflush(stdin);
        resd=num1/num2;
       cout<<num1<<"/"<<num2<<"="<<resd<<endl;
       cout<<num1<<"/"<<num2<<"~"<<round(resd)<<endl;
       cout<<"Valor Abstracto: "<<abs(resd);
    }

    if (esc='^')
    {
        cout<<num1<<esc<<"";
        cin>>num2;
        fflush(stdin);
        rese=/*std::*/pow(num1, num2);
       cout<<num1<<"^"<<num2<<"="<<rese;
       cout<<num1<<"^"<<num2<<"~"<</*std::*/round(rese)<<endl;
       cout<<"Valor Abstracto: "<<abs(rese);
    }

    if (esc='v')
    {
        fflush(stdin);
        resr=sqrt(num1);
        cout<<"V"<<num1<<"="<<resr<<endl;
        cout<<"V"<<num1<<"~"<<round(resr)<<endl;
        cout<<"Valor Abstracto: "<<abs(resr);
    }

    if (esc='V')
    {
        fflush(stdin);
        resr=sqrt(num1);
        cout<<"V"<<num1<<"="<<resr<<endl;
        cout<<"V"<<num1<<"~"<<round(resr)<<endl;
        cout<<"Valor Abstracto: "<<abs(resr);
    }

    return 0;
}
