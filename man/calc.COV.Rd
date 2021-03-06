% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/saem_fit_aux.R
\name{calc.COV}
\alias{calc.COV}
\title{Covariance matrix by Fisher Information Matrix via linearization}
\usage{
calc.COV(fit0)
}
\arguments{
\item{fit}{saemFit fit}
}
\value{
standard error of fixed effects
}
\description{
Get the covariance matrix of fixed effect estimates via calculating Fisher Information Matrix by linearization
}
\references{
Comets E, Lavenu A, Lavielle M. SAEMIX, an R version of the SAEM algorithm.
20th meeting of the Population Approach Group in Europe, Athens, Greece
(2011), Abstr 2173.
}
