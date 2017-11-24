/* vim: set syntax=reason */
open OUnit;
open What;

let identity = (x) => x;

/* just make sure i'm able to use OUnit */
let test1 = (test_ctxt) => assert_equal("x", identity("x"));
let test2 = (test_ctxt) => assert_equal(100, identity(100));

let factorial = NumberThings.factorial;

let suite = "suite" >::: [
    "test1">:: test1,
    "test2">:: test2,
    "fact1">:: (test_ctxt) => assert_equal(1, factorial(1)),
    "fact5">:: (test_ctxt) => assert_equal(120, factorial(5)),
];

let main = () => run_test_tt_main(suite);
main();


