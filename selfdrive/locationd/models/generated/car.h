#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_7542987479538981570);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_4478975694505899794);
void car_H_mod_fun(double *state, double *out_3264684737080805346);
void car_f_fun(double *state, double dt, double *out_8700415478843666191);
void car_F_fun(double *state, double dt, double *out_1116521160750108651);
void car_h_25(double *state, double *unused, double *out_7678229176246204082);
void car_H_25(double *state, double *unused, double *out_7724289617647239289);
void car_h_24(double *state, double *unused, double *out_3776645665297441503);
void car_H_24(double *state, double *unused, double *out_5551640018641739723);
void car_h_30(double *state, double *unused, double *out_6291443390525155075);
void car_H_30(double *state, double *unused, double *out_3805764114570695572);
void car_h_26(double *state, double *unused, double *out_5688127505848677558);
void car_H_26(double *state, double *unused, double *out_3982786298773183065);
void car_h_27(double *state, double *unused, double *out_5806134899782054302);
void car_H_27(double *state, double *unused, double *out_5420187358703574308);
void car_h_29(double *state, double *unused, double *out_3437463763315704215);
void car_H_29(double *state, double *unused, double *out_8105182014818391403);
void car_h_28(double *state, double *unused, double *out_8242657092645868302);
void car_H_28(double *state, double *unused, double *out_5670454903399349526);
void car_h_31(double *state, double *unused, double *out_7820788907107862573);
void car_H_31(double *state, double *unused, double *out_7754935579524199717);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}