// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// ProjKrigCpp
List ProjKrigCpp(arma::vec sigma2, arma::vec rho, arma::vec rho0, arma::mat alpha, arma::mat r, int n, int nsample, arma::mat H_tot, int nprev, NumericVector theta, String corr_fun, double kappa_matern);
RcppExport SEXP _CircSpaceTime_ProjKrigCpp(SEXP sigma2SEXP, SEXP rhoSEXP, SEXP rho0SEXP, SEXP alphaSEXP, SEXP rSEXP, SEXP nSEXP, SEXP nsampleSEXP, SEXP H_totSEXP, SEXP nprevSEXP, SEXP thetaSEXP, SEXP corr_funSEXP, SEXP kappa_maternSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type rho0(rho0SEXP);
    Rcpp::traits::input_parameter< arma::mat >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type nsample(nsampleSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H_tot(H_totSEXP);
    Rcpp::traits::input_parameter< int >::type nprev(nprevSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< String >::type corr_fun(corr_funSEXP);
    Rcpp::traits::input_parameter< double >::type kappa_matern(kappa_maternSEXP);
    rcpp_result_gen = Rcpp::wrap(ProjKrigCpp(sigma2, rho, rho0, alpha, r, n, nsample, H_tot, nprev, theta, corr_fun, kappa_matern));
    return rcpp_result_gen;
END_RCPP
}
// ProjSpRcpp
List ProjSpRcpp(int ad_start, int ad_end, double ad_esp, int burnin, int thin, int iter_1, int iter_2, int n_j, int iter_z, NumericVector prior_rho0, NumericVector prior_sigma2, NumericVector prior_rho, arma::mat prior_alpha_sigma, arma::vec prior_alpha_mu, double sdrho0, double sdsigma2, double sdrho, arma::vec sdr, double rho0, double sigma2, double rho, arma::vec alpha, NumericVector r, NumericVector theta, arma::mat H, double acceptratio, String corr_fun, double kappa_matern);
RcppExport SEXP _CircSpaceTime_ProjSpRcpp(SEXP ad_startSEXP, SEXP ad_endSEXP, SEXP ad_espSEXP, SEXP burninSEXP, SEXP thinSEXP, SEXP iter_1SEXP, SEXP iter_2SEXP, SEXP n_jSEXP, SEXP iter_zSEXP, SEXP prior_rho0SEXP, SEXP prior_sigma2SEXP, SEXP prior_rhoSEXP, SEXP prior_alpha_sigmaSEXP, SEXP prior_alpha_muSEXP, SEXP sdrho0SEXP, SEXP sdsigma2SEXP, SEXP sdrhoSEXP, SEXP sdrSEXP, SEXP rho0SEXP, SEXP sigma2SEXP, SEXP rhoSEXP, SEXP alphaSEXP, SEXP rSEXP, SEXP thetaSEXP, SEXP HSEXP, SEXP acceptratioSEXP, SEXP corr_funSEXP, SEXP kappa_maternSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ad_start(ad_startSEXP);
    Rcpp::traits::input_parameter< int >::type ad_end(ad_endSEXP);
    Rcpp::traits::input_parameter< double >::type ad_esp(ad_espSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< int >::type iter_1(iter_1SEXP);
    Rcpp::traits::input_parameter< int >::type iter_2(iter_2SEXP);
    Rcpp::traits::input_parameter< int >::type n_j(n_jSEXP);
    Rcpp::traits::input_parameter< int >::type iter_z(iter_zSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_rho0(prior_rho0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_sigma2(prior_sigma2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_rho(prior_rhoSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type prior_alpha_sigma(prior_alpha_sigmaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prior_alpha_mu(prior_alpha_muSEXP);
    Rcpp::traits::input_parameter< double >::type sdrho0(sdrho0SEXP);
    Rcpp::traits::input_parameter< double >::type sdsigma2(sdsigma2SEXP);
    Rcpp::traits::input_parameter< double >::type sdrho(sdrhoSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sdr(sdrSEXP);
    Rcpp::traits::input_parameter< double >::type rho0(rho0SEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H(HSEXP);
    Rcpp::traits::input_parameter< double >::type acceptratio(acceptratioSEXP);
    Rcpp::traits::input_parameter< String >::type corr_fun(corr_funSEXP);
    Rcpp::traits::input_parameter< double >::type kappa_matern(kappa_maternSEXP);
    rcpp_result_gen = Rcpp::wrap(ProjSpRcpp(ad_start, ad_end, ad_esp, burnin, thin, iter_1, iter_2, n_j, iter_z, prior_rho0, prior_sigma2, prior_rho, prior_alpha_sigma, prior_alpha_mu, sdrho0, sdsigma2, sdrho, sdr, rho0, sigma2, rho, alpha, r, theta, H, acceptratio, corr_fun, kappa_matern));
    return rcpp_result_gen;
END_RCPP
}
// WrapKrigCpp_nugget
List WrapKrigCpp_nugget(NumericVector sigma2, NumericVector alpha, NumericVector rho, NumericVector beta, IntegerMatrix k, int n, int nsample, arma::mat H_tot, int nprev, NumericVector x, String corr_fun, double kappa_matern);
RcppExport SEXP _CircSpaceTime_WrapKrigCpp_nugget(SEXP sigma2SEXP, SEXP alphaSEXP, SEXP rhoSEXP, SEXP betaSEXP, SEXP kSEXP, SEXP nSEXP, SEXP nsampleSEXP, SEXP H_totSEXP, SEXP nprevSEXP, SEXP xSEXP, SEXP corr_funSEXP, SEXP kappa_maternSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type nsample(nsampleSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H_tot(H_totSEXP);
    Rcpp::traits::input_parameter< int >::type nprev(nprevSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< String >::type corr_fun(corr_funSEXP);
    Rcpp::traits::input_parameter< double >::type kappa_matern(kappa_maternSEXP);
    rcpp_result_gen = Rcpp::wrap(WrapKrigCpp_nugget(sigma2, alpha, rho, beta, k, n, nsample, H_tot, nprev, x, corr_fun, kappa_matern));
    return rcpp_result_gen;
END_RCPP
}
// WrapKrigCpp
List WrapKrigCpp(NumericVector sigma2, NumericVector alpha, NumericVector rho, IntegerMatrix k, int n, int nsample, arma::mat H_tot, int nprev, NumericVector x, String corr_fun, double kappa_matern);
RcppExport SEXP _CircSpaceTime_WrapKrigCpp(SEXP sigma2SEXP, SEXP alphaSEXP, SEXP rhoSEXP, SEXP kSEXP, SEXP nSEXP, SEXP nsampleSEXP, SEXP H_totSEXP, SEXP nprevSEXP, SEXP xSEXP, SEXP corr_funSEXP, SEXP kappa_maternSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type nsample(nsampleSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H_tot(H_totSEXP);
    Rcpp::traits::input_parameter< int >::type nprev(nprevSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< String >::type corr_fun(corr_funSEXP);
    Rcpp::traits::input_parameter< double >::type kappa_matern(kappa_maternSEXP);
    rcpp_result_gen = Rcpp::wrap(WrapKrigCpp(sigma2, alpha, rho, k, n, nsample, H_tot, nprev, x, corr_fun, kappa_matern));
    return rcpp_result_gen;
END_RCPP
}
// WrapSpRcpp_nugget
List WrapSpRcpp_nugget(int ad_start, int ad_end, double ad_esp, int burnin, int thin, int iter_1, int iter_2, int n_j, NumericVector prior_alpha, NumericVector prior_rho, NumericVector prior_sigma2, NumericVector prior_beta, double sdrho, double sdsigma2, double sdbeta, double alpha, double rho, double sigma2, double beta, IntegerVector k, NumericVector x, arma::mat H, double acceptratio, String corr_fun, double kappa_matern);
RcppExport SEXP _CircSpaceTime_WrapSpRcpp_nugget(SEXP ad_startSEXP, SEXP ad_endSEXP, SEXP ad_espSEXP, SEXP burninSEXP, SEXP thinSEXP, SEXP iter_1SEXP, SEXP iter_2SEXP, SEXP n_jSEXP, SEXP prior_alphaSEXP, SEXP prior_rhoSEXP, SEXP prior_sigma2SEXP, SEXP prior_betaSEXP, SEXP sdrhoSEXP, SEXP sdsigma2SEXP, SEXP sdbetaSEXP, SEXP alphaSEXP, SEXP rhoSEXP, SEXP sigma2SEXP, SEXP betaSEXP, SEXP kSEXP, SEXP xSEXP, SEXP HSEXP, SEXP acceptratioSEXP, SEXP corr_funSEXP, SEXP kappa_maternSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ad_start(ad_startSEXP);
    Rcpp::traits::input_parameter< int >::type ad_end(ad_endSEXP);
    Rcpp::traits::input_parameter< double >::type ad_esp(ad_espSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< int >::type iter_1(iter_1SEXP);
    Rcpp::traits::input_parameter< int >::type iter_2(iter_2SEXP);
    Rcpp::traits::input_parameter< int >::type n_j(n_jSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_alpha(prior_alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_rho(prior_rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_sigma2(prior_sigma2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_beta(prior_betaSEXP);
    Rcpp::traits::input_parameter< double >::type sdrho(sdrhoSEXP);
    Rcpp::traits::input_parameter< double >::type sdsigma2(sdsigma2SEXP);
    Rcpp::traits::input_parameter< double >::type sdbeta(sdbetaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H(HSEXP);
    Rcpp::traits::input_parameter< double >::type acceptratio(acceptratioSEXP);
    Rcpp::traits::input_parameter< String >::type corr_fun(corr_funSEXP);
    Rcpp::traits::input_parameter< double >::type kappa_matern(kappa_maternSEXP);
    rcpp_result_gen = Rcpp::wrap(WrapSpRcpp_nugget(ad_start, ad_end, ad_esp, burnin, thin, iter_1, iter_2, n_j, prior_alpha, prior_rho, prior_sigma2, prior_beta, sdrho, sdsigma2, sdbeta, alpha, rho, sigma2, beta, k, x, H, acceptratio, corr_fun, kappa_matern));
    return rcpp_result_gen;
END_RCPP
}
// WrapSpRcpp
List WrapSpRcpp(int ad_start, int ad_end, double ad_esp, int burnin, int thin, int iter_1, int iter_2, int n_j, NumericVector prior_alpha, NumericVector prior_rho, NumericVector prior_sigma2, double sdrho, double sdsigma2, double alpha, double rho, double sigma2, IntegerVector k, NumericVector x, arma::mat H, double acceptratio, String corr_fun, double kappa_matern);
RcppExport SEXP _CircSpaceTime_WrapSpRcpp(SEXP ad_startSEXP, SEXP ad_endSEXP, SEXP ad_espSEXP, SEXP burninSEXP, SEXP thinSEXP, SEXP iter_1SEXP, SEXP iter_2SEXP, SEXP n_jSEXP, SEXP prior_alphaSEXP, SEXP prior_rhoSEXP, SEXP prior_sigma2SEXP, SEXP sdrhoSEXP, SEXP sdsigma2SEXP, SEXP alphaSEXP, SEXP rhoSEXP, SEXP sigma2SEXP, SEXP kSEXP, SEXP xSEXP, SEXP HSEXP, SEXP acceptratioSEXP, SEXP corr_funSEXP, SEXP kappa_maternSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ad_start(ad_startSEXP);
    Rcpp::traits::input_parameter< int >::type ad_end(ad_endSEXP);
    Rcpp::traits::input_parameter< double >::type ad_esp(ad_espSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< int >::type iter_1(iter_1SEXP);
    Rcpp::traits::input_parameter< int >::type iter_2(iter_2SEXP);
    Rcpp::traits::input_parameter< int >::type n_j(n_jSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_alpha(prior_alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_rho(prior_rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type prior_sigma2(prior_sigma2SEXP);
    Rcpp::traits::input_parameter< double >::type sdrho(sdrhoSEXP);
    Rcpp::traits::input_parameter< double >::type sdsigma2(sdsigma2SEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H(HSEXP);
    Rcpp::traits::input_parameter< double >::type acceptratio(acceptratioSEXP);
    Rcpp::traits::input_parameter< String >::type corr_fun(corr_funSEXP);
    Rcpp::traits::input_parameter< double >::type kappa_matern(kappa_maternSEXP);
    rcpp_result_gen = Rcpp::wrap(WrapSpRcpp(ad_start, ad_end, ad_esp, burnin, thin, iter_1, iter_2, n_j, prior_alpha, prior_rho, prior_sigma2, sdrho, sdsigma2, alpha, rho, sigma2, k, x, H, acceptratio, corr_fun, kappa_matern));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CircSpaceTime_ProjKrigCpp", (DL_FUNC) &_CircSpaceTime_ProjKrigCpp, 12},
    {"_CircSpaceTime_ProjSpRcpp", (DL_FUNC) &_CircSpaceTime_ProjSpRcpp, 28},
    {"_CircSpaceTime_WrapKrigCpp_nugget", (DL_FUNC) &_CircSpaceTime_WrapKrigCpp_nugget, 12},
    {"_CircSpaceTime_WrapKrigCpp", (DL_FUNC) &_CircSpaceTime_WrapKrigCpp, 11},
    {"_CircSpaceTime_WrapSpRcpp_nugget", (DL_FUNC) &_CircSpaceTime_WrapSpRcpp_nugget, 25},
    {"_CircSpaceTime_WrapSpRcpp", (DL_FUNC) &_CircSpaceTime_WrapSpRcpp, 22},
    {NULL, NULL, 0}
};

RcppExport void R_init_CircSpaceTime(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
