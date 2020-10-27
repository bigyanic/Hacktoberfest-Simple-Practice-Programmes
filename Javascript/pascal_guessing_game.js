// You can guess your number 10 times if you guess correctly you win
// Include this inside script tag in your HTML

var inputNum = window.prompt("Enter a number: ");

const randNum = Math.floor(Math.random() * 101)

let counter = 1;

while(inputNum != randNum && counter <=10){
    if(inputNum < randNum){
        alert("Your guess is too low");
        inputNum = window.prompt("Enter a number: ");
        counter += 1;
    } else if(inputNum > randNum){
        alert("Your guess is too high");
        inputNum = window.prompt("Enter a number: ");
        counter += 1;
    }
}

if(inputNum == randNum){
    alert(`You won number was ${randNum}`);
}else{
    alert(`You lost number was ${randNum}`);
}