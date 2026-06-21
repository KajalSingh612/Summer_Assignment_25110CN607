//wap to compress a string
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter a string: ";
    cin.getline(str, 100);
    
    char compressed[100];
    int j = 0;
    
    for(int i=0; str[i] != '\0'; i++)
    {
        compressed[j] = str[i];
        j++;
        
        int count = 1;
        while(str[i] == str[i+1])
        {
            count++;
            i++;
        }
        
        if(count > 1)
        {
            compressed[j] = count + '0'; // Convert count to character
            j++;
        }
    }
    compressed[j] = '\0'; // Null-terminate the compressed string
    
    cout<<"Compressed string: "<<compressed<<endl;
    
    return 0;
}