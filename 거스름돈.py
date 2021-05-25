def money(mon):
    f_h, o_h, f_t, ten = 0, 0, 0, 0
    if (mon >= 500):
        while (mon >= 500):
            mon -= 500
            f_h += 1
    if (mon >= 100):
        while (mon >= 100):
            mon -= 100
            o_h += 1
    if (mon >= 50):
        while (mon >= 50):
            mon -= 50
            f_t += 1
    if (mon >= 10):
        while (mon >= 10):
            mon -= 10
            ten += 1
    return (f_h, o_h, f_h, ten);

def money_fast(mon):
    coin = [500, 100, 50, 10]; count = 0
    for m in coin:
        count += mon // m
        mon %= m
    return count


print(money_fast(1260))