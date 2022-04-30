// Move all negative numbers to beginning and
// positive to end with constant extra space. Order
// of elements is not important here.
//-2,4,-6,3 = -2,-6,4,3
#include <iostream>
using namespace std;

void rearr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while(end>=start)
    {
        if (arr[start] > 0 && arr[end] > 0) // if both +ve, only end pointer chnage cause we have to shift all
                                            // positive value in right side.
        {
            end--;
        }
        else if (arr[start] > 0 && arr[end] < 0)
        { 
            int temp = arr[start];
            arr[start] = arr[end] ;
            arr[end]= temp;
            end--;
            start++;
        }
        else if (arr[start] < 0 && arr[end] > 0)   
        {
            end--;
            start++;
        }
        else if (arr[start] < 0 && arr[end] < 0)
        {
            start++;
        }

    }
    for (int i = 0; i < size; i++)
    {
         cout<<arr[i];
    }
    
    

}
int main()
{
    int n;
    cout<<"eneter the size of array";
    cin>>n;
    int arr[n];
    cout << "eneter element of array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rearr(arr, n);

    return 0;
}
