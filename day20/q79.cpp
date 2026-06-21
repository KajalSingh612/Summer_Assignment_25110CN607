//wap to find row wise sum of a matrix
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
    
    cout<<"Row-wise sum of the matrix is: "<<endl;
    for(int i=0; i<rows; i++)
    {
        int row_sum = 0;
        for(int j=0; j<cols; j++)
        {
            row_sum += matrix[i][j];
        }
        cout<<"Sum of row "<<i+1<<": "<<row_sum<<endl;
    }
    
    return 0;
}