// Rotate the array
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
void copy_arr(vector<int> arr, vector<int> &arr_copy, int d)
{

    for (int i = 0; i < d; i++)
    {
        arr_copy[i] = arr[i];
    }
}
void rotate_array(vector<int> &arr, int number, int d, int n)
{
    int index = 0;
    vector<int> arr_copy(d, 0);
    copy_arr(arr, arr_copy, d);
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d + 1; i < n; i++)
    {
        arr[i] = arr_copy[index];
        index = index + 1;
    }
    display(arr, n);
}
int main()
{
    int number = size();
    int d;
    cin >> d;
    vector<int> arr(number, 0);
    input_array(arr, number);
    rotate_array(arr, number, d, number);
    // display(arr, number);
    return (0);
}