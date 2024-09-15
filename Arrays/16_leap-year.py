# Python code to check if a Year is a Leap Year

def is_leap_year(year):
    # Check if the year is divisible by 4 and not divisible by 100. 
    if(year % 4 == 0 and year % 100 != 0) or(year % 400 ==0):
        return True
    else:
        return False
        
year = 2024
if is_leap_year(year):
    print(f"{year} is a leap year.")
else:
    print(f"{year} is not a leap year.")