#include<iostream>
#include<conio.h>
#include<cmath>
#include<stdio.h>
using namespace std;


int main(){

    double num1, num2, res[7];
    char esc;
    menu:
    cout<<"        <<CALCULADORA>>"<<endl<<endl<<endl<< "digite o primeiro numero:";
    cin>>num1;
    cout<<"digite o segundo numero:";
    cin>>num2;

    res[0]= num1+num2;
    res[1]= num1-num2;
    res[2]= num1*num2;
    res[3]=num1/num2;
    res[4]=/*std::*/pow(num1, num2);
    res[5]=sqrt(num1);
    res[6]=sqrt(num2);
    cout<<"\t\t\t A SOMA:"<<endl;

       cout<<num1<<"+"<<num2<<"="<< res[0]<<endl;
       cout<<num1<<"+"<<num2<<"~"<< round(res[0])<<endl;
       cout<<"Valor Abstracto: "<<abs(res[0])<<endl;
       cout<<"Valor Arredondado:"<<round(res[0]);

    cout<<"\t\t\t A SUBTRAÇÃO:"<<endl;

       cout<<num1<<"-"<<num2<<"="<<res[1]<<endl;
       cout<<num1<<"-"<<num2<<"~"<<round(res[1])<<endl;
       cout<<"Valor Abstracto: "<<abs(res[1])<<endl;
       cout<<"Valor Arredondado:"<<round(res[1]);

    cout<<"\t\t\t A MULTIPLICAÇÃO:"<<endl;

       cout<<num1<<"x"<<num2<<"="<<res[2]<<endl;
       cout<<num1<<"x"<<num2<<"~"<<round(res[2])<<endl<<endl;
       cout<<"Valor Abstracto: "<<abs(res[2])<<endl;
       cout<<"Valor Arredondado:"<<round(res[2]);

    cout<<"\t\t\t A DIVISÃO:"<<endl;

       cout<<num1<<"/"<<num2<<"="<<res[3]<<endl;
       cout<<num1<<"/"<<num2<<"~"<<round(res[3])<<endl;
       cout<<"Valor Abstracto: "<<abs(res[3])<<endl;
       cout<<"Valor Arredondado:"<<round(res[3]);

    cout<<"\t\t\t A EXPONENCIAÇÃO:"<<endl;

       cout<<num1<<"^"<<num2<<"="<<res[4];
       cout<<num1<<"^"<<num2<<"~"<</*std::*/round(res[4])<<endl;
       cout<<"Valor Abstracto: "<<abs(res[4])<<endl;
       cout<<"Valor Arredondado:"<<round(res[4]);

    cout<<"\t\t\t A RAIZ:"<<endl;

       cout<<"V"<<num1<<"="<<res[5]<<endl;
       cout<<"V"<<num1<<"~"<<round(res[5])<<endl;
       cout<<"Valor Abstracto: "<<abs(res[5])<<endl;
       cout<<"Valor Arredondado:"<<round(res[5]);

    return 0;
}
