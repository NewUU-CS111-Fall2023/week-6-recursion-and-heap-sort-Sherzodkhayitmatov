def karatsuba_multiply(num1, num2):
    if len(num1) == 1 or len(num2) == 1:
        return str(int(num1) * int(num2))

    n = max(len(num1), len(num2))
    half = n // 2

    num1 = num1.zfill(n)
    num2 = num2.zfill(n)

    a = num1[:half]
    b = num1[half:]
    c = num2[:half]
    d = num2[half:]

    ac = int(karatsuba_multiply(a, c))
    bd = int(karatsuba_multiply(b, d))
    ad_plus_bc = int(karatsuba_multiply(str(int(a) + int(b)), str(int(c) + int(d)))) - ac - bd
    result = (ac * 10**(2 * half)) + (ad_plus_bc * 10**half) + bd

    return str(result)

num1 = "12345678901234567890"
num2 = "98765432109876543210"
result = karatsuba_multiply(num1, num2)
print(result)