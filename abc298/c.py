import bisect

n=int(input())
q=int(input())
qs=[]
for i in range(q):
    qs.append(list(map(int,input().split())))
box=[]
box2=[]
for i in range(n):
    box.append([])
    box2.append([])


for qu in qs:
    if qu[0]==1:
        flag = False
        bi = bisect.bisect(box[qu[2]-1],qu[1])
        if 0<bi<=len(box[qu[2]-1]):
            if box[qu[2]-1][bi-1]==qu[1]:
                flag = True
        bisect.insort(box[qu[2]-1],qu[1])
        if flag == False:
            bisect.insort(box2[qu[2]-1],qu[1])
        
    elif qu[0]==2:
        for i in range(len(box[qu[1]-1])):
            print(box[qu[1]-1][i],end=' ')
        print()
    else:
        for j in range(n):
            bi=bisect.bisect(box2[j],qu[1])
            if 0<bi<=len(box2[j]):
                if box2[j][bi-1]==qu[1]:
                    print(j+1,end=' ')
        print()
