(set-logic QF_ALL_SUPPORTED)
(set-info :status unsat)
(declare-sort Loc 0)
(declare-const l Loc)
(assert (sep (not (emp l l)) (not (emp l l))))
(assert (pto l l))
(check-sat)