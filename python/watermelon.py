import sys
input = sys.stdin.readline

def solve():
    n = int(input())
    
    if n % 2 == 0:
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    solve()
