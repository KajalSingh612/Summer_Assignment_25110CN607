//wap to find first repeating character in a string
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    
    char repeating = '\0';
    
    for(int i=0; str[i] != '\0'; i++)
    {
        for(int j=i+1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                repeating = str[i];
                break;
            }
        }
        if(repeating != '\0')
        {
            break;
        }
    }
    
    if(repeating != '\0')
    {
        cout<<"The first repeating character is: "<<repeating<<endl;
    }
    else
    {
        cout<<"No repeating character found."<<endl;
    }
    
    return 0;
}