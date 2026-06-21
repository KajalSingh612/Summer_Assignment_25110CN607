//wap to check character frequency in a string
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    
    char ch;
    cout<<"Enter the character to check frequency: ";
    cin>>ch;
    
    int frequency = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            frequency++;
        }
    }
    
    cout<<"The frequency of character '"<<ch<<"' in the string is: "<<frequency<<endl;
    
    return 0;
}