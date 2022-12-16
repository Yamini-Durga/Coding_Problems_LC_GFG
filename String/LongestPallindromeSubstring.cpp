https://leetcode.com/problems/longest-palindromic-substring/description/

int ps=0, pe=0;
    void checkPallindrome(string s, int l, int h, int len) {
        while(l>=0 && h<len && s[l] == s[h]){
                if((pe-ps+1) < (h-l+1)){
                    ps = l;
                    pe = h;
                }
                l--; h++;
            }
    }
    string longestPalindrome(string s) {
        int l, h, len = s.length();
        for(int i=0; i<len; i++){
            // odd length
            l = h = i;
            checkPallindrome(s, l, h, len);
            // even length
            l = i; h = i+1;
            checkPallindrome(s, l, h, len);
        }
        return s.substr(ps, (pe-ps+1));
    }
