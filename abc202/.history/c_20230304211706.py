# 正整数 N が与えられます。
# 正整数の組 (A,B,C,D) であって、
# AB+CD=N を満たすものの個数を求めてください。

N=int(input())
ans=0
for A in range(1,N):
    for B in range(1,N):
        if A*B+N==N*(A+B):
            ans+=1
print(ans)
