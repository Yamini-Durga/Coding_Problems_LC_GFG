https://leetcode.com/problems/reverse-words-in-a-string/description/

string reverseWords(string s) {
        string str="", temp="";
        for(int i=0; i<s.length(); i++) {
            char ch = s[i];
            if(ch != ' '){
                temp += s[i];
            }
            else {
                if(temp != ""){
                    if(str != "")
                        str = temp + " " + str;
                    else
                        str = temp;
                    temp = "";
                }
            }
        }
        if(temp != ""){
                if(str != "")
                    str = temp + " " + str;
                else
                    str = temp;
            }
        return str;
    }
