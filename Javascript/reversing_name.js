<script>
//here i am taking name as input
var my_str=window.prompt("Enter your name");

var i=my_str.length;
i=i-1;
for (var x = i; x >=0; x--)
{
document.write(my_str.charAt(x));
}
</script>