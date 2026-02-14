// LeetCode Problem: 14. Longest Common Prefix
// Difficulty: Easy
// Pushed on: 2026-02-14

class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
if (strs.empty()){return "";}
string result="";
for(int i=0;i<strs[0].length();i++){
char curr = strs[0][i];
for(int j=0;j<strs.size();j++){
if(i>=strs[j].length()||strs[j][i]!=curr){
return result;
}
result=result+curr;
};