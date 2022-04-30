// 4 ..Given an array nums with n objects colored red,white, or blue, sort them in-place so that objects
// of the same color are adjacent, with the colors inthe order red, white, and blue. We will use the
// integers 0, 1, and 2 to represent the color red,white, and blue, respectively.
#include <iostream> //bruteforce
using namespace std;

void rearr(int arr[], int size)  ///////problemmmmm
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < size; i++)
    {
        switch (i)
        {
        case 0:
            count0 += 1;
            break;
        case 1:
            count1 += 1;
            break;
        case 2:
            count2 += 1;
            break;
        }
    }
    for (int i = 0; i < count0; i++)
    {
        cout<<"0";
    }
    for (int i = count0; i < (count0+count1); i++)
    {
        cout<<"1";
    }
    for (int i = (count0+count1); i < size; i++) //why not (count0+count1+count2) inplace of n
    {
        cout<<"2";
    }
    
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

    rearr(arr, n);

    return 0;
}
