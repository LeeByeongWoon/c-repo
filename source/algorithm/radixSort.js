const radixSort = (arr, exp = 1) => {
    if (Math.floor(getMax(arr) / exp) === 0) {
        return arr;
    }
    const bucket = Array.from({length: 10}, () => []);

    arr.forEach((el) => {
        const key = Math.floor((el / exp) % 10);
        bucket[key].push(el);
    })

    return radixSort(bucket.flat(), exp * 10);

}

const getMax = (arr) => Math.max(...arr);

console.log(radixSort([192, 11, 88, 1002, 2, 53]))