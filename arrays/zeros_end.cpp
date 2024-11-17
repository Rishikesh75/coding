#include <iostream>
#include <vector>
using namespace std;
int size()
{
    int n_1;
    cin >> n_1;
    return n_1;
}
void input_array(vector<int> &arr_1, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr_1[i];
    }
}
void display(vector<int> arr_1, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr_1[i] << "\t";
    }
    cout << "\n";
}
int find_non_zero_index(vector<int> arr_1, int start, int size)
{
    for (int i = start; i < size; i++)
    {
        if (arr_1[i] != 0)
        {
            return i;
        }
    }
    return -1;
}
void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void move_0end(vector<int> &arr, int number)
{
    int i = 0;
    int j = i + 1;
    while (j < number)
    {
        if (arr[i] != 0)
        {
            i = i + 1;
            if (j < number)
            {
                j = j + 1;
            }
        }
        else if (arr[i] == 0)
        {
            j = find_non_zero_index(arr, i + 1, number);
            if (j != -1)
            {
                swap(arr, i, j);
                i = i + 1;
                j = j + 1;
            }
        }
    }
}
int main()
{
    int number = size();
    vector<int> arr(number, 0);
    input_array(arr, number);
    move_0end(arr, number);
    display(arr, number);
    return (0);
}