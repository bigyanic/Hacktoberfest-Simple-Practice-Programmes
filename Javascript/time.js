
function showTime(){
    var clock = new Date(Date.now())
    var hr = clock.getHours()
    var min = clock.getMinutes()
    var sec = clock.getSeconds()
    console.clear()
    console.log(hr+' : '+min+' : '+sec)
    setTimeout(showTime,1000)
}
showTime()