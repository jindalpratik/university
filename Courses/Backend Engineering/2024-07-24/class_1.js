class Person {
    constructor(name, age){
        //constructor function
        this.name = name,
        this.age = age
    }

    showDetails(){
        return this.name
    }
}

let person1 = new Person('Adam', 23)
console.log(person1)
console.log(person1.showDetails())