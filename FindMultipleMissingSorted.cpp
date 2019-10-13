//Print out the multiple missing elements if the array starts sorted list : O(n)
#include <iostream>

using namespace std;

const int sizex = 8;

int main()
{
  int array[] {1,2,3,4,7,9,10,13};
  int dif = array[0];

  for(size_t i{0};i<sizex;i++)
  {
    if(array[i]-i != dif)
    {
      while(dif<array[i]-i)
      {
        cout<<(i+dif)<<" ";
        ++dif;
      }
    }
  }

return 0;
}
