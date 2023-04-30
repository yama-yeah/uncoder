import numpy as np

n= int(input())
A=[]
for i in range(n):
    A.append(list(map(int,input().split())))
A=np.array(A)
B=[]
for i in range(n):
    B.append(list(map(int,input().split())))
B=np.array(B)
#Aを回転してBになるかどうかを判定する

for i in range(4):
    if i!=0:
        A=np.rot90(A,k=-1)
    #print(A)
    flag = True
    for j in range(n):
        for k in range(n):
            if A[j][k]==1 and B[j][k]==0:
                flag = False
                break
        if flag == False:
            break
    if flag:
        break
if flag:
    print("Yes")
else:
    print("No")
        
