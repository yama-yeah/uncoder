# 正整数 N が与えられます。
# 正整数の組 (A,B,C,D) であって、
# AB+CD=N を満たすものの個数を求めてください。
import math


def is_prime(n):
    """
    引数が素数かどうかを判定する関数
    """
    if n < 2:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True
def prime_factorization(n):
    """
    引数の素因数分解を行う関数
    """
    prime_factor = []
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            while n % i == 0:
                n //= i
                prime_factor.append(i)
    if n != 1:
        prime_factor.append(n)
    return prime_factor
N=int(input())

list=[0]*(N)
ans=0
list[1]=1
for i in range(2,N):
    if is_prime(i):
        list[i]=2
    else:
        f=prime_factorization(i)
        did=[]
        cnt=0
        for j in f:
            if j not in did:
                did.append(j)
                cnt+=len(f)-1
        cnt+=2
        list[i]=cnt
for i in range(1,N//2):
    print(str(i)+"+"+str(N-i))
    if N-i==i:
        ans+=list[i]*list[N-i]
    else:
        ans+=list[i]*list[N-i]*2
print(list)
print(ans)