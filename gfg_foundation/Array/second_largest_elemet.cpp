#include <bits/stdc++.h>
using namespace std;

void using_two_iteration_for_loop(vector<int> arr)
{
    int largest = INT_MIN ;
    int second_largest = INT_MIN;
    for(auto i:arr)
    {
        if (i>largest)
        {
            largest = i;
        }
    }
    for(auto i:arr)
    {
        if (i!=largest)
        {
            if (i > second_largest)
            {
                second_largest = i;
            }
        }
    }
    cout<<second_largest<<endl;
}

void check_second_largest_element(vector<int> arr)
{
    int largest = arr[0];
    int second_largest = INT_MIN;
    for (auto i:arr)
    {
        if(i>largest)
        {
            second_largest = largest;
            largest = i;
        }
        else if(i!=largest)
        {
            if(i>second_largest) second_largest = i;
        }
    }
    cout<<second_largest<<endl;
}
int main()
{
    vector<int> arr = {-10,-18,-5,-2};
    using_two_iteration_for_loop(arr);
    check_second_largest_element(arr);
    return 0;
}