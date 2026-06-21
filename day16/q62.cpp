//wap to find maximum frequency element in an array
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
    int max_freq = 0;
    int max_element = 0;
    for(int i=0; i<n; i++)
    {
        int freq = 0;
        for(int j=0; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                freq++;
            }
        }
        if(freq > max_freq)
        {
            max_freq = freq;
            max_element = arr[i];
        }
    }
    cout<<"The element with maximum frequency is: "<<max_element<<endl;
    return 0;
}