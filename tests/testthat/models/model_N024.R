source("helper-prep_fit.R")
context("NLME24: one-compartment oral, multiple-dose")
runno <- "N024"

datr <-Oral_1CPT
datr$EVID <- ifelse(datr$EVID == 1, 101, datr$EVID)
datr <- datr[datr$EVID != 2,]

specs4i <-
  list(
    fixed = lCL + lV + lKA ~ 1,
    random = pdDiag(value = diag(c(3, 3, 3)), form = lCL + lV + lKA ~ 1),
    start = c(lCL = 1.6, lV = 4.5, lKA = 0.2)
  )

dat <- datr[datr$SD == 0,]

fit[[runno]] <-
  nlme_lin_cmpt(
    dat,
    par_model = specs4i,
    ncmt = 1,
    oral = TRUE,
    weight = varPower(fixed = c(1)),
    verbose = verbose_minimization,
    control = default_control
  )

# Generate this with generate_expected_values(fit[[runno]])
expected_values[[runno]] <-
  list(
    lik=c(-26146.11, 52306.22, 52351.37),
    param=c(1.3892, 4.2036, -0.013828),
    stdev_param=c(1.3376, 1.4228, 1.7359),
    sigma=c(0.19753)
  )
