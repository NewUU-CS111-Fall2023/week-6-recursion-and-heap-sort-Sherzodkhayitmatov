class Heap:
    def __init__(self, arr):
        self.array = arr
        self.heap_size = len(arr)

    def buildMaxHeap(self):
        for i in range(int(self.heap_size / 2), -1, -1):
            self.maxHeapify(i)

    def maxHeapify(self, i):
        l = self.left(i)
        r = self.right(i)
        largest = i
        if l < self.heap_size and self.array[l] > self.array[i]:
            largest = l
        if r < self.heap_size and self.array[r] > self.array[largest]:
            largest = r
        if largest != i:
            self.array[i], self.array[largest] = self.array[largest], self.array[i]
            self.maxHeapify(largest)

    def left(self, i):
        return 2 * i + 1

    def right(self, i):
        return 2 * i + 2

    def heapsort(self):
        self.buildMaxHeap()
        for i in range(self.heap_size - 1, 0, -1):
            self.array[0], self.array[i] = self.array[i], self.array[0]
            self.heap_size -= 1
            self.maxHeapify(0)

    def printHeap(self):
        for i in range(self.heap_size):
            print(self.array[i], end=" ")
        print()
