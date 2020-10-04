function palindrome(str) {
    var re = /[\W_]/g;
    var lowRegStr = str.toLowerCase().replace(re, '');
    var reverseStr = lowRegStr.split('').reverse().join('');
    return reverseStr === lowRegStr;
}

result = palindrome("A man, a plan, a canal. Panama");

if (result) {
    console.log("string is palindrome")
} else {
    console.log("string is not palindrome")
}