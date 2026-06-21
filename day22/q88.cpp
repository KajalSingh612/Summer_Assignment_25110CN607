//wap to remove spaces from a string
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
        if(str[i] != ' ')
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0'; // Null-terminate the result string
    
    cout<<"String after removing spaces: "<<result<<endl;
    
    return 0;
}