//  Question 7

#include <iostream>
#include <string>
using namespace std;

void reverse(string *ptr, int len=0)
{
    string b[len];
    for (int i = 0; i < len; i++)
    {
        b[i] = *(ptr + i);
        int n = b[i].length();
        for (int j = 0; j < n / 2; j++)
        {
            swap(b[i][j], b[i][n - j - 1]);
        }
        cout<< b[i] << endl;
    }
}
int main()
{
    string a[5] = {"aaliyan", "ammar", "farhan", "anas", "ehtesham"};
    reverse(a,5);
}