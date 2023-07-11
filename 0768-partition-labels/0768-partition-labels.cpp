class Solution {
public:
    vector<int> partitionLabels(string s) {
        int last[27]{0};
        vector<int>v;
        for(int i=0;i<s.size();i++){
            last[s[i]-'a']=i;
        }
    int end=0;
    int counter=0;
        for(int i=0;i<s.size();i++){
            end=max(end,last[s[i]-'a']);
            counter++;
            if(i==end){
                v.push_back(counter);
                counter=0;
            }
        }
    return v;
    }

};