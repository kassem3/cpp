// 2-Dimensional Arrays

#include<iostream>
using namespace std;

int main()
{
    int a [3][5] = {23,37,59,55,64,88,42,25,12,74,76,48,45,32,90};
/* 3 represents no. of rows, 5 represents no. of columns or elements.
   The total no. of elements can be found by multiplying 3 by 5 = 15. */

   // More readable method:
   int b [3][5] = {{23,37,59,55,64}, {88,42,25,12,74}, {76,48,45,32,90}};

   // Displaying using index numbers:
   cout<<b[0][0]<<endl; //1st element = 23

   cout<<b[0][4]<<endl; //64

   cout<<b[1][2]<<endl; //25

   cout<<b[2][4]<<endl; //90

   // Table for simplification:
   //   index   0  1  2  3  4
   //       0  {23,37,59,55,64}
   //       1  {88,42,25,12,74}
   //       2  {76,48,45,32,90}


    return 0;
}
