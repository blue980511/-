T = int(input())
for i in range(T):
    s = input().split()
    R, S = int(s[0]), s[1]
    P = ""
    for j in range(len(S)):
        for k in range(R):
            P += S[j]
    print(P)