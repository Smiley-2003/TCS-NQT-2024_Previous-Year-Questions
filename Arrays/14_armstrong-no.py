# Armstrong number
def is_armstrong(num):
    
    num_str = str(num)
    
    n = len(num_str)
    
    sum_of_powers = sum(int(digit)**n for digit in num_str)
    
    return sum_of_powers == num
    
num = 153
if is_armstrong(num):
    print(f"{num} is an Armstrong number.")
else:
    print(f"{num} is not an Armstrong number.")