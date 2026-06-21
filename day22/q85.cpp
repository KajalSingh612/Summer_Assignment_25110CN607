//wap to check palindrome string
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    
    int length = 0;
    while(str[length] != '\0')
    {
        length++;
    }
    
    bool is_palindrome = true;
    for(int i=0; i<length/2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            is_palindrome = false;
            break;
        }
    }
    
    if(is_palindrome)
    {
        cout<<"The string is a palindrome."<<endl;
    }
    else
    {
        cout<<"The string is not a palindrome."<<endl;
    }
    
    return 0;
}