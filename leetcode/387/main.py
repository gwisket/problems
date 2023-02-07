class Solution:
    def firstUniqChar(self, s: str) -> int:
        frequencies = [0] * 26

        for i in s:
            frequencies[ord(i) - 97] += 1

        for i in range(len(s)):
            if frequencies[ord(s[i]) - 97] == 1:
                return i

        return -1

