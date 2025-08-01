def process_arrays(test_case):
    results = []
    for case in test_case:
        array,opeation = case
        to_remove = set(opeation)
        filtered_array = [num for num in array if num not in to_remove]
        if not filtered_array:
            results.append("Empty")
        else:
            results.append(" ".join(map(str, filtered_array)))
    return results

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    idx = 0
    T = int(data[idx])
    idx += 1
    test_case = []
    for _ in range(T):
        m = int(data[idx])
        n = int(data[idx + 1])
        idx += 2
        array = list(map(int, data[idx:idx + m]))
        idx += m
        operation = list(map(int, data[idx:idx + n]))
        idx += n
        test_case.append((array, operation))
    results = process_arrays(test_case)
    for result in results:
        print(result)

if __name__ == "__main__":
    main()


