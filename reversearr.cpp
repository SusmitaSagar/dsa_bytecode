//reverse an array 
#include <iostream>
using namespace std;

void revarr(int arr[], int s, int e)
{
    while (s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
// print array
void prntarr(int arr[], int n){

    for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6 , 7};  // 4th one swapping with itsself.
    // for both even and odd size
    int n = sizeof(arr) / sizeof(arr[0]);  // size of one element
    prntarr (arr , n);
    revarr(arr, 0 ,n-1);     /////// s =0, e =  n-1
    cout<<"reverse arr"<<endl;
    prntarr(arr,n);
    return 0;

}

