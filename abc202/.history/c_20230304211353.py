N = int(input())

count = 0
for A in range(1, N+1):
    for C in range(1, N+1):
        if (N-C*A) % A == 0:
            B = (N-C*A) // A
            D = (N-C*B) // A
            if 1 <= B <= N and 1 <= D <= N:
                count += 1

print(count)
