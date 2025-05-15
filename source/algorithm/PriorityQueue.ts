type HeapNode = { value: number, priority: number }

class PriorityQueue {
    private readonly heap: HeapNode[];

    constructor() {
        this.heap = [];
    }

    enqueue(value: number, priority: number) {
        const newNode = {value, priority};
        this.heap.push(newNode);
        this._shiftUp(this.heap.length - 1);
        return this.heap.length;
    }

    dequeue(): number | null {
        if (this.heap.length === 0) return null;

        const min = this.heap[0];
        const end = this.heap.pop();

        if (this.heap.length > 0) {
            this.heap[0] = end;
            this._shiftDown(0);
        }
        return min.value;
    }

    peek() {
        return this.heap.length > 0 ? this.heap[0].value : null;
    }

    size() {
        return this.heap.length;
    }

    private _shiftUp(idx: number) {
        let parentIdx = Math.floor((idx - 1) / 2);
        while (idx > 0 && this.heap[parentIdx].priority > this.heap[idx].priority) {
            [this.heap[parentIdx], this.heap[idx]] = [this.heap[idx], this.heap[parentIdx]];
            idx = parentIdx;
            parentIdx = Math.floor((idx - 1) / 2);
        }
    }

    private _shiftDown(idx: number) {
        const length = this.heap.length;
        let element = this.heap[idx];

        while (true) {
            let leftChildIdx = 2 * idx + 1;
            let rightChildIdx = 2 * idx + 2;
            let swap: number | null = null;

            if (leftChildIdx < length && this.heap[leftChildIdx].priority < element.priority) {
                swap = leftChildIdx;
            }

            if (rightChildIdx < length && (
                swap === null ? this.heap[rightChildIdx].priority < element.priority :
                    this.heap[rightChildIdx].priority < this.heap[leftChildIdx].priority
            )) {
                swap = rightChildIdx;
            }
            if (swap === null) break;

            this.heap[idx] = this.heap[swap];
            this.heap[swap] = element;
            idx = swap;
        }
    }
}