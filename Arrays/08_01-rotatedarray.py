# Rotate array by k elements
def rotate_array(arr,k):
    
    N = len(arr)
    temp = [0] * N
    
    for i in range(N):
        temp[(i+k) % N] = arr[i]
        
    return temp
    
# Example usage
arr = [1,2,3,4,5,6,7]
k = 3
result = rotate_array(arr, k)
print("Rotates Array: ",result)