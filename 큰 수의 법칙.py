def num_rule():
    n, m, k = map(int, input().split())
    nums = map(int, input().split())
    nums.sort(reverse=True)
    ret = 0;
    for i in range(m):
        if (i % k == 1 and i // k > 0):
            ret += nums[1];
        else:
            ret += nums[0];
    return (ret);

def num_rule_x():
    ret = 0
    n, m, k = map(int, input().split())
    nums = list(map(int, input().split()))
    nums.sort(reverse=True)
    fir = nums[0]
    sec = nums[1]
    ret += ((m // (k + 1) - 1) + m % (k + 1)) * fir
    ret += (m // (k + 1) * sec)
    return (ret)

print(num_rule_x());