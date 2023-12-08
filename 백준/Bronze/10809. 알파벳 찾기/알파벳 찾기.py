s = input()
result = [-1]*26
for i in range(len(s)):
    if result[ord(s[i])-97] == -1:
        result[ord(s[i])-97] = i
print(*result)