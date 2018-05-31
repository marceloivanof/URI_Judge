cases = int(input())

for i in range(cases):
    first_line = input()
    count_positions = int(input())
    result = ''
    for c in first_line:
        temp = ord(c) - count_positions
        if temp < 65: # < 'A' in ASCII
            result += chr(temp + 26) # + 26 in ASCII
        else:
            result += chr(temp)
            
    print(result)