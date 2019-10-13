//O(n)
//Array should not contain duplicates
#include <iostream>

using namespace std;

int main()
{

 int A[] {6,3,8,10,16,7,5,2,9,14};
 int length = 10;
 int k {10};
 //max of A = 16,in order to reach 16th element we need to create H[17]
 int H[17]{0};
 int i{};

 for(i=0;i<length;i++)
 {
   if(A[i]>=0 && A[i]<=10)
   {
    if(H[k-A[i]] != 0)
    {
     cout<<A[i]<<" + "<<(k-A[i])<<" = "<<k<<endl;
    }
    H[A[i]]++;
  }
 }


 return 0;
}
