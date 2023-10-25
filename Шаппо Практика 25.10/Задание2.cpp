#include <iostream>
using namespace std;

int main() {
setlocale(0,"");
int Y, S;
double P=1.03;
cout<<"Введите сумму: ";
cin>> S;
cout<<"Введите количество лет: ";
cin>>Y;
cout<<Y*P*S;

  return 0;
}