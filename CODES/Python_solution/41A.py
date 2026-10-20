import sys
input=sys.stdin.readline
def Translation():
    s1=input().strip()
    s2=input().strip()
    if s1==s2[::-1]:
        print("YES")
    else:
        print("NO")
    
def main():
    Translation()
if __name__ == "__main__":
    main()
    