class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count= 0, n= operations.size();
        for(int i=0;i<operations.size();i++) {
            if(operations[i]=="X++") {
                count++;
            }
            else if(operations[i] == "++X")
                ++count;
            else if(operations[i] == "X--")
                count--;
            else if(operations[i] == "--X")
                --count;
        }
        return count;    
    }
};
