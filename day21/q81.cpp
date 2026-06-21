//wap to find string length without using strlen function
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
    
    cout<<"The length of the string is: "<<length<<endl;
    
    return 0;
}