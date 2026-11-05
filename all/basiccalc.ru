def get_int_input(prompt)
  loop do
    print prompt
    input = gets.chomp
    if input =~ /^-?\d+$/
      return input.to_i
    else
      puts "Error: Please enter a valid integer."
    end
  end
end

def get_float_input(prompt)
  loop do
    print prompt
    input = gets.chomp
    if input =~ /^-?\d+(\.\d+)?$/
      return input.to_f
    else
      puts "Error: Please enter a valid number."
    end
  end
end

def add
  n = get_int_input("How many numbers do you want to add?: ")
  total = 0.0
  n.times do |i|
    num = get_float_input("Enter number #{i + 1}: ")
    total += num
  end
  total
end

def subtract
  n = get_int_input("How many numbers do you want to subtract?: ")
  return 0.0 if n <= 0

  total = get_float_input("Enter number 1: ")
  (n - 1).times do |i|
    num = get_float_input("Enter number #{i + 2}: ")
    total -= num
  end
  total
end

def multiply
  n = get_int_input("How many numbers do you want to multiply?: ")
  return 0.0 if n <= 0

  total = 1.0
  n.times do |i|
    num = get_float_input("Enter number #{i + 1}: ")
    total *= num
  end
  total
end

def divide
  n = get_int_input("How many numbers do you want to divide?: ")
  return 0.0 if n <= 0

  total = get_float_input("Enter number 1: ")
  (n - 1).times do |i|
    loop do
      num = get_float_input("Enter number #{i + 2}: ")
      if num == 0
        puts "Error: Division by zero is not allowed! Please enter a non-zero number."
      else
        total /= num
        break
      end
    end
  end
  total
end

def sqrt
  loop do
    n = get_float_input("Enter number to find square root: ")
    if n < 0
      puts "Error: The number cannot be negative."
    else
      return Math.sqrt(n)
    end
  end
end

def powa
  base = get_float_input("Enter base number: ")
  exp = get_float_input("Enter exponent number: ")
  base**exp
end

def fact
  loop do
    n = get_int_input("Enter number to find its factorial: ")
    if n < 0
      puts "Error: Factorial is not defined for negative numbers."
    elsif n == 0 || n == 1
      return 1
    else
      total = 1
      (2..n).each { |i| total *= i }
      return total
    end
  end
end

def main
  puts "===============BASIC RUBY CALCULATOR===============\n\n"
  puts "Please select an operation to perform: "
  puts "1. Add"
  puts "2. Subtract"
  puts "3. Multiply"
  puts "4. Divide"
  puts "5. Square Root"
  puts "6. Power"
  puts "7. Factorial"
  puts "8. Exit"

  loop do
    print "\nEnter your choice (1-8): "
    choice = gets.chomp

    case choice
    when '1'
      puts "Result: #{add}"
    when '2'
      puts "Result: #{subtract}"
    when '3'
      puts "Result: #{multiply}"
    when '4'
      puts "Result: #{divide}"
    when '5'
      puts "Result: #{sqrt}"
    when '6'
      puts "Result: #{powa}"
    when '7'
      puts "Result: #{fact}"
    when '8'
      puts "Exiting the calculator. Goodbye!"
      break
    else
      puts "Invalid input. Please try again."
    end
  end
end

main
