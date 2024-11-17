// union of two sorted arrays
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
vector<int> union_array(vector<int> arr_1, vector<int> arr_2, int n)
{
    vector<int> temp;
    int i_1 = 0;
    int i_2 = 0;
    while (i_1 != n || i_2 != n)
    {
        if (i_1 != n && i_2 != n)
        {
            if (arr_1[i_1] < arr_2[i_2])
            {
                temp.push_back(arr_1[i_1]);
                i_1 = i_1 + 1;
            }
            else
            {
                temp.push_back(arr_2[i_2]);
                i_2 = i_2 + 1;
            }
        }
        else if (i_1 == n && i_2 != n)
        {
            temp.push_back(arr_2[i_2]);
            i_2 = i_2 + 1;
        }
        else if (i_1 != n && i_2 == n)
        {
            temp.push_back(arr_1[i_1]);
            i_1 = i_1 + 1;
        }
    }
    return temp;
}
int main()
{
    int n = size();
    vector<int> arr_1(n, 0);
    vector<int> arr_2(n, 0);
    input_array(arr_1, n);
    input_array(arr_2, n);
    vector<int> temp = union_array(arr_1, arr_2, n);
    display(temp, temp.size());
    return (0);
}