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
void rotate_array(vector<int> &arr, int number)
{
    int var = arr[0];
    for (int i = 1; i < number; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[number - 1] = var;
}
int main()
{
    int number = size();
    vector<int> arr(number, 0);
    input_array(arr, number);
    rotate_array(arr, number);
    display(arr, number);
    return (0);
}