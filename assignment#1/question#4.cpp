#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
    int province=4;
    int wtemp=7;
    int temperatures [province][wtemp]={
    {29,30,33,34,29,39,33,30},
    {25,22,27,28,22,24,25},
    {30,29,33,32,33,29,27},
    {27,23,24,25,22,28,29}};
    string pro[4]={"Sindh","Punjab","Balochistan","KPK"};
    for (int i = 0; i < province; i++)
    {   
        double avg_temp;
        for (int j = 0; j < wtemp; j++)
        {
            avg_temp += temperatures[i][j];
        }
        avg_temp /=wtemp;
        
        cout<<"Average Weekly Temperature of "<<pro[i]<<"("<<i<<") is: "<<avg_temp<<endl;
    }
    
}
