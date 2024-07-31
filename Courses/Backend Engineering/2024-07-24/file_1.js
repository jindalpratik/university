const fs = require('fs')

console.log('before')

fs.readFile('file.txt', cb)
function cb(err, data){
    if(err){
        console.log(err)
    }else{
        console.log('content ' + data)
    }
}

console.log('after')