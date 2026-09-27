#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main(){

    float num1, num2, res;
    char esc;
    menu:
    cout<<"        <<CALCULADORA>>"<<endl<<endl<<endl<< "digite um numero:";
    cin>>num1;
    cout<<"+; -; *; /;^;V"<<endl;
    esc= getch();

    if (esc != '+' && esc != '-' && esc != '*' && esc != '/' && esc != '^' && esc !='v' && esc != 'V'){
        cout<<"Escolha invalida, feche a app e tente novamente";
        goto menu;

    }else if (esc = 'v')
    {
        v:
        res=sqrt(num1);
        cout<<"V"<<num1<<"="<<res<<endl;
        cout<<"V"<<num1<<"~"<<round(res)<<endl;
        cout<<"Valor Abstracto: "<<abs(res);

    }else if (esc = 'V')
    {
        goto v;
    }
    
    

    cout<<num1<<esc<<"";
    cin>>num2;


    switch (esc)
    {
    case '+':
       res= num1+num2;
       cout<<num1<<"+"<<num2<<"="<< res<<endl;
       cout<<num1<<"+"<<num2<<"~"<< round(res);
       cout<<"Valor Abstracto: "<<abs(res);

        break;

    case '-':
       res= num1-num2;
       cout<<num1<<"-"<<num2<<"="<<res<<endl;
       cout<<num1<<"-"<<num2<<"~"<<round(res);
       cout<<"Valor Abstracto: "<<abs(res);
        break;

    case '*':
       res= num1*num2;
       cout<<num1<<"x"<<num2<<"="<<res<<endl;
       cout<<num1<<"x"<<num2<<"~"<<round(res)<<endl;
       cout<<"Valor Abstracto: "<<abs(res);
        break;

    case '/':
       res=num1/num2;
       cout<<num1<<"/"<<num2<<"="<<res<<endl;
       cout<<num1<<"/"<<num2<<"~"<<round(res)<<endl;
       cout<<"Valor Abstracto: "<<abs(res);
        break;

    case '^':
        res=/*std::*/pow(num1, num2);
       cout<<num1<<"^"<<num2<<"="<<res;
       cout<<num1<<"^"<<num2<<"~"<</*std::*/round(res);
       cout<<"Valor Abstracto: "<<abs(res);
        break;

    case 'v' || 'V':
        goto v;

        break;

    default:
    cout<<"operador invalido, feche a app e tente novamente";
        break;
    }
    return 0;
}
