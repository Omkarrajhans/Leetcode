class Solution {
public:
    string f(int n,string s)
    {
        if(n==0)return s;
        string s1="";
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(i==0)
            {
                cnt++;
            }
            else if(s[i]==s[i-1])
            {
                cnt++;
            }
            else
            {
                string tmp=to_string(cnt);
                s1+=tmp;
                //s1+=cnt-'0';
                s1+=s[i-1];
                cnt=1;
            }
        }
        string tmp=to_string(cnt);
        s1+=tmp;
        s1+=s[s.size()-1];
        return f(n-1,s1);
    }
    string countAndSay(int n) {
        return f(n-1,"1");
        //return f(0,"");
    }
};
