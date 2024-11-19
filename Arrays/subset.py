def isSubset(arr1, arr2):
    arr1.sort()
    arr2.sort()
    
    
    i = 0
    j = 0
    
    while i < len(arr1) and j < len(arr2):
        if arr1[i] < arr2[j]:
            i+=1
        elif arr1[i] == arr2[j]:
            i+=1
            j+=1
        else:
            return False
    
    return j == len(arr2)


inp1 = [2,5,6,7,8]
inp2 = [5,6,2]

val = isSubset(inp1, inp2)

if val == True:
    print("Yes")
else:
    print("No")