open What;
let add = (a, b) => a + b;
let addOne = add(1);
let addTwo = add(2);

Printf.printf("%d\n", addOne(1));
Printf.printf("%d\n", addOne(2));
Printf.printf("%d\n", addOne(3));

Printf.printf("%d\n", addTwo(1));
Printf.printf("%d\n", addTwo(2));
Printf.printf("%d\n", addTwo(3));

Printf.printf("%d\n", add(9, 9));
Printf.printf("%d\n", add(9, 9));
Printf.printf("%d\n", add(9, 9));
Printf.printf("%d\n", add(9, 9));
Printf.printf("%d\n", add(9, 9));
Printf.printf("%d\n", add(9, 9));
Printf.printf("%d\n", add(9, 9));
Printf.printf("%d\n", add(9, 9));
Printf.printf("%d\n", add(9, 9));
Printf.printf("%d\n", add(9, 9));

let b = NumberThings.factorial(10);
Printf.printf("factorial 10: %d\n", b);
