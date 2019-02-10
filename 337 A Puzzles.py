# http://codeforces.com/contest/337/problem/A
n,m=map(int,input().split())
l=list(map(int,input().split()))
l.sort()
a=[]
n-=1
for i in range(len(l)-n):
    a.append(l[i+n]-l[i])
print(min(a))