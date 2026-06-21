//wap to reverse a string
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    
    // Finding the length of the string
    int length = 0;
    while(str[length] != '\0')
    {
        length++;
    }
    
    // Reversing the string
    char reversed[100];
    for(int i=0; i<length; i++)
    {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; // Null-terminate the reversed string
    
    cout<<"Reversed string: "<<reversed<<endl;
    
    return 0;
}