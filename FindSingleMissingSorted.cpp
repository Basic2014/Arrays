
//Print out the multiple missing elements if the array starts from 6 in sorted list : O(n)
#include <iostream>

using namespace std;

const int sizex = 8;

int main()
{
  int array[] {6,7,8,9,12,13,17,19};
  int dif = array[0];

  for(size_t i{0};i<sizex;i++)
  {
    if(array[i]-i != dif)
    {
        cout<<(i+dif)<<" ";
        break;
      }
    }
  }

return 0;
}
