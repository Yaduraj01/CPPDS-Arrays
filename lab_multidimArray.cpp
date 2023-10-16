#include <iostream>
using namespace std;
/*input of a user defined array*/
/*main()
{
    int r,c;
    cout << "enter rows: ";
    cin >> r;
    cout<< "enter columns: ";
    cin >> c;
    int a[r][c];
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            cout << "Enter" << "a[" << r << "][" << c << "]: " ;
            cin >> a[r][c];
        }
    }
    cout << "\n";
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            cout << " " << a[r][c]; 
        }
        cout << "\n";
    }
}*/

/*Addition of matrix*/
/*main()

{
    int a[2][2], b[2][2];
    int i,j;

    cout<< "Enter matrix 1";
    cout << "\n";
      for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout << "Enter" << "a[" << i << "][" << j << "]: " ;
            cin >> a[i][j];
        }
    }

    cout<< "Enter matrix 2";
    cout << "\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout << "Enter" << "b[" << i << "][" << j << "]: " ;
            cin >> b[i][j];
        }
    }
    cout<< "addition is";
    cout << "\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout << a[i][j] + b[i][j];
        }
        cout << "\n";
    }
}*/

/*find diagnol sum*/
main()
{
    int i,j,sum;
    int a[3][3];
    for(i = 0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            cout << "Enter" << "a[" << i << "][" << j << "]: " ;
            cin >> a[i][j];
        }
    }
     cout << "\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout << " " << a[i][j]; 
        }
        cout << "\n";
    }
    for(i = 0; i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum += a[i][j];
            }
        }
    }
    cout << "diagnal sum is: " << sum;
}