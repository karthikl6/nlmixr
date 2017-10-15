// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/nlmixr_types.h"
#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// rxGrad
void rxGrad(SEXP rho);
RcppExport SEXP _nlmixr_rxGrad(SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rho(rhoSEXP);
    rxGrad(rho);
    return R_NilValue;
END_RCPP
}
// rxInnerNum
void rxInnerNum(SEXP etanews, SEXP rho);
RcppExport SEXP _nlmixr_rxInnerNum(SEXP etanewsSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type etanews(etanewsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rho(rhoSEXP);
    rxInnerNum(etanews, rho);
    return R_NilValue;
END_RCPP
}
// rxInner
void rxInner(SEXP etanews, SEXP rho);
RcppExport SEXP _nlmixr_rxInner(SEXP etanewsSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type etanews(etanewsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type rho(rhoSEXP);
    rxInner(etanews, rho);
    return R_NilValue;
END_RCPP
}
// rxHessian
void rxHessian(SEXP rho);
RcppExport SEXP _nlmixr_rxHessian(SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rho(rhoSEXP);
    rxHessian(rho);
    return R_NilValue;
END_RCPP
}
// RxODE_focei_eta_lik
NumericVector RxODE_focei_eta_lik(SEXP sexp_eta, SEXP sexp_rho);
RcppExport SEXP _nlmixr_RxODE_focei_eta_lik(SEXP sexp_etaSEXP, SEXP sexp_rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp_eta(sexp_etaSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sexp_rho(sexp_rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(RxODE_focei_eta_lik(sexp_eta, sexp_rho));
    return rcpp_result_gen;
END_RCPP
}
// RxODE_focei_eta_lp
NumericVector RxODE_focei_eta_lp(SEXP sexp_eta, SEXP sexp_rho);
RcppExport SEXP _nlmixr_RxODE_focei_eta_lp(SEXP sexp_etaSEXP, SEXP sexp_rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sexp_eta(sexp_etaSEXP);
    Rcpp::traits::input_parameter< SEXP >::type sexp_rho(sexp_rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(RxODE_focei_eta_lp(sexp_eta, sexp_rho));
    return rcpp_result_gen;
END_RCPP
}
// RxODE_focei_eta
XPtr<rxFn2> RxODE_focei_eta(std::string fstr);
RcppExport SEXP _nlmixr_RxODE_focei_eta(SEXP fstrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fstr(fstrSEXP);
    rcpp_result_gen = Rcpp::wrap(RxODE_focei_eta(fstr));
    return rcpp_result_gen;
END_RCPP
}
// RxODE_focei_finalize_llik
NumericVector RxODE_focei_finalize_llik(SEXP rho);
RcppExport SEXP _nlmixr_RxODE_focei_finalize_llik(SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(RxODE_focei_finalize_llik(rho));
    return rcpp_result_gen;
END_RCPP
}
// rxDetaDomega
void rxDetaDomega(SEXP rho);
RcppExport SEXP _nlmixr_rxDetaDomega(SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rho(rhoSEXP);
    rxDetaDomega(rho);
    return R_NilValue;
END_RCPP
}
// rxOuter_
void rxOuter_(SEXP rho);
RcppExport SEXP _nlmixr_rxOuter_(SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rho(rhoSEXP);
    rxOuter_(rho);
    return R_NilValue;
END_RCPP
}
// rxDetaDtheta
void rxDetaDtheta(SEXP rho);
RcppExport SEXP _nlmixr_rxDetaDtheta(SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rho(rhoSEXP);
    rxDetaDtheta(rho);
    return R_NilValue;
END_RCPP
}
// rxOuter
NumericVector rxOuter(SEXP rho);
RcppExport SEXP _nlmixr_rxOuter(SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(rxOuter(rho));
    return rcpp_result_gen;
END_RCPP
}
// rxUpdateEtas
NumericVector rxUpdateEtas(SEXP DnDhS, SEXP DhS, SEXP initS, SEXP acceptNS);
RcppExport SEXP _nlmixr_rxUpdateEtas(SEXP DnDhSSEXP, SEXP DhSSEXP, SEXP initSSEXP, SEXP acceptNSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type DnDhS(DnDhSSEXP);
    Rcpp::traits::input_parameter< SEXP >::type DhS(DhSSEXP);
    Rcpp::traits::input_parameter< SEXP >::type initS(initSSEXP);
    Rcpp::traits::input_parameter< SEXP >::type acceptNS(acceptNSSEXP);
    rcpp_result_gen = Rcpp::wrap(rxUpdateEtas(DnDhS, DhS, initS, acceptNS));
    return rcpp_result_gen;
END_RCPP
}
// foceiDataSetup
DataFrame foceiDataSetup(const NumericVector& id);
RcppExport SEXP _nlmixr_foceiDataSetup(SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(foceiDataSetup(id));
    return rcpp_result_gen;
END_RCPP
}
// sFOCEi
arma::mat sFOCEi(NumericVector par, Environment e);
RcppExport SEXP _nlmixr_sFOCEi(SEXP parSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< Environment >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(sFOCEi(par, e));
    return rcpp_result_gen;
END_RCPP
}
// grFOCEi
NumericVector grFOCEi(NumericVector par, Environment e);
RcppExport SEXP _nlmixr_grFOCEi(SEXP parSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< Environment >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(grFOCEi(par, e));
    return rcpp_result_gen;
END_RCPP
}
// lin_cmt_stan
SEXP lin_cmt_stan(Eigen::Map<Eigen::VectorXd> obs_time, Eigen::Map<Eigen::VectorXd> dose_time, Eigen::Map<Eigen::VectorXd> dose, Eigen::Map<Eigen::VectorXd> Tinf, Eigen::Map<Eigen::VectorXd> params, SEXP oralSEXP, SEXP infusionSEXP, SEXP ncmtSEXP, SEXP parameterizationSEXP);
RcppExport SEXP _nlmixr_lin_cmt_stan(SEXP obs_timeSEXP, SEXP dose_timeSEXP, SEXP doseSEXP, SEXP TinfSEXP, SEXP paramsSEXP, SEXP oralSEXPSEXP, SEXP infusionSEXPSEXP, SEXP ncmtSEXPSEXP, SEXP parameterizationSEXPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type obs_time(obs_timeSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type dose_time(dose_timeSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type dose(doseSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type Tinf(TinfSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type oralSEXP(oralSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type infusionSEXP(infusionSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ncmtSEXP(ncmtSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type parameterizationSEXP(parameterizationSEXPSEXP);
    rcpp_result_gen = Rcpp::wrap(lin_cmt_stan(obs_time, dose_time, dose, Tinf, params, oralSEXP, infusionSEXP, ncmtSEXP, parameterizationSEXP));
    return rcpp_result_gen;
END_RCPP
}
// llik_binomial_c
SEXP llik_binomial_c(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> N, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_binomial_c(SEXP ySEXP, SEXP NSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type N(NSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_binomial_c(y, N, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_poisson
SEXP llik_poisson(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_poisson(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_poisson(y, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_normal
SEXP llik_normal(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_normal(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_normal(y, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_betabinomial
SEXP llik_betabinomial(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> N, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_betabinomial(SEXP ySEXP, SEXP NSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type N(NSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_betabinomial(y, N, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_student_t
SEXP llik_student_t(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_student_t(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_student_t(y, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_beta
SEXP llik_beta(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_beta(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_beta(y, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_neg_binomial
SEXP llik_neg_binomial(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_neg_binomial(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_neg_binomial(y, params));
    return rcpp_result_gen;
END_RCPP
}
