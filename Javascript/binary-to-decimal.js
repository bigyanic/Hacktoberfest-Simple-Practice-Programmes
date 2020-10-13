console.log(binarytodecimal(binary))

function binarytodecimal(binary) {
    var decimal = 0;
    binary.split("").reverse().forEach((element, index) => {
        decimal += Number(element) * (2 ** index);
    });
    return decimal;
}