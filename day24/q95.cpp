//wap to find longest word in a string
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    
    char longest[100];
    int max_length = 0;
    
    char* token = strtok(str, " ");
    while(token != nullptr)
    {
        int length = strlen(token);
        if(length > max_length)
        {
            max_length = length;
            strcpy(longest, token);
        }
        token = strtok(nullptr, " ");
    }
    
    cout<<"The longest word is: "<<longest<<endl;
    
    return 0;
}