//wap to count words in a string
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    
    int word_count = 0;
    bool in_word = false;
    
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            if(!in_word)
            {
                word_count++;
                in_word = true;
            }
        }
        else
        {
            in_word = false;
        }
    }
    
    cout<<"Number of words in the string: "<<word_count<<endl;
    
    return 0;
}