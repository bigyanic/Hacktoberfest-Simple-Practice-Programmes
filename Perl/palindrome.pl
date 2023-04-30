
$true        = 1;
$false       = 0;
$ignore_case = $true;

$string = "abbA";

if ( palindrome_string_test( $string ) == $true )
{
    print "\"$string\" is a palindrome\n";
}
else { print "\"$string\" is NOT a palindrome\n" }

sub palindrome_string_test
{
    $string =~ s/^\s+//g;    #Strip leading / trailing whitespace if any
    $string =~ s/\s+$//g;
    $teststring = reverse( $string );

    if ( $ignore_case == 1 )
    {
        print "Testing case insensitive:";
        if ( lc $teststring eq lc $string ) { return $true; }
    }
    else
    {
        print "Testing case sensitive:";

        if ( $teststring eq $string ) { return $true; }
    }

}

