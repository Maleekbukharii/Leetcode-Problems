// LeetCode Problem: 13. Roman to Integer
// Difficulty: Easy
// Pushed on: 2026-02-14

class Solution {
public:
int romanToInt(string s) {
int num = 0;
int prev = 0;
for (int i = s.length() - 1; i >= 0; i--) {
int value = 0;
switch (s[i]) {
case 'I':
value = 1;
break;
case 'V':
value = 5;