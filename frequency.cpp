//frequency
#include <iostream> //bruteforce
using namespace std;

void freq(int arr[], int size,int target)  ///////problemmmmm
{
  
    int count1 = 0;
    for (int i = 0; i < size; i++)
    {
       if (arr[i]==target)
       {
        count1+= 1;
       }
       
    }
     cout<<count1;    
    
}
int main()
{
    int n;
    cout << "eneter the size of array";
    cin >> n;
    int arr[n];
    cout << "eneter element of array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   int target;
   cout<<"enter target value:";
   cin>>target;
    freq(arr, n, target);

    return 0;
}
