#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector <int> &a, int target)
{
    int s=0;
    int e=a.size()-1;
    int m=(s+e)/2;
    while(s<=e){
        if(a[m]==target)
        {
            return m;
        }
        else if(a[m]>target)
        {
            e=m-1;
        }
        else
        {
            s=m+1;
        }
        m=(s+e)/2;
    }
     return -1;
}
int main(){
    vector <int> v;
    int target;
    v={2,4,6,8,10};
    target=10;
    cout<<binarySearch(v,target);
    return 0;
}
