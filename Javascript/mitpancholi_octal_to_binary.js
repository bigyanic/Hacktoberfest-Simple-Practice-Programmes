const octal = 054;
if (octal.toString().match(/^[0-8]*$/)) {
  console.log("Decimal : " + octal + "\nBinary : " + octal.toString(2));
} else {
  console.log("Number is not Octal");
}
