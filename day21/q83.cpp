//wap to count vowels and consonants in a string
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    
    int vowel_count = 0;
    int consonant_count = 0;
    
    for(int i=0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            ch = tolower(ch); // Convert to lowercase for uniformity
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowel_count++;
            }
            else
            {
                consonant_count++;
            }
        }
    }
    
    cout<<"Number of vowels: "<<vowel_count<<endl;
    cout<<"Number of consonants: "<<consonant_count<<endl;
    
    return 0;
}