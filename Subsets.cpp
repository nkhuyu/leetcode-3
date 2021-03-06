class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > result;
        sort(S.begin(), S.end());
        int len = S.size();
        int upper = pow(2, len);
        for (int i = 0; i != upper; i++){
            vector<int> tmp;
            for (int j = 0; j != len; j++){
                if ((1<<j)&i)
                    tmp.push_back(S[j]);
            }
            result.push_back(tmp);
        }
        return result;
    }
};