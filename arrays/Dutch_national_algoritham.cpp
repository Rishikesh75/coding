#include <iostream>
#include <vector>
using namespace std;
void input_array(vector<int> &arr_1, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr_1[i];
    }
}

void display(vector<int> arr_1, int n)
{
    for (int i : arr_1)
    {
        cout << i << "\t";
    }
    cout << "\n";
}
void swap(vector<int> &arr_1, int i, int j)
{
    int temp = arr_1[i];
    arr_1[i] = arr_1[j];
    arr_1[j] = temp;
}
void sort(vector<int> &arr_1, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr_1[mid] == 0)
        {
            swap(arr_1, mid, low);
            low = low + 1;
            mid = mid + 1;
        }
        else if (arr_1[mid] == 1)
        {
            mid = mid + 1;
        }
        else if (arr_1[mid] == 2)
        {
            if (arr_1[high] == 1)
            {
                swap(arr_1, mid, high);
                mid = mid + 1;
                high = high - 1;
            }

            else
            {
                swap(arr_1, mid, high);
                high = high - 1;
                swap(arr_1, mid, low);
                low = low + 1;
                mid = mid + 1;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr_1(n, 0);
    input_array(arr_1, n);
    sort(arr_1, n);
    display(arr_1, n);
    return (0);
}