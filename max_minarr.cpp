// Write a program to find maximum andminimum element of an array. Your program
// should accept N elements, all integer values thenthe program should display the minimum and
// maximum element in the array with theircorresponding index number.

#include <iostream>
using namespace std;

void max_min(int arr[], int size)
{
    int i = 0;
    int max = arr[i];  // iniatlizing max number to first value
    int index_max = i; // intializing max index to 0
    int min = arr[i];
    int index_min = i;
    i += 1; // i=i+1;
    for (; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index_max = i;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            index_min = i;
        }
    }
    cout << "the max value is= " << max << ", at index= " << index_max << endl;
    cout << "the min value is= " << min << ", at index= " << index_min << endl;
}

int main()
{
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "enter the element of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max_min(arr, n);
    return 0;
}
/**
 * @brief
 * arr=[5, 8, 9, 1, 0, 6]
 * i=0
 * currentMax=arr[i]   *5*  8 9 _ _ _
 * currentMin=arr[i++] *5*  _ _ 1 0 _
 * for(;i<n;i++){
 * if(arr[i]>currentMax){
 *    currentMax=arr[i]
 * }else{}
 * }
 *
 */