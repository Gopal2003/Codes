console.log("welcome to tutorial 51");


function Alphabets(Value) {
    let myIndex = 0;
    return {
        next: function () {
            if (myIndex < Value.length) {
                return {
                    value: Value[myIndex++],
                    done: false
                }
            }
            else {
                return {
                    done: true
                }
            }
        }
    }
}
    let Array = ["Apple", 'Ball', 'Cat', 'Dog'];
    console.log(Array);
    const Alphabet=Alphabets(Array);
    console.log(Alphabet.next());
    console.log(Alphabet.next());
    console.log(Alphabet.next());
    console.log(Alphabet.next());
    console.log(Alphabet.next());