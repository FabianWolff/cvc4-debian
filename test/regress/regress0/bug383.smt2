(set-logic QF_LIA)
(set-info :status sat)
(declare-fun f1 () Int)
(declare-fun f2 () Int)
(declare-fun f3 () Int)
(assert (< 1 f1 f2 f3 5))
(check-sat)
(exit)
