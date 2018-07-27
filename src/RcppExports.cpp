// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// split_every_nlines
List split_every_nlines(std::string name_in, std::string prefix_out, int every_nlines);
RcppExport SEXP _bigreadr_split_every_nlines(SEXP name_inSEXP, SEXP prefix_outSEXP, SEXP every_nlinesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type name_in(name_inSEXP);
    Rcpp::traits::input_parameter< std::string >::type prefix_out(prefix_outSEXP);
    Rcpp::traits::input_parameter< int >::type every_nlines(every_nlinesSEXP);
    rcpp_result_gen = Rcpp::wrap(split_every_nlines(name_in, prefix_out, every_nlines));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bigreadr_split_every_nlines", (DL_FUNC) &_bigreadr_split_every_nlines, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_bigreadr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
