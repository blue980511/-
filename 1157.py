sentence = input()
sentence = sentence.upper()
alphabet = ''.join(set(sentence))
sentence = list(sentence)
sentence.sort()
alphabet = list(alphabet)
count = [0 for _ in range(len(alphabet))]

for i in range(len(alphabet)):
    count[i] = sentence.count(alphabet[i])

maximum = max(count)
number = count.count(maximum)

if number == 1:
    print(alphabet[count.index(maximum)])
else:
    print('?')