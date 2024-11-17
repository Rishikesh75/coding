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
void display(vector<int> arr_1)
{
    for (int i : arr_1)
    {
        cout << i << "\t";
    }
    cout << "\n";
}
vector<int> leaders_in_array(vector<int> arr, int n)
{
    int min_left_smallest = arr[n - 1];
    vector<int> temp;
    temp.push_back(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > min_left_smallest)
        {
            min_left_smallest = arr[i];
            temp.push_back(arr[i]);
        }
    }
    return temp;
}
int main()
{
    int n = size();
    vector<int> arr_1(n, 0);
    input_array(arr_1, n);
    vector<int> temp = leaders_in_array(arr_1, n);
    display(temp);
    return (0);
}