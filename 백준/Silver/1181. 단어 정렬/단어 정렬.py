n = int(input())
s = set()
result = []
for i in range(n):
    s.add(input())
s = list(s)
for j in range(len(s)):
    result.append((len(s[j]),s[j]))
result = sorted(result, key = lambda x:(x[0],x[1]))
for k in range(len(result)):
    print(result[k][1])