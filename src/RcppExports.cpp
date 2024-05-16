// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/ranger.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rangerCpp
Rcpp::List rangerCpp(uint treetype, Rcpp::NumericMatrix& input_x, Rcpp::NumericMatrix& input_y, std::vector<std::string> variable_names, uint mtry, uint num_trees, bool verbose, uint seed, uint num_threads, bool write_forest, uint importance_mode_r, std::vector<uint>& min_node_size, std::vector<uint>& min_bucket, std::vector<std::vector<double>>& split_select_weights, bool use_split_select_weights, std::vector<std::string>& always_split_variable_names, bool use_always_split_variable_names, bool prediction_mode, Rcpp::List loaded_forest, Rcpp::RawMatrix snp_data, bool sample_with_replacement, bool probability, std::vector<std::string>& unordered_variable_names, bool use_unordered_variable_names, bool save_memory, uint splitrule_r, std::vector<double>& case_weights, bool use_case_weights, std::vector<double>& class_weights, bool predict_all, bool keep_inbag, std::vector<double>& sample_fraction, double alpha, double minprop, bool holdout, uint prediction_type_r, uint num_random_splits, Eigen::SparseMatrix<double>& sparse_x, bool use_sparse_data, bool order_snps, bool oob_error, uint max_depth, std::vector<std::vector<size_t>>& inbag, bool use_inbag, std::vector<double>& regularization_factor, bool use_regularization_factor, bool regularization_usedepth, bool node_stats, std::vector<double>& time_interest, bool use_time_interest);
RcppExport SEXP _ranger_rangerCpp(SEXP treetypeSEXP, SEXP input_xSEXP, SEXP input_ySEXP, SEXP variable_namesSEXP, SEXP mtrySEXP, SEXP num_treesSEXP, SEXP verboseSEXP, SEXP seedSEXP, SEXP num_threadsSEXP, SEXP write_forestSEXP, SEXP importance_mode_rSEXP, SEXP min_node_sizeSEXP, SEXP min_bucketSEXP, SEXP split_select_weightsSEXP, SEXP use_split_select_weightsSEXP, SEXP always_split_variable_namesSEXP, SEXP use_always_split_variable_namesSEXP, SEXP prediction_modeSEXP, SEXP loaded_forestSEXP, SEXP snp_dataSEXP, SEXP sample_with_replacementSEXP, SEXP probabilitySEXP, SEXP unordered_variable_namesSEXP, SEXP use_unordered_variable_namesSEXP, SEXP save_memorySEXP, SEXP splitrule_rSEXP, SEXP case_weightsSEXP, SEXP use_case_weightsSEXP, SEXP class_weightsSEXP, SEXP predict_allSEXP, SEXP keep_inbagSEXP, SEXP sample_fractionSEXP, SEXP alphaSEXP, SEXP minpropSEXP, SEXP holdoutSEXP, SEXP prediction_type_rSEXP, SEXP num_random_splitsSEXP, SEXP sparse_xSEXP, SEXP use_sparse_dataSEXP, SEXP order_snpsSEXP, SEXP oob_errorSEXP, SEXP max_depthSEXP, SEXP inbagSEXP, SEXP use_inbagSEXP, SEXP regularization_factorSEXP, SEXP use_regularization_factorSEXP, SEXP regularization_usedepthSEXP, SEXP node_statsSEXP, SEXP time_interestSEXP, SEXP use_time_interestSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< uint >::type treetype(treetypeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type input_x(input_xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type input_y(input_ySEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type variable_names(variable_namesSEXP);
    Rcpp::traits::input_parameter< uint >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< uint >::type num_trees(num_treesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< uint >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< uint >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type write_forest(write_forestSEXP);
    Rcpp::traits::input_parameter< uint >::type importance_mode_r(importance_mode_rSEXP);
    Rcpp::traits::input_parameter< std::vector<uint>& >::type min_node_size(min_node_sizeSEXP);
    Rcpp::traits::input_parameter< std::vector<uint>& >::type min_bucket(min_bucketSEXP);
    Rcpp::traits::input_parameter< std::vector<std::vector<double>>& >::type split_select_weights(split_select_weightsSEXP);
    Rcpp::traits::input_parameter< bool >::type use_split_select_weights(use_split_select_weightsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type always_split_variable_names(always_split_variable_namesSEXP);
    Rcpp::traits::input_parameter< bool >::type use_always_split_variable_names(use_always_split_variable_namesSEXP);
    Rcpp::traits::input_parameter< bool >::type prediction_mode(prediction_modeSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type loaded_forest(loaded_forestSEXP);
    Rcpp::traits::input_parameter< Rcpp::RawMatrix >::type snp_data(snp_dataSEXP);
    Rcpp::traits::input_parameter< bool >::type sample_with_replacement(sample_with_replacementSEXP);
    Rcpp::traits::input_parameter< bool >::type probability(probabilitySEXP);
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type unordered_variable_names(unordered_variable_namesSEXP);
    Rcpp::traits::input_parameter< bool >::type use_unordered_variable_names(use_unordered_variable_namesSEXP);
    Rcpp::traits::input_parameter< bool >::type save_memory(save_memorySEXP);
    Rcpp::traits::input_parameter< uint >::type splitrule_r(splitrule_rSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type case_weights(case_weightsSEXP);
    Rcpp::traits::input_parameter< bool >::type use_case_weights(use_case_weightsSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type class_weights(class_weightsSEXP);
    Rcpp::traits::input_parameter< bool >::type predict_all(predict_allSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_inbag(keep_inbagSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type sample_fraction(sample_fractionSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type minprop(minpropSEXP);
    Rcpp::traits::input_parameter< bool >::type holdout(holdoutSEXP);
    Rcpp::traits::input_parameter< uint >::type prediction_type_r(prediction_type_rSEXP);
    Rcpp::traits::input_parameter< uint >::type num_random_splits(num_random_splitsSEXP);
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double>& >::type sparse_x(sparse_xSEXP);
    Rcpp::traits::input_parameter< bool >::type use_sparse_data(use_sparse_dataSEXP);
    Rcpp::traits::input_parameter< bool >::type order_snps(order_snpsSEXP);
    Rcpp::traits::input_parameter< bool >::type oob_error(oob_errorSEXP);
    Rcpp::traits::input_parameter< uint >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< std::vector<std::vector<size_t>>& >::type inbag(inbagSEXP);
    Rcpp::traits::input_parameter< bool >::type use_inbag(use_inbagSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type regularization_factor(regularization_factorSEXP);
    Rcpp::traits::input_parameter< bool >::type use_regularization_factor(use_regularization_factorSEXP);
    Rcpp::traits::input_parameter< bool >::type regularization_usedepth(regularization_usedepthSEXP);
    Rcpp::traits::input_parameter< bool >::type node_stats(node_statsSEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type time_interest(time_interestSEXP);
    Rcpp::traits::input_parameter< bool >::type use_time_interest(use_time_interestSEXP);
    rcpp_result_gen = Rcpp::wrap(rangerCpp(treetype, input_x, input_y, variable_names, mtry, num_trees, verbose, seed, num_threads, write_forest, importance_mode_r, min_node_size, min_bucket, split_select_weights, use_split_select_weights, always_split_variable_names, use_always_split_variable_names, prediction_mode, loaded_forest, snp_data, sample_with_replacement, probability, unordered_variable_names, use_unordered_variable_names, save_memory, splitrule_r, case_weights, use_case_weights, class_weights, predict_all, keep_inbag, sample_fraction, alpha, minprop, holdout, prediction_type_r, num_random_splits, sparse_x, use_sparse_data, order_snps, oob_error, max_depth, inbag, use_inbag, regularization_factor, use_regularization_factor, regularization_usedepth, node_stats, time_interest, use_time_interest));
    return rcpp_result_gen;
END_RCPP
}
// numSmaller
Rcpp::IntegerVector numSmaller(Rcpp::NumericVector values, Rcpp::NumericVector reference);
RcppExport SEXP _ranger_numSmaller(SEXP valuesSEXP, SEXP referenceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type reference(referenceSEXP);
    rcpp_result_gen = Rcpp::wrap(numSmaller(values, reference));
    return rcpp_result_gen;
END_RCPP
}
// randomObsNode
Rcpp::NumericMatrix randomObsNode(Rcpp::IntegerMatrix groups, Rcpp::NumericVector y, Rcpp::IntegerMatrix inbag_counts);
RcppExport SEXP _ranger_randomObsNode(SEXP groupsSEXP, SEXP ySEXP, SEXP inbag_countsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type inbag_counts(inbag_countsSEXP);
    rcpp_result_gen = Rcpp::wrap(randomObsNode(groups, y, inbag_counts));
    return rcpp_result_gen;
END_RCPP
}
// hshrink_regr
void hshrink_regr(Rcpp::IntegerVector& left_children, Rcpp::IntegerVector& right_children, Rcpp::IntegerVector& num_samples_nodes, Rcpp::NumericVector& node_predictions, Rcpp::NumericVector& split_values, double lambda, size_t nodeID, size_t parent_n, double parent_pred, double cum_sum);
RcppExport SEXP _ranger_hshrink_regr(SEXP left_childrenSEXP, SEXP right_childrenSEXP, SEXP num_samples_nodesSEXP, SEXP node_predictionsSEXP, SEXP split_valuesSEXP, SEXP lambdaSEXP, SEXP nodeIDSEXP, SEXP parent_nSEXP, SEXP parent_predSEXP, SEXP cum_sumSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type left_children(left_childrenSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type right_children(right_childrenSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type num_samples_nodes(num_samples_nodesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type node_predictions(node_predictionsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type split_values(split_valuesSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< size_t >::type nodeID(nodeIDSEXP);
    Rcpp::traits::input_parameter< size_t >::type parent_n(parent_nSEXP);
    Rcpp::traits::input_parameter< double >::type parent_pred(parent_predSEXP);
    Rcpp::traits::input_parameter< double >::type cum_sum(cum_sumSEXP);
    hshrink_regr(left_children, right_children, num_samples_nodes, node_predictions, split_values, lambda, nodeID, parent_n, parent_pred, cum_sum);
    return R_NilValue;
END_RCPP
}
// hshrink_prob
void hshrink_prob(Rcpp::IntegerVector& left_children, Rcpp::IntegerVector& right_children, Rcpp::IntegerVector& num_samples_nodes, Rcpp::NumericMatrix& class_freq, double lambda, size_t nodeID, size_t parent_n, Rcpp::NumericVector parent_pred, Rcpp::NumericVector cum_sum);
RcppExport SEXP _ranger_hshrink_prob(SEXP left_childrenSEXP, SEXP right_childrenSEXP, SEXP num_samples_nodesSEXP, SEXP class_freqSEXP, SEXP lambdaSEXP, SEXP nodeIDSEXP, SEXP parent_nSEXP, SEXP parent_predSEXP, SEXP cum_sumSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type left_children(left_childrenSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type right_children(right_childrenSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type num_samples_nodes(num_samples_nodesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type class_freq(class_freqSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< size_t >::type nodeID(nodeIDSEXP);
    Rcpp::traits::input_parameter< size_t >::type parent_n(parent_nSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type parent_pred(parent_predSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type cum_sum(cum_sumSEXP);
    hshrink_prob(left_children, right_children, num_samples_nodes, class_freq, lambda, nodeID, parent_n, parent_pred, cum_sum);
    return R_NilValue;
END_RCPP
}
// replace_class_counts
void replace_class_counts(Rcpp::List& class_counts_old, Rcpp::NumericMatrix& class_counts_new);
RcppExport SEXP _ranger_replace_class_counts(SEXP class_counts_oldSEXP, SEXP class_counts_newSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type class_counts_old(class_counts_oldSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix& >::type class_counts_new(class_counts_newSEXP);
    replace_class_counts(class_counts_old, class_counts_new);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ranger_rangerCpp", (DL_FUNC) &_ranger_rangerCpp, 50},
    {"_ranger_numSmaller", (DL_FUNC) &_ranger_numSmaller, 2},
    {"_ranger_randomObsNode", (DL_FUNC) &_ranger_randomObsNode, 3},
    {"_ranger_hshrink_regr", (DL_FUNC) &_ranger_hshrink_regr, 10},
    {"_ranger_hshrink_prob", (DL_FUNC) &_ranger_hshrink_prob, 9},
    {"_ranger_replace_class_counts", (DL_FUNC) &_ranger_replace_class_counts, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_ranger(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
