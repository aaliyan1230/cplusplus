#include<iostream>
#include<conio.h>
#include<string>

using namespace std;
int fun(int x, int y){
    x=20;
    y=10;
    return x;
}

struct Aali
{
    string b;
    double c;
    static const int a=20;
};


int main(){
    int x=10;
    int z=30;
    fun(x,x);
    bool bo;
    cout<<"value of x "<<x<<endl;

    Aali aali1[]={"aali", 23.45};
    cout<<"output is "<<aali1->b<<endl;

    int a=10;int b=20;int c=30;
    int *arr[]={&a, &b, &c};
    cout<<"arr[1] is "<<arr[1];

    // string* x,y;
    // cout<<x<<", "<<y<<std::endl;
    // y="aaliyan";
    // bool w=x==&y;
    // cout<<x<<", "<<y<<", "<<&y<<" "<<w<<endl;
    return 0;
}