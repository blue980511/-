A, B = input().split()
list_A, list_B = " ".join(A).split(), " ".join(B).split()
A, B = "", ""
for i in range(len(list_A)):
    A += list_A.pop()
    B += list_B.pop()
A = int(A)
B = int(B)
if A > B:
    print(A)
else:
    print(B)