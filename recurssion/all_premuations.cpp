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
void display(vector<int> temp, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << "\t";
    }
    cout << "\n";
}
void print_all_sequnece(vector<int> arr_1, vector<int> &temp, int count, int n, vector<int> hashing)
{
    if (count == n)
    {
        display(temp, n);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (hashing[i] == 0)
        {
            temp[count] = arr_1[i];
            count = count + 1;
            hashing[i] = 1;
            print_all_sequnece(arr_1, temp, count, n, hashing);
            count = count - 1;
            hashing[i] = 0;
            temp[count] = 0;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr_1(n, 0);
    input_array(arr_1, n);
    vector<int> temp(n, 0);
    vector<int> hashing(n, 0);
    print_all_sequnece(arr_1, temp, 0, n, hashing);
    return (0);
}