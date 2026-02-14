// LeetCode Problem: leetcode-problem
// Difficulty: Unknown
// Pushed on: 2026-02-14

class Solution {
public:
bool isPalindrome(int x) {
string s = to_string(x);
string rev=s;
reverse(rev.begin(),rev.end());
if(rev==s){
return true;
}
return false;
};