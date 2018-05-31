while True:
    h1, m1, h2, m2 = input().split()
    h1 = int(h1); m1 = int(m1); h2 = int(h2); m2 = int(m2)
    if (h1+m1+h2+m2) == 0:
        break
        
    if(h2 < h1) or (h2 == h1 and m1 > m2):
        h2 = ((h2 + 24)*60) + m2
    else:
        h2 = (h2 * 60) + m2

    h1 = (h1 * 60) + m1
    print("{}".format(h2 - h1))