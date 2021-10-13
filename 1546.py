N = int(input())
#subject = []
subject = map(int, input().split())
subject = list(subject)
avg = sum(subject) / N
M = max(subject)
M = avg / M * 100
print(M)