class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        //先从strs[0]开始，与后面一个比较
        string ans = strs[0];
        for(int i = 1; i < strs.size(); i++){
            //保存上次的公共前缀
            string s = ans;
            ans = "";
            for(int j = 0; j <strs[i].size(); j++){
                if(s[j] == strs[i][j]){
                    ans += s[j];
                }
                //遇到不一样的就退出循环
                else
                    break;
            }
            if(ans == "")   break;
        }
        return ans;
    }
};
