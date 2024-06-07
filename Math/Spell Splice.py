
# Problem link ===>>


def main():
    import sys
    input = sys.stdin.read
    data = input().split()

    index = 0
    t = int(data[index])
    index += 1
    results = []

    for _ in range(t):
        n = int(data[index])
        index += 1

        v = []
        a = []

        for i in range(n):
            v.append(int(data[index]))
            a.append(int(data[index + 1]))
            index += 2

        ans = 0

        for i in range(n):
            for j in range(n):
                if i < j:
                    ans = max(ans, (a[i] * v[j]) + (v[i] * a[j]))

        results.append(ans)

    for result in results:
        print(result)


if __name__ == "__main__":
    main()
