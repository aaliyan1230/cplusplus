# include <iostream>
# include <string>
using namespace std;

int main()
{
    int a[] = {37, 2, 6, 4, 90, 45, 67, 21};
    int b = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i <= b; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if ( a[j] > a[j+1] )
            {
                int swap = 0;
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
                
            }
        }
    }
    for (int i = 0; i <= b; i++)
    {
        cout << a[i] << ", ";
    }
}