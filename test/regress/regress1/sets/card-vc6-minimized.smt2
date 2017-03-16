; EXPECT: unsat
(set-logic QF_UFLIAFS)
(declare-fun x () Int)
(declare-fun c () (Set Int))
(declare-fun alloc0 () (Set Int))
(declare-fun alloc1 () (Set Int))
(declare-fun alloc2 () (Set Int))
(assert
(and (member x c)
      (<= (card (setminus alloc1 alloc0)) 1)
      (<= (card (setminus alloc2 alloc1))
          (card (setminus c (singleton x))))
      (> (card (setminus alloc2 alloc0)) (card c))
))
(check-sat)
