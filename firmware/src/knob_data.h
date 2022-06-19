#pragma once

#include <Arduino.h>

struct KnobConfig {
    int32_t num_positions;          //  位置数量
    int32_t position;               //  起始位置
    float position_width_radians;   //  detent的步长，rad单位
    float detent_strength_unit;     //  detent强度
    float endstop_strength_unit;    //  TODO
    float snap_point;               //  TODO what is this
    char descriptor[50];
};

struct KnobState {
    int32_t current_position;
    float sub_position_unit;
    KnobConfig config;
};
