class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int size = letters.size();
        int low = 0,high = size;
        while(low<high)
        {
            int mid = (low+high)/2;
            if(letters[mid]<=target)low = mid+1;
            else high = mid;
        }
        return letters[low%size];
    }
};