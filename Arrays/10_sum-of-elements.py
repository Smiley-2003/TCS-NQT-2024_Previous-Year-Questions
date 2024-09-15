def sum_of_elements(arr):
    
    total_sum = 0
    
    for num in arr:
        total_sum += num
        
    return total_sum
    
arr = [1,2,3,4,5]
result = sum_of_elements(arr)
print(f"Sum of the elements in the array: {result}")