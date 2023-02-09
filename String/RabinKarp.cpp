https://leetcode.com/problems/repeated-string-match/description/

// C++ code
int repeatedStringMatch(string a, string b) {
        int r = 1, max = b.length()/a.length();
        string repeatedStr = a;
        while(true){
            if(repeatedStr.find(b) != string::npos)
                return r;
            if(r > (max+1))
                break;
            repeatedStr += a;
            r++;
        }
        return -1;
    }

// C# code
public int RepeatedStringMatch(string a, string b) {
        int r = 1, max = b.Length/a.Length;
        string repeatedStr = a;
        while(true){
            if(repeatedStr.Contains(b))
                return r;
            if(r > (max+1))
                break;
            repeatedStr += a;
            r++;
        }
        return -1;
    }
