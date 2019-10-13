//Multiple Missing in sorted/unsorted list : O(n)

#include <iostream>

using namespace std;

int Max(int A[] ,int length)
{
 int max=A[0];
 int i;

 for(i=1;i<length;i++)
 {
 if(A[i]>max)
  {
    max=A[i];
  }
 }
 return max;
}

int Min(int A[],int length)
{
 int min=A[0];
 int i;

 for(i=1;i<length;i++)
 {
 if(A[i]<min)
  {
    min=A[i];
  }
 }
 return min;
}

int main()
{

   int array[8] {6,7,8,9,12,13,17,19};
   int h = Max(array,8);
   int l = Min(array,8);
   int i;
   int j;
   int  H[20]{0};

  for(i = 0;i < 8;i++)
  {
    H[array[i]]++;
  }

  for(j=l;j<=h;j++)
  {
    if(H[j]==0)
    {
      cout<<j<<" ";
    }
  }

return 0;
}
