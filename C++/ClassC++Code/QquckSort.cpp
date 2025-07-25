#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int i, j, temp, Mainloop, pivot;
    // Array Input
    for (i = 0; i < 10; i++)
    {
        cout << "Enter value " << i + 1 << " :" << endl;
        cin >> arr[i];
    }
    // Array Input End
    for (Mainloop = 0; Mainloop <= 9; Mainloop++)
    {
        // if you want to find length then use this    int len = sizeof(arr)/sizeof(arr[0]);
        pivot = arr[9];
        i = 0;
        j = 9;
        while (i <= 9 && j >= 0)
        {
            while (arr[i] <= pivot)
            {
                i = i + 1;
            }
            while (arr[j] >= pivot)
            {
                j = j - 1;
            }
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            if (i = j)
            {
                temp = arr[i];
                arr[i] = pivot;
                arr[9] = temp;
                break;
            }
        }
    }
    // printing sorted array
    for (i = 0; i <= 9; i++)
    {
        cout << arr[i] << " ,";
    }
    return 0;
}