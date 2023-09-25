import sys
input = sys.stdin.readline
s1 = list(input()[:-1])
s2 = []
m = int(input())
for i in range(m):
    a = input().split()
    if a[0] == "L":
        if s1:
            s2.append(s1.pop())
    elif a[0] == "D":
        if s2:
            s1.append(s2.pop())
    elif a[0] == "B":
        if s1:
            s1.pop()
    elif a[0] == "P":
        s1.append(a[1])
s2.reverse()
print(*(s1+s2), sep="")