from math import trunc
cases = int(input())
for i in range(cases):
    word = input()
    reverse_word = []
    for c in range(len(word)):
        reverse_word.append(word[c])
        if ord(word[c]) >= 65 and ord(word[c]) <= 90 or ord(word[c]) >= 97 and ord(word[c]) <= 122:
            reverse_word[c] = chr(ord(word[c]) + 3)
    
    reverse_word.reverse()
    c = trunc(len(reverse_word)/2)
    while c < len(reverse_word):
        reverse_word[c] = chr(ord(reverse_word[c]) - 1)
        c += 1
    
    print(*reverse_word, sep="")