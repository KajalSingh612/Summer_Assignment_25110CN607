//wap to find common characters in two strings
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100], str2[100];
    cout<<"Enter first string: ";
    cin.getline(str1, 100);
    cout<<"Enter second string: ";
    cin.getline(str2, 100);

    char common[100];
    int j = 0;

    for(int i=0; str1[i] != '\0'; i++)
    {
        for(int k=0; str2[k] != '\0'; k++)
        {
            if(str1[i] == str2[k])
            {
                bool is_already_added = false;
                for(int l=0; l<j; l++)
                {
                    if(common[l] == str1[i])
                    {
                        is_already_added = true;
                        break;
                    }
                }
                if(!is_already_added)
                {
                    common[j] = str1[i];
                    j++;
                }
                break;
            }
        }
    }
    common[j] = '\0';

    cout<<"Common characters: "<<common<<endl;

    return 0;
}