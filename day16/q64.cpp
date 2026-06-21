//wap to remove duplicates from an array
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
    int new_size = 0;
    for(int i=0; i<n; i++)
    {
        bool is_duplicate = false;
        for(int j=0; j<new_size; j++)
        {
            if(arr[i] == arr[j])
            {
                is_duplicate = true;
                break;
            }
        }
        if(!is_duplicate)
        {
            arr[new_size] = arr[i];
            new_size++;
        }
    }
    cout<<"Array after removing duplicates: ";
    for(int i=0; i<new_size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}