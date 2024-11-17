// buy and sell stocks
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
    for (int i : arr_1)
    {
        cout << i << "\t";
    }
    cout << "\n";
}
void create_temp(vector<int> &arr, vector<int> &temp, int n)
{
    int min = arr[0];
    temp.push_back(min);
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        temp.push_back(min);
    }
}
int best_buy(vector<int> arr, int n)
{
    vector<int> temp;
    create_temp(arr, temp, n);
    display(temp, n);
    int value = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            value = arr[i] - temp[i];
        }
        else
        {
            value = max(value, arr[i] - temp[i]);
        }
    }
    return value;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    input_array(arr, n);
    cout << best_buy(arr, n) << endl;
    return (0);
}