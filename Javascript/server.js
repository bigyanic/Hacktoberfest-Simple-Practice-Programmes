// A simple web server
const express = require('express')

// initialize express app
const app = express()

// routes
app.get('/', (req,res) => {
    res.send('This is a message from web server')
})

// listening to the server
app.listen(8080,()=>{
    console.log('server is running...')
})
