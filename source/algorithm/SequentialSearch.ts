const SequentialSearch = <T>(arr: T[], target: T) => arr.indexOf(target)

//범위를 절반 으로 좁혀 가면서 찾음 시간 복잡도는 O(log_2n), 최상의 경우 O(1)
function binarySearch<T>(sortedList: T[], target: T) {
    let low = 0;
    let high = sortedList.length - 1;

    while (low <= high) {
        const mid = Math.floor((low + high) / 2);
        const guess = sortedList[mid];
        if (guess === target) {
            return mid;
        } else if (guess > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}