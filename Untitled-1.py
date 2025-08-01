def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    idx = 0
    n = int(data[idx])
    q = int(data[idx + 1])
    idx += 2

    if not (2 <= n <= 10**5 and 1 <= q <= 10**5):
        print("Invalid input: n should be between 2 and 10^5,qshould be between 1 and 10^5.")
        return
    
    gloves = list(map(int, data[idx:idx + n]))
    idx += n
    for color in gloves:
        if not (1 <= color <= 10**9):
            print("Invalid input: color should be between 1 and 10^9.")
            return

    queries = []
    for _ in range(q):
        l = int(data[idx])
        r = int(data[idx + 1])
        queries.append((l, r))
        idx += 2
    if not (1 <= l < r <= n)or(r - l + 1 ) % 2 != 0:
        print("Invalid input: l and r should be between 1 and n, and l should be less than r.")
        return

    from collections import defaultdict
    prefix = [defaultdict(int)]
    for glove in gloves:
        new_dict = prefix[-1].copy()
        new_dict[glove] += 1
        prefix.append(new_dict)
    for l, r in queries:
        count = defaultdict(int)
        for key, value in prefix[r].items():
            count[key] += value
        for key, value in prefix[l - 1].items():
            count[key] -= value
        possible = True
        for key, value in count.items():
            if value % 2 != 0:
                possible = False
                break
        if possible:
            print("yes")
        else:
            print("no")

if __name__ == "__main__":
    main()   