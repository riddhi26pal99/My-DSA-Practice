#include <iostream>

using namespace std;

int binarySearch(int arr[], int num, int key)
{

    int s = 0, e = num;

    while (s <= e)
    {

        int mid = (s + e) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int num, s;
    cout << "Enter the lenght of array:";
    cin >> num;

    cout << "Enter the elements of the array of " << num << " length:";
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to be searched:";
    cin >> s;
    int flag = 0;
    int i;

    cout << "the number is present at " << binarySearch(arr, num, s) << endl;

    return 0;
}