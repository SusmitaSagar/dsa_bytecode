// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//      cin >>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//      for ( int i = 1; i <n; i++)
//      {
//         int newarr = arr[i];
//         int j=i-1;
//         while (arr[j]>newarr && j>=0)
//         {
//         arr[j+1] = arr[j]; 
//         j--;
//         }
//         arr[j+1]=newarr;
//      }
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
  int  myarr[5] = {6,3,2,5,1} ; //sum of natural no n(n+1)/2
   cout<<"\n Input list \n:";
   for (int i = 0; i <5; i++)
   {
     cout<<myarr[i]<<"\t";
   }
   for (int k=1;k<5;k++) //index is 1
   {
     int temp = myarr[5];
     int j =k-1;
     while(j>=0 && temp <=myarr[j]){ //cont. comparison
       myarr[j+1] = myarr[j];
       j=j-1;
     }
     myarr[j+1] = temp;
   }
   cout<<"\n sorted list is \n";
   for (int i = 0; i < 5; i++)
   {
     cout<<myarr[i]<<"\t";
   }
   }