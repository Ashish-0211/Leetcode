class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> pq(s.begin(),s.end());
        while(pq.size()>1)
        {
            int b = pq.top();
            pq.pop();
            int a = pq.top();
            pq.pop();
            if(a!=b)pq.push(b-a);
        }
        if(pq.empty())
            return 0;
        return pq.top();
    }
};