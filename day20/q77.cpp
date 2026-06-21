//wap to multiply two matrices
#include<iostream>
using namespace std;
int main()
{
    int rows1, cols1, rows2, cols2;
    cout<<"Enter the number of rows and columns for the first matrix: ";
    cin>>rows1>>cols1;
    int matrix1[rows1][cols1];
    
    cout<<"Enter the elements of the first matrix: "<<endl;
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<cols1; j++)
        {
            cin>>matrix1[i][j];
        }
    }
    
    cout<<"Enter the number of rows and columns for the second matrix: ";
    cin>>rows2>>cols2;
    int matrix2[rows2][cols2];
    
    cout<<"Enter the elements of the second matrix: "<<endl;
    for(int i=0; i<rows2; i++)
    {
        for(int j=0; j<cols2; j++)
        {
            cin>>matrix2[i][j];
        }
    }
    
    if(cols1 != rows2)
    {
        cout<<"Matrix multiplication is not possible."<<endl;
        return 0;
    }
    
    int product[rows1][cols2];
    
    // Initializing the product matrix with zeros
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<cols2; j++)
        {
            product[i][j] = 0;
        }
    }
    
    // Multiplying the two matrices
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<cols2; j++)
        {
            for(int k=0; k<cols1; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    cout<<"The product of the two matrices is: "<<endl;
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<cols2; j++)
        {
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}