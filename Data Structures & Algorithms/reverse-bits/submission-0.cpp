class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
          uint32_t ans = 0;

        for (int i = 0; i < 32; i++) {

            int bit = n & 1;      // Last bit nikalo

            ans = ans << 1;       // Answer me jagah banao

            ans = ans + bit;      // Bit add kar do (OR bhi use kar sakte ho)

            n = n >> 1;           // Next bit par jao
        }

        return ans;
    }
    
    
};
