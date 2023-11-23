
def secondLargestHelper(largest, secondLargest):
    n = int(input())
    if n == 0:
        return (largest, secondLargest)
    else:
        if n > largest:
            return secondLargestHelper(n, largest)
        elif n > secondLargest:
            return secondLargestHelper(largest, n)
        else:
            return secondLargestHelper(largest, secondLargest)

def secondLargest():
    n = int(input())
    return secondLargestHelper(n, 0)

(_, secondLargest) = secondLargest()
print(secondLargest)