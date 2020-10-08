

  def bubble_sort(array)

    n = array.length

    loop do
      swapped = false
      (n-1).times { |i| if array[i] > array[i+1]
          array[i], array[i+1] = array[i+1], array[i]
          swapped = true
        end }
      break if not swapped
    end

    array
  end

  puts "Enter a list of numbers seprated by space"

  list = gets.chomp!
  bubble_sort(list)
  print list
