// second largest element in O(n)
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
int second_largest(vector<int> arr, int n)
{
    int var_1 = arr[0];
    int var_2 = arr[1];
    if (var_1 < var_2)
    {
        swap(var_1, var_2);
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > var_1)
        {
            swap(var_1, var_2);
            var_1 = arr[i];
        }
        else if (arr[i] > var_2 && arr[i] < var_1)
        {
            var_2 = arr[i];
        }
    }
    return var_2;
}
int main()
{
    int number = size();
    vector<int> arr(number, 0);
    input_array(arr, number);
    cout << second_largest(arr, number) << endl;
    return (0);
}