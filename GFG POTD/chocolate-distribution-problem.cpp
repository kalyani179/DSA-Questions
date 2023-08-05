class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        
        sort(a.begin(),a.end());
        long long diff=INT_MAX;
        int i=0,j=m-1;
        for(int i=0;j<n;i++,j++){
            diff = min(diff,a[j]-a[i]);
        }
        return diff;
    }   
};
