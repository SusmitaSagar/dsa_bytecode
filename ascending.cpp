// descending order
#include<iostream>
using namespace std;
int main(){
    int myarr[5] = {5,2,4,6,3};          
    int temp;

     for (int j = 0; j < 5; j++)
     {
    for ( int i = 0; i < 5 ; i++)
    {
        if ( myarr[i] > myarr[i+1])
        {
          temp = myarr[i];
          myarr[i] = myarr[i+1];
          myarr[i+1] = temp;
        }
    } }
// print array
cout<<"{";
for (int i = 0; i < 5; i++)
{
    cout<<myarr[i]<<" , ";
   
}
 cout<<"}";

   return 0;// gives only one smallest value
}