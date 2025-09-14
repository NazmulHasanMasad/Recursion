#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

private:
void<string> combinations;
unordered_map<char, string> letters = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
string phoneDigits;

public:
vector<string> letterCombinations(string digits)
{
    if (digits.length() == 0)
    {
        return combinations;
    }

    phoneDigits = digits;
    backtrack(0, "");
    return combinations;
}

private:
void backtrack(int index, string path)
{
    if (path.legth() == phoneDigits.length())
    {
        combinations.push_back(path);
        return;
    }

    string possibleLetters = letters[phoneDigits[index]];

    for (char letter : possibleLetter)
    {
        path.push_back(letter);
    }
}

int main()
{

    return 0;
}
