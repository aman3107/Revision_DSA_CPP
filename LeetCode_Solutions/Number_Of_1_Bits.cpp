/*

 class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n != 0){
            n &= (n-1);
            cout << n;
            ans++;
        }
        return ans;
    }
};
*/