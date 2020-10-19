function bubbleSort (array, order) {
  let swapped = true;

  while (swapped) {
    swapped = false;
    for (let i = 0; i < array.length - 1; i++) {
      // if "order" is truthy, sort in descending order, else in ascending order.
      if (order ? (array[i] < array[i + 1]) : (array[i] > array[i + 1])) {
        [array[i], array[i + 1]] = [array[i + 1], array[i]]; // swapping the elements
        swapped = true;
      }
    }
  }

  return array;
}

console.log(bubbleSort([5, 4, 2, 9])); // ascending order
console.log(bubbleSort([5, 4, 2, 9], "any truthy expression")); // descending order
