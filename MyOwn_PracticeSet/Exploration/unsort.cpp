#include <iostream>
using namespace std;
int main()
{
   int arr[5] = {1, 2, 3, 4, 5};

   for (int i = 0; i < 5; i++)
   {
      int j = i + 1;
      if (j < 3)
      {
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
      }
   }
   for (int i = 0; i < 5; i++)
   {
      int j = i + 3;
      if (j < 4)
      {
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
      }
   }
   for (int i = 0; i < 5; i++)
   {
      cout << arr[i] << " ";
   }

   return 0;
}
