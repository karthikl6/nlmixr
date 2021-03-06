% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/huxtable.R
\name{asHux.nlmixrFitCore}
\alias{asHux.nlmixrFitCore}
\title{Change a nlmixr fit object to a huxtable}
\usage{
asHux.nlmixrFitCore(..., error_format = "({std.error})",
  error_style = c("stderr", "ci", "statistic", "pvalue"),
  error_pos = c("below", "same", "right"), number_format = "\%.3f",
  align = ".", pad_decimal = ".", ci_level = NULL,
  tidy_args = NULL, stars = c(`***` = 0.001, `**` = 0.01, `*` = 0.05),
  bold_signif = NULL, borders = 0.4, outer_borders = 0.8, note = if
  (is.null(stars)) NULL else "{stars}.", statistics = c(N = "nobs",
  `Objective Function` = "OBJF", "logLik", "AIC"), coefs = NULL,
  omit_coefs = NULL, na_omit = c("all", "any", "none"))
}
\arguments{
\item{...}{Models, or a single list of models. Names will be used as column headings.}

\item{error_format}{How to display uncertainty in estimates. See below.}

\item{error_style}{Deprecated. One or more of "stderr", "ci" (confidence interval), "statistic" or "pvalue".}

\item{error_pos}{Display uncertainty "below", to the "right" of, or in the "same" cell as estimates.}

\item{number_format}{Format for numbering. See \code{\link[=number_format]{number_format()}} for details.}

\item{align}{Alignment for table cells. Set to a single character to align on this character.}

\item{pad_decimal}{Deprecated in favour of \code{align}.}

\item{ci_level}{Confidence level for intervals. Set to \code{NULL} to not calculate confidence intervals.}

\item{tidy_args}{List of arguments to pass to \code{\link[broom:tidy]{broom::tidy()}}. You can also pass a list of lists;
if so, the nth element will be used for the nth column.}

\item{stars}{Levels for p value stars. Names of \code{stars} are symbols to use. Set to \code{NULL} to not show stars.}

\item{bold_signif}{Where p values are below this number, cells will be displayed in bold. Use \code{NULL} to turn off
this behaviour.}

\item{borders}{Thickness of inner horizontal borders. Set to 0 for no borders.}

\item{outer_borders}{Thickness of outer (top and bottom) horizontal borders. Set to 0 for no borders.}

\item{note}{Footnote for bottom cell, which spans all columns. \code{{stars}} will be replaced by a note about
significance stars. Set to \code{NULL} for no footnote.}

\item{statistics}{A vector of summary statistics to display. Set to \code{NULL} to show all available
statistics. To change display names, name the \code{statistics} vector:
\code{c("Displayed title" = "statistic_name", ...)}}

\item{coefs}{A vector of coefficients to display. Overrules \code{omit_coefs}. To change display names,
name the \code{coef} vector: \code{c("Displayed title" = "coefficient_name", ...)}}

\item{omit_coefs}{Omit these coefficients.}

\item{na_omit}{Style of na_omit to use for the \code{error_format};  If \code{na_omit = "all"}, then all items in the \code{error_format} have to be \code{NA} to replace the row with an empty string.  If \code{na_omit = "any"}, then any of the items in the \code{error_format} with a \code{NA} will be replaced with an empty string.}
}
\description{
This is a thin layer that differs from
\code{\link[hustable]{huxreg}} to make it easier to produce
reasonable huxtables with nlmixr fit objects.
}
\details{
\itemize{

\item Drops \code{NA} values from tables, so (\code{NA}) is not
shown for estimates without a standard error.

\item Filters out any blank rows.

\item Removes R.squared from the statistics and replaces with the
objective function value.

\item Adjust broom separators for an easier to read format.

}
}
