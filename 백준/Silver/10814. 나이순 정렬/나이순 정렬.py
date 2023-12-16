import sys
n = int(input())
result = []
for i in range(n):
    result.append(input().split())
result = sorted(result, key= lambda x: int(x[0])) # 나이(숫자) 오름차순
for j in range(n):
    print(result[j][0],result[j][1])