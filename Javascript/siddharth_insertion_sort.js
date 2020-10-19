const insertionSort = (arr) => {

    // Siddharth
    // github: siddharth009
    // implementation of insertion sort algorithm


    for(let i = 1; i<arr.length; i++) {
        key = arr[i];
        p = i-1;
        while(key < arr[p]){
          arr[p+1] = arr[p];
          p = p-1;
        }
        arr[p+1] = key;
    }

    console.log("sorted", arr);

}
// example
insertionSort([2,4,1,5]);