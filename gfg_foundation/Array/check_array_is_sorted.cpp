#include <bits/stdc++.h>
using namespace std;

void check_the_sorted_array(vector<int> arr)
{
    if (arr.size() == 1) cout<<"Yes"<<endl;
    else 
    {
        int flag = 1;
        for (int i = 0; i < arr.size()-1; i++)
        {
            if (arr[i] < arr[i+1]) continue;
            else  flag = 0; break; 
        }
        if (flag == 0 )cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
        
}
int main()
{
    vector<int> arr= {3,2};
    check_the_sorted_array(arr);
    return 0;
}