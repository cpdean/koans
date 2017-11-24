/*
let rec factorial = number =>
switch number {
    | 0 => 1
    | n => n * factorial (n - 1)
    };
*/

let rec factorial = (number) =>
switch number {
    | 0 => 1
    | n => n * (factorial (n - 1))
    };
