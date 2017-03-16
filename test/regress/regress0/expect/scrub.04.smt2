; SCRUBBER: sed -e 's/The fact in question: .*$/The fact in question: TERM/'
; EXPECT: (error "A non-linear fact (involving div/mod/divisibility) was asserted to arithmetic in a linear logic: (/ n n)
; EXPECT: if you only use division (or modulus) by a constant value, or if you only use the divisibility-by-k predicate, try using the --rewrite-divk option.
; EXPECT: The fact in question: TERM
; EXPECT: ")
; EXIT: 1
(set-logic QF_LRA)
(set-info :status unknown)
(declare-fun n () Real)

; This example is test that LRA rejects multiplication terms

(assert (= (/ n n) 1))

(check-sat)
