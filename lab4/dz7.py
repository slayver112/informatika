def union(a,b):
    a_b = a | b
    return len(a_b)
inputA = input().split()
setA = set(inputA)
inputB = input().split()
setB = set(inputB)
summa_ab = union(setA,setB)
print(summa_ab)
