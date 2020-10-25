package main 

  
import ( 

    "fmt"

    "math"
) 

  
// Main function 
func main() { 

  

    // Finding square root  

    // of the given number 

    // Using Sqrt() function 

    res_1 := math.Sqrt(0) 

    res_2 := math.Sqrt(-100) 

    res_3 := math.Sqrt(math.Inf(1)) 

    res_4 := math.Sqrt(math.NaN()) 

    res_5 := math.Sqrt(36) 

  

    // Displaying the result 

    fmt.Printf("Result 1: %.1f", res_1) 

    fmt.Printf("\nResult 2: %.1f", res_2) 

    fmt.Printf("\nResult 3: %.1f", res_3) 

    fmt.Printf("\nResult 4: %.1f", res_4) 

    fmt.Printf("\nResult 5: %.1f", res_5) 

  
} 
