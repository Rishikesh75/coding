
def fib(n):
    if(n==0):
        return 0
    if(n==1):
        return 1
    else:
        return fib(n-1)+fib(n-2)

def main():
    n = int(input("Enter the number to input"))
    print(f"Value is:{fib(n)}")
    
if __name__ == "__main__":
    main()
    