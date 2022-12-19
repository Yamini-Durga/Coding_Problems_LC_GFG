https://leetcode.com/problems/string-to-integer-atoi/description/

int myAtoi(string s) {
        int res=0, sign=1, i=0, len = s.length(), x=0;
        // skip whitespaces
        while(i<len && s[i]==' '){
            i++;
        }
        // + or - sign
        if(s[i]=='-' || s[i]=='+')
            sign = s[i++]=='-' ? -1 : 1;
        // digits
        while(i<len && isdigit(s[i])){
            x = s[i++]-'0';
            if(res > INT_MAX/10 || (res == INT_MAX/10 && x > (INT_MAX%10)) ){
                 return sign == 1 ? INT_MAX : INT_MIN;
            }
            res = res*10 + x;
        }
        return res*sign;
    }
