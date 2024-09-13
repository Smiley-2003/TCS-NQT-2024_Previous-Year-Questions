# def getReverse(arr):
#     n = len(arr)
#     start,end = 0 , n-1
#     while start <= end:
#         arr[start],arr[end] = arr[end],arr[start]
#         start += 1
#         end -= 1
#     print(arr)
# getReverse([1,2,3,4,5])

# Using reverse function

def getReverse(arr):
    n = len(arr)
    arr.reverse()
    print(arr)
    
getReverse([1,2,3,4,5])