var myArray = [9, -2, -7, 4, 8, 10, 18, -18];

function quickSort(unsortedArray) {
	if (unsortedArray.length <= 1) { 
		return unsortedArray;
	} else {

		var left = [];
		var right = [];
		var newArray = [];
		var pivot = unsortedArray.pop();
		var length = unsortedArray.length;

		for (var i = 0; i < length; i++) {
			if (unsortedArray[i] <= pivot) {
				left.push(unsortedArray[i]);
			} else {
				right.push(unsortedArray[i]);
			}
		}

		return newArray.concat(quickSort(left), pivot, quickSort(right));
	}
}
console.log("Unsorted Array => " + myArray);
var sortedArray = quickSort(myArray);
console.log("Sorted Array => " + sortedArray);