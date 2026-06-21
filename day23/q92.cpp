//wap to find maximum occurring character in a string
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    
    char max_char = '\0';
    int max_freq = 0;
    
    for(int i=0; str[i] != '\0'; i++)
    {
        int freq = 0;
        for(int j=0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                freq++;
            }
        }
        if(freq > max_freq)
        {
            max_freq = freq;
            max_char = str[i];
        }
    }
    
    if(max_char != '\0')
    {
        cout<<"The maximum occurring character is: "<<max_char<<" with frequency "<<max_freq<<endl;
    }
    else
    {
        cout<<"No characters found in the string."<<endl;
    }
    
    return 0;
}