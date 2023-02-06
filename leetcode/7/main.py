class Solution:
    def reverse(self, x: int) -> int:
        sign = False
        
        if x < 0:
            sign = True
            x = -x
        
        result = int(''.join(reversed(str(x)))) * (-1 if sign else 1)
        
        if -1 * 2 ** 31 <= result <= 2 ** 31 - 1:
            return result
        
        return 0

