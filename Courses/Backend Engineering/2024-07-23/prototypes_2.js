Array.prototype.myMap = function(cb) {
    let newArr = [];
    for(let i = 0; i < this.length;i++) {
        newArr.push(this[i]);
    }
    return newArr;
}

let arr = [1,2,3,4];
let newArr = arr.myMap();
console.log(newArr);