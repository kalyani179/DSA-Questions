class Solution {
public:
    string sortVowels(string s) {
        vector<char> v;
        for(auto x:s){
           if(x=='a' || x=='e' || x=='u' || x=='o' || x=='i' || x=='A' || x=='E' || x=='I' || x=='U' || x == 'O'){
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end()); int j = 0;int i = 0; 
        string t;
        for(auto x:s){
            if(x=='a' || x=='e' || x=='u' || x=='o' || x=='i' || x=='A' || x=='E' || x=='I' || x=='U' || x == 'O'){
                t.push_back(v[j++]);
            }
            else{
                t.push_back(x);
            }
        }
        return t;
    }
};