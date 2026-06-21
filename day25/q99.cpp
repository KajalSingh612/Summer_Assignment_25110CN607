//wap to sort names alphabetically
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char names[10][100];
    int n;

    cout<<"Enter the number of names: ";
    cin>>n;
    cin.ignore(); // To ignore the newline character left by cin

    cout<<"Enter the names: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin.getline(names[i], 100);
    }

    // Sorting the names alphabetically
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                char temp[100];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    cout<<"Names in alphabetical order: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<names[i]<<endl;
    }

    return 0;
}