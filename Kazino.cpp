#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
  setlocale(0, ""); 
   int stertings;
   cout<<"Скачать"<<endl;
   cout<<"Введите промокод"<<endl;
  cin>>stertings;
  cout<<"Добро пожаловать в казино"<<endl;
  srand(time(NULL));
  int first;
  int second;
  int last;
    int money=0;
    if (stertings==911)
    {
        money=money +999999999;
    }
    else
    {
        money=money+1000;
    }
    int stav;
    int scor=0;
    int pscor;
    int coef;
    int card;
    int cash;
    while(scor<=1){
        cout <<"Ваш баланс="<<money<< endl;
        cout<<"Сделайте ставку"<<endl;
    cin >>stav;
    if(stav>money){
    stav=money;
    }
    else if(stav<money){
    }
    if(stav>=1000){
     coef=4;
    }
    else if(stav<1000){
        coef=2;
        }
    else if(stav>=10000){
     coef=6;
    }
    else{
     coef=10;
    }
     first =1+ rand()%9;
  second =1+ rand()%9;
  last =1+ rand()%9;
  cout<<"Крутим барабан"<<endl;
  cout<<"Вам выпали:"<<endl;
  cout<<first<<second<<last<<endl;
 if(first!=second&&first!=last&&second!=last)
     {
     money=money-stav;
     }
 else if(first==second==last)
 {
     money=money+(stav*coef*2);
 }
 else{
     money=money+(stav*coef);
     }
      cout<<"Ваш баланс="<<money<<endl;
      cout<<"Если вы хотите пополнить баланс, введите 5"<<endl;
  cout<<"Если вы хотите продолжить, введите 1"<<endl;
  cout<<"Если вы хотите закончить, введите 2"<<endl;
  cin>>pscor;
  if(pscor==1){
   cout<<"Удачи"<<endl;
   scor=scor+0;
    }
    else if (pscor==2){
       cout<<"Главное-вовремя остановиться"<<endl;
       break;
        }
        else if(pscor==5){
            cout<<"Введите данные вашей карты"<<endl;
            cin>>card;
            cout<<"Введите сумму, которая спишется с вашей карты"<<endl;
            cin>>cash;
            money=money+cash;
            }
        else{
            cout<<"Ошибка, окончание работы."<<endl;
           break;
            }
    }
    return 0;
}