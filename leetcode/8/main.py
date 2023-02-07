class Solution:
    def myAtoi(self, s: str) -> int:
        i = 0
        sign = True
        n = 0

        while i < len(s) and s[i] == ' ':
            i += 1

        if i == len(s):
            return 0

        elif s[i] == '-':
            sign = False
            i += 1

        elif s[i] == '+':
            i += 1

        elif not s[i].isdigit():
            return 0

        while i < len(s) and s[i].isdigit():
            n = 10 * n + int(s[i])
            i += 1

        if not sign:
            n *= -1

        if n < -(2 ** 31):
            return -(2 ** 31)

        elif n > 2 ** 31 - 1:
            return 2 ** 31 - 1

        return n
        
