def getMin(arr):
    if len(arr)==0:
        return None
    return min(arr)
    
arr=[1,0,-2,2,3,4,5]
res= getMin(arr)
print("The minimum element is: ",getMin(arr))