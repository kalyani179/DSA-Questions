class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        unordered_map<double,int> m;
        int count = 0;
        for(int i=0;i<n;i++){
            double x = double(denominator[i]-numerator[i])/double(denominator[i]);
            double y = double(numerator[i])/double(denominator[i]);
            if(m.find(x)!=m.end()){
                count+=m[x];
            }
            m[y]++;
        }
        return count;
    }
};