//wap to find pair with given sum in an array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter the target sum: ";
    cin>>sum;
    bool found = false;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                cout<<"Pair with given sum is: "<<arr[i]<<" and "<<arr[j]<<endl;
                found = true;
            }
        }
    }
    if(!found)
    {
        cout<<"No pair with given sum found."<<endl;
    }
    return 0;
}