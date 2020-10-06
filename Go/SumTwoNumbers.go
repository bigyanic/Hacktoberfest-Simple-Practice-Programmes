package main

import (
    "strconv"
	"fmt"
)


func main()  {
	var n1 int
	var n2 int
	fmt.Scanf("%d\n%d", &n1, &n2)
    fmt.Print("Sum = " + strconv.Itoa(n1 + n2))
}