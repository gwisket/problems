T = int(input())

for i in range(T):
    vps_value = 0

    for j in input():
        if j == '(':
            vps_value += 1

        else:
            vps_value -= 1

        if vps_value < 0:
            break

    print('NO' if vps_value else 'YES')

