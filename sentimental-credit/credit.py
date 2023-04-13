import math

# get card number
n = int(input("Enter your credit card number: "))

# count length
i = 0
cc = n
while cc > 0:
    cc //= 10
    i += 1

# check valid
if i != 13 and i != 15 and i != 16:
    print("INVALID")
    exit()

# checksum
sum1 = 0
sum2 = 0
x = n
total = 0

while x > 0:
    # remove last digit and add to sum1
    mod1 = x % 10
    x //= 10
    sum1 += mod1

    # remove second last digit
    mod2 = x % 10
    x //= 10

    # Double second last digit and add to sum2
    mod2 *= 2
    d1 = mod2 % 10
    d2 = mod2 // 10
    sum2 += d1 + d2

total = sum1 + sum2

# check
if total % 10 != 0:
    print("INVALID")
    exit()

# Get starting digits
start = n
while start > 100:
    start //= 10

if start // 10 == 5 and 0 < start % 10 < 6:
    print("MASTERCARD")
elif start // 10 == 3 and (start % 10 == 4 or start % 10 == 7):
    print("AMEX")
elif start // 10 == 4:
    print("VISA")
else:
    print("INVALID")
