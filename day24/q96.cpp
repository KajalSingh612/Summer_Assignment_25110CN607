//wap to remove duplicate characters from a string
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    
    char result[100];
    int j = 0;
    
    for(int i=0; str[i] != '\0'; i++)
    {
        bool is_duplicate = false;
        for(int k=0; k<j; k++)
        {
            if(str[i] == result[k])
            {
                is_duplicate = true;
                break;
            }
        }
        if(!is_duplicate)
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0'; // Null-terminate the result string
    
    cout<<"String after removing duplicate characters: "<<result<<endl;
    
    return 0;
}