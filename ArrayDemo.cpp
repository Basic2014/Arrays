#include <iostream>
using namespace std;

int main()
{

  // //first way only in stack
  // int A[2][3] = {{1,2,3},{4,5,6}};
  //
  // //stack and heap
  // int *B[2];
  // B[0] =  new int[3];
  // B[1] =  new int[3];


  //only in heap
  int **C = new int*[4];
  C[0] = new int[3];
  C[1] = new int[3];
  C[2] = new int[3];
  C[3] = new int[3];

  for(int i = 0 ; i < 4;i++)
  {
    for(int j= 0;j<3;j++)
    {
      C[i][j] = 10;
    }
  }
  for(int i = 0 ; i < 4;i++)
  {
    for(int j= 0;j<3;j++)
    {
      cout<<C[i][j]<<" ";
    }
    cout<<endl;
  }


  return 0;
}
