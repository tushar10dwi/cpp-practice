#include <bits/stdc++.h>
using namespace std;

//lower_bound
//min index s.t. arr[index]>=n(given)

int lowerBound(vector<int>v,int target,int n) {
    int low = 0;
    int high = n-1;
    int lb=n;

    while(low<=high) {
        int mid = (low+high)/2;
        if(v[mid]>=target) 
        {
            lb=mid;
            high = mid-1;
        }
        else if(v[mid]<target)
        {
            low = mid+1;
        }
    }

    return lb;
}

int main()
{
    vector<int>v = {1,2,2,3,5};
    // cout << "Lower Bound: "<<lowerBound(v,2,v.size()) <<endl;

    cout << "Using STL: "<<lower_bound(v.begin(),v.end(),2) - v.begin()<<endl;

    return 0;
}

//upper_bound
//min index s.t. arr[index]>n
//all same expect required condition: v[mid]>target

//Search insert position: Find lower_bound

//Floor = arr[index]<=n
//Ceil = arr[index]>=n => lower_bound

