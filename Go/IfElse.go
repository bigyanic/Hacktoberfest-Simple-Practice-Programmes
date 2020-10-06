package main

import (
	"fmt"
)


func main()  {
	var num int
	fmt.Scanf("%d", &num)
    if num < 18 {
		fmt.Println("Lesser than 18")
	} else if num < 60 {
		fmt.Println("Lesser than 60")
	} else {
		fmt.Println("More than 60")
	}
}