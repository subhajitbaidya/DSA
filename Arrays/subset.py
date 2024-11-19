def isSubset(arr1, arr2):
    
    # Sorting the input array
    arr1.sort()
    arr2.sort()
    
    #initializing two pointers
    i = 0
    j = 0
    
    # iterating over the arrays to compare values
    while i < len(arr1) and j < len(arr2):
        
        # If the value in sub array is bigger, the pointer to first array is moved to the next element of array
        if arr1[i] < arr2[j]:
            i+=1
            
        # If both elements of array is equal, pointer is moved to next element for both arrays to compare    
        elif arr1[i] == arr2[j]:
            i+=1
            j+=1
        #If one elements does not match subset is returning as false
        else:
            return False
        
        
    # Reached the end of array, so the value of J should be the length of second array, returns true
    return j == len(arr2)


inp1 = [2,5,6,7,8]
inp2 = [5,6,3]

val = isSubset(inp1, inp2)

if val == True:
    print("Yes")
else:
    print("No")