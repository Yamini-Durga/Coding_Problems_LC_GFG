https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

// C++ code
int strStr(string haystack, string needle) {
        int hsz = haystack.length(), nsz = needle.length();
        if(nsz == 0)
            return 0;
        int i=0, j;
        while(i<=(hsz-nsz))
        {
            j=0;
            while(j<nsz && haystack[i+j]==needle[j])
                j++;
            if(j == nsz)
                return i;
            i++;
        }

        return -1;
    }
// C# code
public int StrStr(string haystack, string needle) {
        int hsz = haystack.Length, nsz = needle.Length;
        if(nsz == 0)
            return 0;
        int i=0, j;
        while(i<=(hsz-nsz))
        {
            j=0;
            while(j<nsz && haystack[i+j]==needle[j])
                j++;
            if(j == nsz)
                return i;
            i++;
        }

        return -1;
    }
