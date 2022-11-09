#include <bits/stdc++.h>
using namespace std;

int find_largest_value(vector<int> arr)
{
    int temp = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > temp) 
        {
            temp = arr[i];
        }
    }
    return temp;
}

int main()
{
    vector<int> arr = {1,62,3,44,5,96};
    int ans = find_largest_value(arr);
    cout<<"Largest value of array is "<<ans<<endl;
    return 0;
}