#include<iostream>
#include<conio.h>
using namespace std;

int factorial(int *fact_ptr){
    int fact = *fact_ptr;
    int answer=1;
    for (int i = fact; i >1; i--)
    {
        answer = answer*i;
    }
    return answer;
    
}

int main(){
//question#1
    int num=5;
    int *num_ptr=&num;
    cout<<"factorial of "<<num<<" is "<<factorial(num_ptr)<<endl;
//question#2
    int arr1[]={1,3,5,7};
    int arr2[]={2,4,6,8};
    int sum[4];
    int *arr1_ptr=arr1;
    int *arr2_ptr=arr2;
    for (int i = 0; i < 4; i++)
    {
        sum[i]=*(arr1_ptr+i) + *(arr2_ptr+i);
        cout<<sum[i]<<endl;
    }
//question#3 three
    
    const double pi=3.14;
    double radius=0.0;
    cout<<"enter radius of circle: \n";
    cin>>radius;
    double *const rad_ptr=&radius;
    double area;
    area=pi**rad_ptr**rad_ptr;
    cout<<"the area of circle is "<<area<<endl;
//question#4
    int table_no;
    int *table_no_ptr;
    cout<<"enter number to make table of: \n";
    cin>>table_no;
    table_no_ptr=&table_no;
    for (int i = 1; i <=10; i++)
    {
        cout<<*table_no_ptr<<" * "<<i<<" = "<<*table_no_ptr*i<<endl;
    }
    
//question#5 five
    
    
    int num_1, num_2;
    int *num_1_ptr, *num_2_ptr;
    char operation;
    cout<<"enter first number: \n";
    cin>>num_1;
    num_1_ptr=&num_1;
    cout<<"enter second number: \n";
    cin>>num_2;
    num_2_ptr=&num_2;
    cout<<"enter operation to perform(+, -, *, /): \n";
    cin>>operation;
    switch (operation)
    {
    case '+':
        cout<<*num_1_ptr + *num_2_ptr<<endl;
        break;
    case '-':
        cout<<*num_1_ptr - *num_2_ptr<<endl;
        break;
    case '*':
        cout<<*num_1_ptr * *num_2_ptr<<endl;
        break;
    case '/':
        cout<<*num_1_ptr / *num_2_ptr<<endl;
        break;
    }
    

}

