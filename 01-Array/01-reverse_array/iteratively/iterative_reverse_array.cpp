#include <iostream>
using namespace std;

int main()
{
    int lengthOfArray;
    cout << "Enter the length of array : \n";
    cin >> lengthOfArray;
    int array[lengthOfArray];
    cout << "Enter the values of array : \n";

    for (int i = 0; i < lengthOfArray; i++)
    {
        cin >> array[i];
    }
    int i = 0;
    int temp;
    while (i < lengthOfArray / 2)
    {
        temp = array[i];
        array[i] = array[lengthOfArray - i - 1];
        array[lengthOfArray - i - 1] = temp;
        i++;
    };

    for (i = 0; i < lengthOfArray; i++)
    {
        cout << array[i] << "  ";
    }
    return 0;
}