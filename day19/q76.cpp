//wap to find diagonal sum of a matrix
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
    
    int diagonal_sum = 0;
    for(int i=0; i<rows; i++)
    {
        diagonal_sum += matrix[i][i]; // Adding primary diagonal elements
    }
    
    cout<<"The sum of the primary diagonal is: "<<diagonal_sum<<endl;
    
    return 0;
}