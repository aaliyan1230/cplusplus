#include <iostream>
#include <string>

using namespace std;

void addarrays(float arr1[], float arr2[], float sum[10], int sum_till=10)
{
    int i;
    for (i = 0; i < sum_till; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }
    for (int i = 0; i < sum_till; i++)
    {
        cout << sum[i] << ", ";
    }
}

int main()
{
    float arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, arr2[] = {3, 2, 1, 5, 2, 3, 4, 5, 0, 1}, arr3[10] = {};
    int n = 10;
    cout << arr1 << endl;
    addarrays(arr1, arr2, arr3, n);

    return 0;
}