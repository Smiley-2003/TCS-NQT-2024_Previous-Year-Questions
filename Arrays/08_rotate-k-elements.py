# Rotate array by k elements
def rotate_array(arr,k):
    
    k = k % len(arr)
    
    rotated_arr = arr[-k:]+arr[:-k]
    
    return rotated_arr
    
arr = [1,2,3,4,5,6,7]
k = 3
result = rotate_array(arr,k)
print("Rotated Array: ",result)