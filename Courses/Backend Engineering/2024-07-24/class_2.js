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

class PersonChild extends Person{
    constructor(){
        super('Steve')
    }
}

let person1 = new PersonChild()
console.log(person1.showDetails())