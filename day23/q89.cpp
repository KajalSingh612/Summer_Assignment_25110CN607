//wap to find first non repeating character in a string
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    
    char non_repeating = '\0';
    
    for(int i=0; str[i] != '\0'; i++)
    {
        bool is_repeating = false;
        for(int j=0; str[j] != '\0'; j++)
        {
            if(i != j && str[i] == str[j])
            {
                is_repeating = true;
                break;
            }
        }
        if(!is_repeating)
        {
            non_repeating = str[i];
            break;
        }
    }
    
    if(non_repeating != '\0')
    {
        cout<<"The first non-repeating character is: "<<non_repeating<<endl;
    }
    else
    {
        cout<<"No non-repeating character found."<<endl;
    }
    
    return 0;
}