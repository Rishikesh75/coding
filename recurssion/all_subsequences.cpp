// all the suzsequences pick or not pick
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
    if (n == 0)
    {
        cout << "Empty" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << "\t";
    }
    cout << "\n";
}
void print_all_sequnece(vector<int> arr_1, vector<int> &temp, int count, int n)
{
    if (count == n)
    {
        display(temp, temp.size());
        return;
    }
    temp.push_back(arr_1[count]);
    count = count + 1;
    print_all_sequnece(arr_1, temp, count, n);
    temp.pop_back();
    print_all_sequnece(arr_1, temp, count, n);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr_1(n, 0);
    input_array(arr_1, n);
    vector<int> temp;
    print_all_sequnece(arr_1, temp, 0, n);
    return (0);
}