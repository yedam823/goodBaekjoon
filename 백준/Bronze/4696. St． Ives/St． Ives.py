while 1:
    i = float(input())
    if i == 0:
        break
    su = 1 + i + (i*i) + (i*i*i) + (i*i*i*i)
    print("{:.2f}".format(su))