//O(n square)
//Array should not contain duplicates
#include <iostream>

using namespace std;

int main()
{

 int A[] {6,3,8,10,16,7,5,2,9,14};
 int length = 10;
 int i{};
 int j{};

 for(i=0;i<length-1;i++)
 {
     for(j=i+1;j<length;j++)
     {
       if(A[i] + A[j] == 10)
       {
         cout<<A[i]<<" + "<<A[j]<<" = 10\n";
       }
     }
   }


 return 0;
}
