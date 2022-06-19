#pragma once

#include <Arduino.h>

struct KnobConfig {
    int32_t num_positions;          //  位置数量
    int32_t position;               //  位置,在传入config时候视为初始位置
    float position_width_radians;   //  detent的步长，rad单位
    float detent_strength_unit;     //  detent 力矩强度，在没有超过边界的时候
    float endstop_strength_unit;    //  超过调整边界的强度
    float snap_point;               //  切换detent的长度，单位为position_width_radians
                                    //  例如0,1开关中0.55,代表转动超过0.55个position_width_radians后，切换detent
                                    //  而其他情况下的1.1代表转过1.1个position_width_radians，可以自行体会一下，刚感受到snap后
                                    //  电机想要往回转
    char descriptor[50];
};

struct KnobState {
    int32_t current_position;
    float sub_position_unit;
    KnobConfig config;
};
