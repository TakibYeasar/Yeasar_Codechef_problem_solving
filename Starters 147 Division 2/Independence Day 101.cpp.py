
# Problem link ===>> https://www.codechef.com/problems/INDEPENDENCE


import heapq


def main():
    t = int(input())  
    for _ in range(t):
        a, b, c = map(int, input().split())

        pq = []
        if a > 0:
            heapq.heappush(pq, (-a, 'O'))
        if b > 0:
            heapq.heappush(pq, (-b, 'W'))  
        if c > 0:
            heapq.heappush(pq, (-c, 'G'))  

        ans = ""       
        possible = True  

        while pq:
            top1 = heapq.heappop(pq)
            count1, color1 = -top1[0], top1[1]

            if not ans or ans[-1] != color1:
                ans += color1  
                count1 -= 1    

                if count1 > 0:
                    heapq.heappush(pq, (-count1, color1))
            else:
                if not pq:
                    possible = False
                    break

                top2 = heapq.heappop(pq)
                count2, color2 = -top2[0], top2[1]

                ans += color2  
                count2 -= 1    
                if count2 > 0:
                    heapq.heappush(pq, (-count2, color2))

                heapq.heappush(pq, (-count1, color1))

        if possible:
            print("YES")
        else:
            print("NO")


if __name__ == "__main__":
    main()
