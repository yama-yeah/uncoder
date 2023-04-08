# 正整数 N が与えられます。
# 正整数の組 (A,B,C,D) であって、
# AB+CD=N を満たすものの個数を求めてください。

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

N=int(input())
