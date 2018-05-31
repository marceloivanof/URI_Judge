cases = int(input())
for i in range(cases):
    value = input()
    leds = 0
    for c in range(len(value)):
        if value[c] == '1':
            leds += 2
        elif value[c] == '2':
            leds += 5
        elif value[c] == '3':
            leds += 5
        elif value[c] == '4':
            leds += 4
        elif value[c] == '5':
            leds += 5
        elif value[c] == '6':
            leds += 6
        elif value[c] == '7':
            leds += 3
        elif value[c] == '8':
            leds += 7
        elif value[c] == '9':
            leds += 6
        elif value[c] == '0':
            leds += 6
    
    print("{} leds".format(leds))