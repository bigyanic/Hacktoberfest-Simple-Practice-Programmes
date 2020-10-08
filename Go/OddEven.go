package main

import (
	"fmt"
)


func main2()  {
	var num int
	fmt.Scanf("%d", &num)
    if num % 2 == 0 {
		fmt.Println("Even")
	} else {
		fmt.Println("Odd")
	}
}
