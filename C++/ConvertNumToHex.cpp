#include <iostream>
#include <algorithm>
using namespace std;

/*
* Convert a Number to Hexadecimal

Given an integer num, return a string representing its hexadecimal representation.
For negative integers, two’s complement method is used.

All the letters in the answer string should be lowercase characters, and there should not be any leading zeros
in the answer except for the zero itself.

Note: You are not allowed to use any built-in library method to directly solve this problem.

Example 1:
Input: num = 26
Output: "1a"

Example 2:
Input: num = -1
Output: "ffffffff"
*/

class Solution
{
public:
    string toHex(int num)
    {
        unsigned int ourNum = num;
        // Implicitly cast negative numbers.
        // -1 turns to the maximum number representable
        // as an unsigned int.

        string str;                             // Our result
        char ourArray[17] = "0123456789abcdef"; // We will pick from this set of characters

        // While our number exists, convert it into base 16.
        // We are going from left to right, so we need to reverse our result
        // when we return it.
        do
        {
            str += ourArray[ourNum % 16];
            ourNum /= 16;
        } while (ourNum);

        return {str.rbegin(), str.rend()};
    }
};

class Solution
{
public:
    string toHex(int num)
    {
        unsigned int newNum = num;
        char hex[] = "0123456789abcdef";
        string res;
        while (newNum != 0)
        {
            res += hex[newNum % 16];
            newNum = newNum / 16;
        }
        reverse(res.begin(), res.end());
        return num == 0 ? "0" : res;
    }
};

class Solution
{
public:
    string toHex(int num)
    {
        string hex = "0123456789abcdef";
        unsigned int n = num; // to handle neg numbers
        string ans = "";
        if (n == 0)
            return "0";

        while (n > 0)
        {
            int k = n % 16;
            ans += hex[k];
            n /= 16;
        }
        reverse(ans.begin(), ans.end()); // as we stored it in the opposite order
        return ans;
    }
};

const string HEX = "0123456789abcdef";
class Solution
{
public:
    string toHex(int num)
    {
        if (num == 0)
            return "0";
        string result;
        int count = 0;
        while (num && count++ < 8)
        {
            result = HEX[(num & 0xf)] + result;
            num >>= 4;
        }
        return result;
    }
};
