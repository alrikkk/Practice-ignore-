local function get_int_input(prompt)
    while true do
        io.write(prompt)
        local input = io.read()
        local value = tonumber(input)
        if value and value == math.floor(value) then
            return value
        else
            print("Error: Please enter a valid integer.")
        end
    end
end

local function get_float_input(prompt)
    while true do
        io.write(prompt)
        local input = io.read()
        local value = tonumber(input)
        if value then
            return value
        else
            print("Error: Please enter a valid number.")
        end
    end
end

local function add()
    local n = get_int_input("How many numbers do you want to add?: ")
    local total = 0.0
    for i = 1, n do
        local num = get_float_input("Enter number " .. i .. ": ")
        total = total + num
    end
    return total
end

local function subtract()
    local n = get_int_input("How many numbers do you want to subtract?: ")
    if n <= 0 then return 0.0 end

    local total = get_float_input("Enter number 1: ")
    for i = 2, n do
        local num = get_float_input("Enter number " .. i .. ": ")
        total = total - num
    end
    return total
end

local function multiply()
    local n = get_int_input("How many numbers do you want to multiply?: ")
    if n <= 0 then return 0.0 end

    local total = 1.0
    for i = 1, n do
        local num = get_float_input("Enter number " .. i .. ": ")
        total = total * num
    end
    return total
end

local function divide()
    local n = get_int_input("How many numbers do you want to divide?: ")
    if n <= 0 then return 0.0 end

    local total = get_float_input("Enter number 1: ")
    for i = 2, n do
        while true do
            local num = get_float_input("Enter number " .. i .. ": ")
            if num == 0 then
                print("Error: Division by zero is not allowed! Please enter a non-zero number.")
            else
                total = total / num
                break
            end
        end
    end
    return total
end

local function sqrt_func()
    while true do
        local n = get_float_input("Enter number to find square root: ")
        if n < 0 then
            print("Error: The number cannot be negative.")
        else
            return math.sqrt(n)
        end
    end
end

local function powa()
    local base = get_float_input("Enter base number: ")
    local exp = get_float_input("Enter exponent number: ")
    return math.pow(base, exp)
end

local function fact()
    while true do
        local n = get_int_input("Enter number to find its factorial: ")
        if n < 0 then
            print("Error: Factorial is not defined for negative numbers.")
        elseif n == 0 or n == 1 then
            return 1
        else
            local total = 1
            for i = 2, n do
                total = total * i
            end
            return total
        end
    end
end

local function main()
    print("===============BASIC LUA CALCULATOR===============\n")
    print("Please select an operation to perform: ")
    print("1. Add")
    print("2. Subtract")
    print("3. Multiply")
    print("4. Divide")
    print("5. Square Root")
    print("6. Power")
    print("7. Factorial")
    print("8. Exit")

    while true do
        io.write("\nEnter your choice (1-8): ")
        local choice = io.read()

        if choice == "1" then
            print("Result: " .. add())
        elseif choice == "2" then
            print("Result: " .. subtract())
        elseif choice == "3" then
            print("Result: " .. multiply())
        elseif choice == "4" then
            print("Result: " .. divide())
        elseif choice == "5" then
            print("Result: " .. sqrt_func())
        elseif choice == "6" then
            print("Result: " .. powa())
        elseif choice == "7" then
            print("Result: " .. fact())
        elseif choice == "8" then
            print("Exiting the calculator. Goodbye!")
            break
        else
            print("Invalid input. Please try again.")
        end
    end
end

main()
