# Remove duplicates from an unsorted array
def solve(arr, N):
    i = 0
    for j in range(1, N):
        if arr[i] != arr[j]:
            i += 1
            arr[i] = arr[j]
    print(arr[:i+1])
    
arr = [4,4,1,1,2,2,3,3]
N = len(arr)
solve(arr, N)