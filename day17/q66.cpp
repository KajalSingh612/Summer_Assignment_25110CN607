//wap to union of two arrays
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
    int union_size = n1 + n2;
    int union_arr[union_size];
    for(int i=0; i<n1; i++)
    {
        union_arr[i] = arr1[i];
    }
    for(int i=0; i<n2; i++)
    {
        union_arr[n1 + i] = arr2[i];
    }
    // Remove duplicates from union_arr
    int new_size = 0;
    for(int i=0; i<union_size; i++)
    {
        bool is_duplicate = false;
        for(int j=0; j<new_size; j++)
        {
            if(union_arr[i] == union_arr[j])
            {
                is_duplicate = true;
                break;
            }
        }
        if(!is_duplicate)
        {
            union_arr[new_size] = union_arr[i];
            new_size++;
        }
    }
    cout<<"Union of two arrays: ";
    for(int i=0; i<new_size; i++)
    {
        cout<<union_arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}