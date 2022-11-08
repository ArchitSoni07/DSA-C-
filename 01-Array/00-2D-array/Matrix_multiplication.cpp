#include <iostream>
using namespace std;

int main()
{
    int n1, m1;
    cout << "Enter The Number of First Rows : \n";
    cin >> n1;
    cout << "Enter the Number of First Columns : \n";
    cin >> m1;

    int n2, m2;
    cout << "Enter The Number of Second Rows : \n";
    cin >> n2;
    cout << "Enter the Number of Second Columns : \n";
    cin >> m2;

    int arr1[n1][m1];
    int arr2[n2][m2];
    int arr3[n1][m2];

    if (m1 != n2)
    {
        cout << "Invalid Dimensions " << m1 << " and " << n2 << endl;
    }
    else
    {
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                arr3[i][j] = 0;
            }
        }

        cout << "Enter the first Matrix of Dimensions " << n1 << " x " << m1 << " " << endl;
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                cin >> arr1[i][j];
            }
        }

        cout << "Enter the Second Matrix of Dimensions " << n2 << " x " << m2 << " " << endl;
        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                cin >> arr2[i][j];
            }
        }

        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                for (int k = 0; k < m1; k++)
                {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }

        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                cout << arr3[i][j] << "  ";
            }
            cout << endl;
        }
    }

    return 0;
}