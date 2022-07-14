#pragma once

#define _____ KC_NO

#define LAYOUT( \
    k1_01, k1_02, k1_03, k1_04, k1_05, k1_06,                                          \
    k2_01, k2_02, k2_03, k2_04, k2_05, k2_06,                                          \
    k3_01, k3_02, k3_03, k3_04, k3_05, k3_06, k3_07,                                   \
    k4_01, k4_02, k4_03, k4_04, k4_05, k4_06,        k4_08,                            \
    k5_01, k5_02, k5_03, k5_04, k5_05, k5_06,               k5_09,                     \
    k6_01, k6_02, k6_03, k6_04, k6_05, k6_06,                      k6_10,              \
    k7_01, k7_02, k7_03, k7_04, k7_05, k7_06,                             k7_11,       \
           k8_02, k8_03, k8_04, k8_05, k8_06,                                    k8_12 \
  ) { \
    { k1_01, k1_02, k1_03, k1_04, k1_05, k1_06, _____, _____, _____, _____, _____, _____}, \
    { k2_01, k2_02, k2_03, k2_04, k2_05, k2_06, _____, _____, _____, _____, _____, _____}, \
    { k3_01, k3_02, k3_03, k3_04, k3_05, k3_06, k3_07, _____, _____, _____, _____, _____}, \
    { k4_01, k4_02, k4_03, k4_04, k4_05, k4_06, _____, k4_08, _____, _____, _____, _____}, \
    { k5_01, k5_02, k5_03, k5_04, k5_05, k5_06, _____, _____, k5_09, _____, _____, _____}, \
    { k6_01, k6_02, k6_03, k6_04, k6_05, k6_06, _____, _____, _____, k6_10, _____, _____}, \
    { k7_01, k7_02, k7_03, k7_04, k7_05, k7_06, _____, _____, _____, _____, k7_11, _____}, \
    { _____, k8_02, k8_03, k8_04, k8_05, k8_06, _____, _____, _____, _____, _____, k8_12}  \
}
