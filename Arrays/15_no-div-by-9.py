# Check if a large number is divisible by 9 or not
def divisible(num):
    
    digit_sum = sum(int(digit) for digit in str(num))
    
    return digit_sum % 9 == 0
    
num = 81
if divisible(num):
    print(f"{num} is divisible by 9.")
else:
    print(f"{num} is not divisible by 9.")