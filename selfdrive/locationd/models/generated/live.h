#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_5149488595897526995);
void live_err_fun(double *nom_x, double *delta_x, double *out_1198885948223268756);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_1497113232290045084);
void live_H_mod_fun(double *state, double *out_5849293530480098624);
void live_f_fun(double *state, double dt, double *out_8958213091727944316);
void live_F_fun(double *state, double dt, double *out_2014796351766347825);
void live_h_4(double *state, double *unused, double *out_6201829420627190586);
void live_H_4(double *state, double *unused, double *out_8145703552784536043);
void live_h_9(double *state, double *unused, double *out_1472913930143125460);
void live_H_9(double *state, double *unused, double *out_3013821585660568103);
void live_h_10(double *state, double *unused, double *out_7328193543471616144);
void live_H_10(double *state, double *unused, double *out_326247376725583006);
void live_h_12(double *state, double *unused, double *out_6949758747327922299);
void live_H_12(double *state, double *unused, double *out_1764445175741803047);
void live_h_31(double *state, double *unused, double *out_8794014767340450518);
void live_H_31(double *state, double *unused, double *out_4510008208066816756);
void live_h_32(double *state, double *unused, double *out_859849087760270906);
void live_H_32(double *state, double *unused, double *out_4180860590278939671);
void live_h_13(double *state, double *unused, double *out_5586522496808834253);
void live_H_13(double *state, double *unused, double *out_9049526193617675546);
void live_h_14(double *state, double *unused, double *out_1472913930143125460);
void live_H_14(double *state, double *unused, double *out_3013821585660568103);
void live_h_33(double *state, double *unused, double *out_6585479481354388742);
void live_H_33(double *state, double *unused, double *out_7660565212705674360);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}