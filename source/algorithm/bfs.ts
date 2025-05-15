type BfsNode<T> = { data: T; next: BfsNode<T> | null };
type BfsNodes<T> = BfsNode<T>[];

class Queue<T> {
    front: BfsNode<T> | null = null;
    rear: BfsNode<T> | null = null;
    #size = 0;

    get size() {
        return this.#size;
    }

    push(data: T) {
        const node: BfsNode<T> = {data, next: null};
        if (this.#size === 0) {
            this.front = node;
        } else {
            this.rear!.next = node;
        }
        this.rear = node;
        this.#size++;
    }

    pop(): undefined | T {
        if (this.#size === 0) {
            return undefined;
        }
        const node: BfsNode<T> = this.front!;
        this.front = node.next;
        this.#size--;
        return node.data;
    }

    isEmpty(): boolean {
        return this.size === 0;
    }

    peek(): T | undefined {
        if (this.#size === 0) {
            return undefined;
        }
        return this.front!.data;
    }
}

const bfs = (startIndex: number, nodes: BfsNodes<number>) => {
    const visit: { [index: number]: boolean } = {}
    const queue = new Queue<number>();
    queue.push(startIndex);
    visit[startIndex] = true;
    while (!queue.isEmpty()) {
        const x = queue.pop()!;
        console.log(x);
        let cur = nodes[x].next;
        while (cur) {
            let next = cur.data;
            if (!visit[next]) {
                queue.push(next);
                visit[next] = true;
            }
            cur = cur.next;
        }
    }
}