import Foundation

func getIntInput(prompt: String) -> Int {
    while true {
        print(prompt, terminator: "")
        if let input = readLine(), let value = Int(input) {
            return value
        }
        print("Error: Please enter a valid integer.")
    }
}

func getDoubleInput(prompt: String) -> Double {
    while true {
        print(prompt, terminator: "")
        if let input = readLine(), let value = Double(input) {
            return value
        }
        print("Error: Please enter a valid number.")
    }
}

func add() -> Double {
    let n = getIntInput(prompt: "How many numbers do you want to add?: ")
    var total: Double = 0
    for i in 1...max(0, n) {
        if n <= 0 { break }
        let num = getDoubleInput(prompt: "Enter number \(i): ")
        total += num
    }
    return total
}

func subtract() -> Double {
    let n = getIntInput(prompt: "How many numbers do you want to subtract?: ")
    if n <= 0 { return 0 }
    
    var total = getDoubleInput(prompt: "Enter number 1: ")
    if n > 1 {
        for i in 2...n {
            let num = getDoubleInput(prompt: "Enter number \(i): ")
            total -= num
        }
    }
    return total
}

func multiply() -> Double {
    let n = getIntInput(prompt: "How many numbers do you want to multiply?: ")
    if n <= 0 { return 0 }
    var total: Double = 1
    for i in 1...n {
        let num = getDoubleInput(prompt: "Enter number \(i): ")
        total *= num
    }
    return total
}

func divide() -> Double {
    let n = getIntInput(prompt: "How many numbers do you want to divide?: ")
    if n <= 0 { return 0 }
    
    var total = getDoubleInput(prompt: "Enter number 1: ")
    if n > 1 {
        for i in 2...n {
            while true {
                let num = getDoubleInput(prompt: "Enter number \(i): ")
                if num == 0 {
                    print("Error: Division by zero is not allowed! Please enter a non-zero number.")
                } else {
                    total /= num
                    break
                }
            }
        }
    }
    return total
}

func sqrtFunc() -> Double {
    while true {
        let n = getDoubleInput(prompt: "Enter number to find square root: ")
        if n < 0 {
            print("Error: The number cannot be negative.")
        } else {
            return sqrt(n)
        }
    }
}

func powa() -> Double {
    let base = getDoubleInput(prompt: "Enter base number: ")
    let exp = getDoubleInput(prompt: "Enter exponent number: ")
    return pow(base, exp)
}

func fact() -> Double {
    while true {
        let n = getIntInput(prompt: "Enter number to find its factorial: ")
        if n < 0 {
            print("Error: Factorial is not defined for negative numbers.")
        } else if n == 0 || n == 1 {
            return 1
        } else {
            var total: Double = 1
            for i in 2...n {
                total *= Double(i)
            }
            return total
        }
    }
}

func main() {
    print("===============BASIC SWIFT CALCULATOR===============\n")
    print("Please select an operation to perform: ")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    print("5. Square Root")
    print("6. Power")
    print("7. Factorial")
    print("8. Exit")
    
    while true {
        print("\nEnter your choice (1-8): ", terminator: "")
        if let choice = readLine() {
            switch choice {
            case "1":
                print("Result: \(add())")
            case "2":
                print("Result: \(subtract())")
            case "3":
                print("Result: \(multiply())")
            case "4":
                print("Result: \(divide())")
            case "5":
                print("Result: \(sqrtFunc())")
            case "6":
                print("Result: \(powa())")
            case "7":
                print("Result: \(fact())")
            case "8":
                print("Exiting the calculator. Goodbye!")
                return
            default:
                print("Invalid input. Please try again.")
            }
        }
    }
}

main()
