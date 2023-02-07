https://leetcode.com/problems/longest-common-prefix/description/

// C++ code
string longestCommonPrefix(vector<string>& strs) {
        int maxL = strs[0].length(), curL;
        for(int i=1; i<strs.size(); i++){
            curL = 0;
            for(int j=0; j<strs[i].length(); j++){
                if(j < strs[0].length() && strs[0][j] == strs[i][j]){
                    curL++;
                }
                else{
                    break;
                }
            }
             if(curL < maxL){
                maxL = curL;
             }
        }
        return maxL == 0 ? "" : strs[0].substr(0, maxL);
    }

// C# code
public string LongestCommonPrefix(string[] strs) {
        int maxL = strs[0].Length, curL;
        for(int i=1; i<strs.Length; i++){
            curL = 0;
            for(int j=0; j<strs[i].Length; j++){
                if(j<strs[0].Length && strs[0][j] == strs[i][j])
                    curL++;
                else
                    break;
            }
            if(curL < maxL)
                maxL = curL;
        }
        return maxL == 0 ? "" : strs[0].Substring(0,maxL);
    }
