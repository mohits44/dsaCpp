#include <iostream>
#include <vector>
using namespace std;
int firstOccurence(vector <int>& a, int target);
int lastOccurence(vector <int>& a, int target);
vector <int> firstLastOccurence(vector <int>& a, int target);

vector <int> firstLastOccurence(vector <int>& a, int target)
{
    vector <int> b;
    b.push_back(firstOccurence(a,target));
    b.push_back(lastOccurence(a,target));
    return b;
}
int firstOccurence(vector <int>& a, int target)   //index return karega
{
    //copy 1_binary search.cpp
    //use ans variable and modifications as required
     int s=0;
    int e=a.size()-1;
    int m=(s+e)/2;
    int ans=-1; //extra
    while(s<=e){
        if(a[m]==target)
        {
            // return m;
            ans=m;
            e=m-1;
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
    //  return -1;
    return ans;
}
int lastOccurence(vector <int>& a, int target)
{
    //copy above firstOccurence function
    //do modifications as required
    //copy 1_binary search.cpp
    //use ans variable and modifications as required
     int s=0;
    int e=a.size()-1;
    int m=(s+e)/2;
    int ans=-1; //extra
    while(s<=e){
        if(a[m]==target)
        {
            // return m;
            ans=m;
            s=m+1; //difference for last occurence
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
    return ans;
}
int main(){
    vector <int> a,retv;
    
    int target;
    a={2,4,4,4,10};

    target=4;
    retv=firstLastOccurence(a,target);
    for(int i=0;i<retv.size();i++)
    {
        cout<<retv[i]<<" ";
    }
    
    return 0;
}
