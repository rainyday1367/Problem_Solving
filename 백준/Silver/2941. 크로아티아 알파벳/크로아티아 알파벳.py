s = input()
ind = 0
cnt = 0
while (ind < len(s)):
    if ind+2 < len(s) and s[ind:ind+3]=="dz=":
        cnt +=1
        ind += 3
    elif ind+1 < len(s):
        ss = s[ind:ind+2]
        if ss == "c=" or ss == "c-" or ss=="d-" or ss == "lj" or ss=="nj" or ss=="s=" or ss=="z=":
            cnt+=1
            ind+=2
        else:
            ind+=1
            cnt+=1
    else:
        ind+=1
        cnt+=1
print(cnt)