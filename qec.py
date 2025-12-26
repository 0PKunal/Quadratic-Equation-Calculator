import math

a = float(input("\nEnter value of a: "))
b = float(input("\nEnter value of b: "))
c = float(input("\nEnter value of c: "))

if a == 0:
    print("\nThis is not a quadratic equation.")
else:
    D = b*b - 4*a*c

    if D > 0:
        x1 = (-b + math.sqrt(D)) / (2*a)
        x2 = (-b - math.sqrt(D)) / (2*a)
        print("\nRoots are real and distinct")
        print("\nx1 =", round(x1, 2))
        print("\nx2 =", round(x2, 2))

    elif D == 0:
        x = -b / (2*a)
        print("\nRoots are real and equal")
        print("\nx1 = x2 =", round(x, 2))

    else:
        real = -b / (2*a)
        imag = math.sqrt(-D) / (2*a)
        print("\nRoots are complex")
        print(f"\nx1 = {real:.2f} + {imag:.2f}i")
        print(f"\nx2 = {real:.2f} - {imag:.2f}i\n")