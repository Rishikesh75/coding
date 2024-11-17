#include <iostream>
#include <vector>
#include <map>
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

void create_map(vector<int> arr_1, int n, map<int, int> &m_1)
{
    int temp = 0;
    m_1[0] = -1; // To handle cases where the sum is achieved from the beginning
    for (int i = 0; i < n; i++)
    {
        temp += arr_1[i];
        if (m_1.find(temp) == m_1.end()) // Only insert if temp is not already in the map
        {
            m_1[temp] = i;
        }
    }
}

void display_map(map<int, int> m_1)
{
    for (pair<int, int> pair : m_1)
    {
        cout << pair.first << ":" << pair.second << " ";
    }
    cout << "\n";
}

int largest_subarray(vector<int> arr_1, map<int, int> m_1, int size, int sum)
{
    int sum_temp = 0;
    int len = 0;
    for (int i = 0; i < size; i++)
    {
        sum_temp += arr_1[i];

        // Check if the sum from the start to i matches the target sum
        if (sum_temp == sum)
        {
            len = i + 1;
        }

        int var = sum_temp - sum;

        // Check if var is present in the map
        if (m_1.find(var) != m_1.end())
        {
            int find_index = m_1[var];
            len = max(len, i - find_index);
        }
    }
    return len;
}

int main()
{
    int number = size();
    int sum = size();
    vector<int> arr_1(number, 0);
    input_array(arr_1, number);
    map<int, int> m_1;
    create_map(arr_1, number, m_1);
    cout << largest_subarray(arr_1, m_1, number, sum);

    return 0;
}
