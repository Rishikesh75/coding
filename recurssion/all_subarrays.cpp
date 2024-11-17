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
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << "\t";
    }
    cout << "\n";
}
void set_hash(vector<int> &hash, int end_index)
{
    for (int i = 0; i <= end_index; i++)
    {
        hash[i] = 1;
    }
}
void remove_hash(vector<int> &hash, int end_index)
{
    for (int i = 0; i <= end_index; i++)
    {
        hash[i] = 0;
    }
}
bool check_hash(vector<int> hash, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (hash[i] == 0)
        {
            return false;
        }
    }
    return true;
}
void print_all_subarrays(vector<int> arr_1, vector<int> &temp, int n, vector<int> &hash)
{
    if (check_hash(hash, n) == true)
    {
        display(temp, temp.size());
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[i] == 0)
        {
            temp.push_back(arr_1[i]);
            set_hash(hash, i);
            print_all_subarrays(arr_1, temp, n, hash);
            temp.pop_back();
            print_all_subarrays(arr_1, temp, n, hash);
            if (temp.size() == 0)
            {
                remove_hash(hash, n);
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
    vector<int> temp;
    vector<int> hash(n, 0);
    print_all_subarrays(arr_1, temp, n, hash);
    return (0);
}