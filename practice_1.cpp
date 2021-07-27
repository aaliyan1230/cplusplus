#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
    // question 1
    int a,b;
    cout<<"enter first number "<<endl;
    cin>>a;
    cout<<"enter second number"<<endl;
    cin>>b;
    cout<<"sum of numbers is "<<a+b<<endl;

    // question 1
    int c;
    cout<<"enter height in inches: ";
    cin>>c;
    int foot2inch= 12;
    cout<<"height in feet is: "<<c/12<<" feet "<<c%12<<" inches"<<endl;

    // question 2
    int time;
    cout<<"enter time in seconds: ";
    cin>>time;
    int hr = time/3600;
    int min = (time%3600)/60;
    int sec = (time%3600)%60;
    cout<<"hours are "<<hr<<endl;
    cout<<"minutes are "<< min <<endl;
    cout<<"seconds are "<< sec <<endl;

    // question 3
    cout<<"enter amount in rupees: ";
    int amount;
    cin>>amount;
    cout<<"1000s in the amount are: "<<amount/1000<<endl;
    cout<<"500s in the amount are: "<<(amount%1000)/500<<endl;
    cout<<"100s in the amount are: "<<((amount%1000)%500)/100<<endl;
    cout<<"10s in the amount are: "<<(((amount%1000)%500)%100)/10<<endl;
    cout<<"1s in the amount are: "<<(((amount%1000)%500)%100)%10<<endl;

    // question 4
    double temp;
    cout<<"enter temperature in celsius: ";
    cin>>temp;
    temp = temp*(9.0/5.0) + 32;
    cout<<"temperature in  farhenheit is: "<<temp<<endl;

    //question 5
    int num;
    cout<<"enter a two digit integer value: ";
    cin>>num;
    cout<<"reverse of the number is: "<<num%10<<num/10;

    _getch();
    return 0;
}