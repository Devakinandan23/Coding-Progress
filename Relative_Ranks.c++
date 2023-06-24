class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>s{"Gold Medal","Silver Medal","Bronze Medal"};
        vector<int> sor;
        sor = sort(score.begin(),score.end());
        vector<string>ans;
        int count = 0;
        int num = 4;
        for(int i = 0; i < score.size();i++) 
        { 
            int max = *max_element (score.begin(), score.end());
            
            if(max == score[i] && count < 3)
            {
                ans.push_back(s[count]);
                count++;
                score[i] = 0;
            }
            while(  != )
            for(int j = 0;j < score.size();j++)
            {
                if(score[i]  )
            }
        }
        return ans;
        } 
    };
    
