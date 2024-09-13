def findMax(arr):
    if len(arr)==0:
        return None
    return max(arr)
 
# arr=[]   
arr=[3,5,7,2,-1,4]
# res = findMax(arr)
print("The maximum element is:",findMax(arr))