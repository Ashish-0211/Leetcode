class Solution {
public:
    int scoreOfParentheses(string s) {
        if(s.size() == 0)
            return 0;
        int ans = 0;
        stack<int> help;
        // int count = 0;
        int size = s.size();
        for(int i = 0;i<size;i++)
        {
            // if(s[i] == '(')
            // {
            //     help.push(s[i]);
            //     ans+=1;
            // }
            // if(s[i] == ')')
            // {
            //     if(help.size() == 1)
            //     {
            //         help.pop();
            //         // ans+=1;
            //     }
            //     if(help.size() > 1)
            //     { ans = 0;
            //    while(!help.empty())
            //    {
            //        help.pop();
            //        ans+=1;
            //    }
            //     }
            // }
            if(s[i] == '(')
                help.push(ans),ans = 0;
            else
                ans = help.top() + max(2*ans,1),help.pop();
            
        }
        return ans;
    }
};