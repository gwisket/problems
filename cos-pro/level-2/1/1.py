#You may use import as below.
#import math

def solution(shirt_size):
    sizes = {
        "XS": 0,
        "S": 1,
        "M": 2,
        "L": 3,
        "XL": 4,
        "XXL": 5
    }
    answer = [0] * 6

    for i in shirt_size:
        answer[sizes[i]] += 1

    return answer

#The following is code to output testcase.
shirt_size = ["XS", "S", "L", "L", "XL", "S"]
ret = solution(shirt_size);

#Press Run button to receive output.
print("Solution: return value of the function is ", ret, " .")
