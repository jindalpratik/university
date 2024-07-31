//prototypal inheritance
let person1 = {
    name : 'Adam',
    age : 25,
    showDetails : function(){
        console.log(this.name + ' ' + this.age)
    }
}

let person2 = {
    name : 'Steve'
}

// person1.showDetails()

person2.__proto__ = person1 // issai inheritance hua prototypal inheritance and person2 person1 ki saari properties access krne lg gya hai
console.log(person2)
console.log(person2.name + ' ' + person2.age)
person2.showDetails()