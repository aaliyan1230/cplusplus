#include <iostream>
using namespace std;

int count_occurrences(int arr[], int length, int element)
{
   int result = 0;
   for (int i = 0; i < length; i++)
   {
      if (element == arr[i])
         result++;
   }
   return result;
}

int main()
{
   int arr[9] = {1, 12, 13, 12, 12, 1, 40, 4, 39};
   int count = sizeof(arr) / sizeof(arr[0]);

   cout << "Number\t"
        << "Occurences\n";
   for (int i = 0; i < count; i++)
   {
      int j;
      for (j = 0; j < i; j++)
      {
         if (arr[i] == arr[j])
            break;
      }
      if (i == j)
         cout << arr[i] << "\t" << count_occurrences(arr, count, arr[i]) << endl;
   }
   return 0;
}

