package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)


func main() {
	reader := bufio.NewReader(os.Stdin)
	n, _ := reader.ReadString('\n')
	var sum int = 0
	var add int
	for i := 0; i < len(n); i++ {
		add, _ = strconv.Atoi(string(n[i]))
		sum += add
	}
	fmt.Print("Sum = " + strconv.Itoa(sum))
}