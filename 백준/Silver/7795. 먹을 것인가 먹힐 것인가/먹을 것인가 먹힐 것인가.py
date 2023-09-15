t = int(input())
for i in range(t):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort()
    b.sort()
    locA, locB = 0,0
    result = 0
    while locA<n:
        if a[locA] > b[locB]:
            if locB+1 < m and b[locB+1] >= a[locA] :
                result += locB+1
                locA+=1
            elif locB == m-1:
                result+= locB+1
                locA+=1
            else:
                locB+=1
        else:
            locA+=1
    print(result)
