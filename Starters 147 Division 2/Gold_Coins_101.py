
# Problem link ===>> https://www.codechef.com/problems/GOLDCOINS


def main():
    a, b, x, y = map(int, input().split())
    if x > y:
        print(a)
    else:
        print(b)


if __name__ == "__main__":
    main()
