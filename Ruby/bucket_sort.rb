

  DEFAULT_BUCKET_SIZE = 5


  def bucket_sort(input, bucket_size = DEFAULT_BUCKET_SIZE)

    print 'Empty array\n' if input.empty?

    array = input.split(' ').map(&:to_i)

    bucket_count = ((array.max - array.min) / bucket_size).floor + 1

    buckets = []; bucket_count.times { buckets.push [] }

    array.each { |item| buckets[((item - array.min) / bucket_size).floor].push(item) }

    buckets.each { |bucket| bucket.sort! }

    buckets.flatten.join(' ')

  end

  puts "Enter a list of numbers seprated by space"

  list = gets.chomp!
  print bucket_sort(list)
