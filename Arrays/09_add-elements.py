# Adding element in an Array.

def add_element(arr, elements):
    arr.append(elements)
    return arr
    
arr = [1,2,3,4]
elements = 5
result = add_element(arr, elements)
print("Array after adding  multiple elements : ",result)