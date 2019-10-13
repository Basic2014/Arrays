
//O(n)
#include <iostream>

using namespace std;

int main()
{

 int A[] {8,3,6,4,6,5,6,8,2,7};
 int length = 10;
 int i{};
 int j{0};
 int count{};

 for(i=0;i<length-1;i++)
 {
   count = 1;
   if(A[i] != -1)
   {
     for(j=i+1;j<length;j++)
     {
       if(A[i]==A[j])
       {
         ++count;
         A[j] = -1;
       }
     }
     if(count>1)
     {
       cout<<A[i]<<" is repeated "<<count<<" times\n";
     }
   }
 }

return 0;
}
