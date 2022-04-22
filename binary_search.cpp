#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in the vector: "<<"\n";
    cin>>n;

    int low = 0, high = n-1;
    cout<<"Enter the target value: "<<"\n";
    int target;
    cin>>target;

    int mid = 0;
    vector<int> v;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    // binary search algorithm
    while(low < high)
    {
        mid = low + (high - low)/2;
        if(v[mid] == target)
        {
            cout<<"Element found";
            break;
        }
        if(v[mid] < target)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout<<"Not found";
}