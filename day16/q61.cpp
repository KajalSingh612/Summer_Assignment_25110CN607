//wap to find missing number in an array
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
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    int total = (n+1)*(n+2)/2;
    int missing = total - sum;
    cout<<"The missing number is: "<<missing<<endl;
    return 0;
}