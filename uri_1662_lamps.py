n = int(input())
acoes = input().split()
lamp1 = 0; lamp2 = 0
for i in range(n):
    if acoes[i] == '1' and lamp1 == 0:
        lamp1 += 1
    elif acoes[i] == '1' and lamp1 == 1:
        lamp1 -= 1
    elif acoes[i] == '2':
        if lamp1 == 0:
            lamp1 += 1
        elif lamp1 == 1:
            lamp1 -= 1
        if lamp2 == 0:
            lamp2 += 1
        elif lamp2 == 1:
            lamp2 -= 1
        
print(lamp1, lamp2)