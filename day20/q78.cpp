//wap to check symmetric matrix
#include<iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;
    int matrix[rows][cols];
    
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cin>>matrix[i][j];
        }
    }
    
    bool is_symmetric = true;
    if(rows != cols)
    {
        is_symmetric = false; // A non-square matrix cannot be symmetric
    }
    else
    {
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                if(matrix[i][j] != matrix[j][i])
                {
                    is_symmetric = false;
                    break;
                }
            }
            if(!is_symmetric)
            {
                break;
            }
        }
    }
    
    if(is_symmetric)
    {
        cout<<"The matrix is symmetric."<<endl;
    }
    else
    {
        cout<<"The matrix is not symmetric."<<endl;
    }
    
    return 0;
}