https://leetcode.com/problems/roman-to-integer/description/
// extra space
int romanToInt(string s) {
        map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int res = 0;
        for(int i=0; i<s.length(); i++){
            if( (i+1) < s.length() && (
                (s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')) ||
                (s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')) ||
                (s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')) ) ) {
                    res += (romanMap[s[i+1]] - romanMap[s[i]]);
                    i++;
                }
            else {
                res += romanMap[s[i]];
            }
        }
        return res;
    }
// without extra space
int romanToInt(string s) {
        int res = 0;
        for(int i=0; i<s.length(); i++){
            switch(s[i]){
                case 'I':
                    if((i+1)<s.length() && (s[i+1]=='V' || s[i+1]=='X'))
                        res -= 1;
                    else
                        res += 1;
                    break;
                case 'V':
                    res += 5;
                    break;
                case 'X':
                    if((i+1)<s.length() && (s[i+1]=='L' || s[i+1]=='C'))
                        res -= 10;
                    else
                        res += 10;
                    break;
                case 'L':
                    res += 50;
                    break;
                case 'C':
                    if((i+1)<s.length() && (s[i+1]=='D' || s[i+1]=='M'))
                        res -= 100;
                    else
                        res += 100;
                    break;
                case 'D':
                    res += 500;
                    break;
                case 'M':
                    res += 1000;
                    break;
                default:
                    break;
            }
        }
        return res;
    }
