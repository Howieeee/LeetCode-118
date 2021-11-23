class Solution {
public:
    vector<int> helper(vector<int> init){
        //cout << init.size();
        vector<int> p(init.size()+1,0);
        //cout << p.size();
        for(int i=0;i<p.size();i++){
            if(i==0 || i== p.size()-1)
                p[i] = 1;
            else
                p[i] = init[i-1] + init[i];
        }
        
        return p;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> init(1,1), init2 (2,1);
        ans.push_back(init);
        if(numRows==1)
            return ans;
        ans.push_back(init2);
        if(numRows==2)
            return ans;
        for(int i=2;i<numRows;i++){
            init2 = helper(init2);
            ans.push_back(init2);
        }
        
        
        return ans;
    }
};


/*
                1  c1,0 
               1 1 c1,0 c1,1
              1 2 1 c2,0 ,c2,1. c,2,2





*/
