let number = prompt('Enter a number: ')
check(number)

function check(number){
    if(number %2 == 0){
        console.log("number is even")
    } else {
        console.log("number is odd")
    }
}
