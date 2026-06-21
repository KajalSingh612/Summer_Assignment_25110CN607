//wap to merge arrays
#include<iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout<<"Enter the size of the first array: ";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the elements of the first array: ";
    for(int i=0; i<n1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the size of the second array: ";
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the elements of the second array: ";
    for(int i=0; i<n2; i++)
    {
        cin>>arr2[i];
    }
    int merged_size = n1 + n2;
    int merged[merged_size];
    for(int i=0; i<n1; i++)
    {
        merged[i] = arr1[i];
    }
    for(int i=0; i<n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }
    cout<<"Merged array: ";
    for(int i=0; i<merged_size; i++)
    {
        cout<<merged[i]<<" ";
    }
    cout<<endl;
    return 0;
}