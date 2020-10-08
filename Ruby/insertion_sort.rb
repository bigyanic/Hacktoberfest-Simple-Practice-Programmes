

  def insertion_sort(numbers)

    0.upto(numbers.length - 1).each { |i| element = numbers[i]; position = i

      while element < numbers[position - 1] && position > 0
        numbers[position] = numbers[position - 1]
        numbers[position - 1] = element
        position -= 1
      end }

    numbers

  end

  puts "Enter a list of numbers seprated by space"

  list = gets.chomp!
  insertion_sort(list)
  print list
