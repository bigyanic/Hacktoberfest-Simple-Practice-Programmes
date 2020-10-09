// remove duplicate elements in the array and returns the element as a **string**,to return number you have to loop over the object and convert it to number using '+' infront of the element

const removeDuplicates = (inputArr) => {
  let obj = {};
  for (let elem of inputArr) obj[elem] ? obj[elem]++ : (obj[elem] = 1);
  return Object.keys(obj);
};

// test function
console.log(removeDuplicates([1, 2, 4, 2, 1, 3, 4, 1]));
