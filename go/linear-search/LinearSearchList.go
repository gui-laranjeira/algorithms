package main

import "fmt"

func linearSearch(list []int, number int) bool {
	for i := 0; i < len(list); i++ {
		if list[i] == number {
			return true
		}
	}
	return false
}

func main() {
	number := 20
	list := []int{100, 20, 30, 23, 434, 564, 65, 54, 52, 40, 9, 3, 50, 2}
	fmt.Print(linearSearch(list, number))
}
