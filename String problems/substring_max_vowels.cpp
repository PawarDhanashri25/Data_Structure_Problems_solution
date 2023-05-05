
/*
 Maximum Number of Vowels in a Substring of Given Length
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

*/

 int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int maxCount = 0, currCount = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i >= k && vowels.count(s[i - k])) {
            // Remove the vowel from the previous substring
            currCount--;
        }
        if (vowels.count(s[i])) {
            // Add the vowel from the current substring
            currCount++;
        }
        maxCount = max(maxCount, currCount);
    }
    return maxCount;
        
    }
    
