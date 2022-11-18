#include<iostream>

using namespace std;
 int array_sum ( int arr[] , int size)
 {
    int sum =0;
    for ( int i=0 ; i<size; i++)                 // 0(n)
    {
        sum = sum + arr[i];

    }
    return sum;
 }

  int main()
  {
     int array[10]= {1,3,45,67,8,10,17,17,14,18};
      int answer= array_sum(array, 10);
          cout<<" the sum of the array is "<<answer<<endl;
  }

   // time comlexity is 0(n)