package main

import "fmt"

func main() {
    nome := "jose vanderson"
    idade := 21
    peso := 54.0
    altura := 164.0 // em cm
    imc := peso / (altura * altura)

    fmt.Println(nome)
    fmt.Println("sua idade é", idade)
    fmt.Println("seu peso é", peso, "kg")
    fmt.Println("sua altura é", altura, "cm")
    fmt.Println("seu imc é", imc)
}
