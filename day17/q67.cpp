//wap to intersection of two arrays
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
    int intersection_size = 0;
    int intersection_arr[100]; // Assuming maximum 100 elements in intersection
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                bool is_duplicate = false;
                for(int k=0; k<intersection_size; k++)
                {
                    if(intersection_arr[k] == arr1[i])
                    {
                        is_duplicate = true;
                        break;
                    }
                }
                if(!is_duplicate)
                {
                    intersection_arr[intersection_size] = arr1[i];
                    intersection_size++;
                }
            }
        }
    }
    cout<<"Intersection of two arrays: ";
    for(int i=0; i<intersection_size; i++)
    {
        cout<<intersection_arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}