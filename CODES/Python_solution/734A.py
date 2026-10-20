
import sys
input = sys.stdin.readline

def Anton_Danik():
    n = int(input())
    s = input().strip()

    if s.count("A") > s.count("D"):
        print("Anton")
    elif s.count("A") < s.count("D"):
        print("Danik")
    else:
        print("Friendship")

def main():
    Anton_Danik()

if __name__ == "__main__":
    main()
