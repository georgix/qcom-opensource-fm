/*
 * Copyright (c) 2014, The Linux Foundation. All rights reserved.

 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *        * Redistributions of source code must retain the above copyright
 *            notice, this list of conditions and the following disclaimer.
 *        * Redistributions in binary form must reproduce the above copyright
 *            notice, this list of conditions and the following disclaimer in the
 *            documentation and/or other materials provided with the distribution.
 *        * Neither the name of The Linux Foundation nor
 *            the names of its contributors may be used to endorse or promote
 *            products derived from this software without specific prior written
 *            permission.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NON-INFRINGEMENT ARE DISCLAIMED.    IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __FM_CONST_H__
#define __FM_CONST_H__


typedef  unsigned int UINT;
typedef  unsigned long ULINT;

//return related
const int IOCTL_SUCC = 0;
const int FM_SUCCESS = 0;
const int FM_FAILURE = -1;
const int PROP_SET_SUCC = 0;

#define TUNE_MULT  16
const UINT CAL_DATA_SIZE = 23;
#define STD_BUF_SIZE  256

const char *const FM_PERFORMANCE_PARAMS = "/etc/fm/fm_srch_af_th.conf";
const char *const CALIB_DATA_NAME = "/data/app/Riva_fm_cal";

#define V4L2_CTRL_CLASS_USER  0x00980000
#define V4L2_CID_BASE  (V4L2_CTRL_CLASS_USER | 0x900)
#define V4L2_CID_AUDIO_MUTE   (V4L2_CID_BASE + 9)
const UINT SEARCH_DWELL_TIME = 2;
const UINT SEEK_DWELL_TIME = 0;

enum FM_AUDIO_PATH
{
    AUDIO_DIGITAL_PATH,
    AUDIO_ANALOG_PATH,
};

enum FM_DEVICE
{
    FM_DEV_NONE,
    FM_RX,
    FM_TX,
};

enum BUFF_INDEXES
{
    STATION_LIST_IND,
    EVENT_IND,
    RT_IND,
    PS_IND,
    AF_LIST_IND = PS_IND + 2,
    RT_PLUS_IND = 11,
    ERT_IND,
};

enum SEARCH_MODE
{
    SEEK_MODE,
    SCAN_MODE,
};

enum SEARCH_DIR
{
    SEARCH_DOWN,
    SEARCH_UP,
};

enum AUDIO_MODE
{
    MONO,
    STEREO,
};

//V4L2 CONTROLS FOR FM DRIVER
enum FM_V4L2_PRV_CONTROLS
{
    V4L2_CID_PRV_BASE = 0x8000000,
    V4L2_CID_PRV_SRCHMODE,
    V4L2_CID_PRV_SCANDWELL,
    V4L2_CID_PRV_SRCHON,
    V4L2_CID_PRV_STATE,
    V4L2_CID_PRV_TRANSMIT_MODE,
    V4L2_CID_PRV_RDSGROUP_MASK,
    V4L2_CID_PRV_REGION,
    V4L2_CID_PRV_SIGNAL_TH,
    V4L2_CID_PRV_SRCH_PTY,
    V4L2_CID_PRV_SRCH_PI,
    V4L2_CID_PRV_SRCH_CNT,
    V4L2_CID_PRV_EMPHASIS,
    V4L2_CID_PRV_RDS_STD,
    V4L2_CID_PRV_CHAN_SPACING,
    V4L2_CID_PRV_RDSON,
    V4L2_CID_PRV_RDSGROUP_PROC,
    V4L2_CID_PRV_LP_MODE,
    V4L2_CID_PRV_INTDET = V4L2_CID_PRV_BASE + 25,
    V4L2_CID_PRV_AF_JUMP = V4L2_CID_PRV_BASE + 27,
    V4L2_CID_PRV_SOFT_MUTE = V4L2_CID_PRV_BASE + 30,
    V4L2_CID_PRV_AUDIO_PATH = V4L2_CID_PRV_BASE + 41,
    V4L2_CID_PRV_SINR = V4L2_CID_PRV_BASE + 44,
    V4L2_CID_PRV_ON_CHANNEL_THRESHOLD = V4L2_CID_PRV_BASE + 0x2D,
    V4L2_CID_PRV_OFF_CHANNEL_THRESHOLD,
    V4L2_CID_PRV_SINR_THRESHOLD,
    V4L2_CID_PRV_SINR_SAMPLES,
    V4L2_CID_PRV_SPUR_FREQ,
    V4L2_CID_PRV_SPUR_FREQ_RMSSI,
    V4L2_CID_PRV_SPUR_SELECTION,
    V4L2_CID_PRV_AF_RMSSI_TH = V4L2_CID_PRV_BASE + 0x36,
    V4L2_CID_PRV_AF_RMSSI_SAMPLES,
    V4L2_CID_PRV_GOOD_CH_RMSSI_TH,
    V4L2_CID_PRV_SRCHALGOTYPE,
    V4L2_CID_PRV_CF0TH12,
    V4L2_CID_PRV_SINRFIRSTSTAGE,
    V4L2_CID_PRV_RMSSIFIRSTSTAGE,
    V4L2_CID_PRV_SOFT_MUTE_TH,
    V4L2_CID_PRV_IRIS_RDSGRP_RT,
    V4L2_CID_PRV_IRIS_RDSGRP_PS_SIMPLE,
    V4L2_CID_PRV_IRIS_RDSGRP_AFLIST,
    V4L2_CID_PRV_IRIS_RDSGRP_ERT,
    V4L2_CID_PRV_IRIS_RDSGRP_RT_PLUS,
    V4L2_CID_PRV_IRIS_RDSGRP_3A,

    V4L2_CID_PRV_IRIS_READ_DEFAULT = V4L2_CTRL_CLASS_USER + 0x928,
    V4L2_CID_PRV_IRIS_WRITE_DEFAULT,
    V4L2_CID_PRV_SET_CALIBRATION = V4L2_CTRL_CLASS_USER + 0x92A,
};
#endif
