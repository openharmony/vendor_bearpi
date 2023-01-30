/*
 * Copyright (c) 2020-2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PRODUCT_ACELITE_CONFIG_H
#define PRODUCT_ACELITE_CONFIG_H

/**
 * Compile all test entry for hmf
 */
#define FEATURE_TEST_IMPLEMENTATION 1

/**
 * use hi log interface to trace out
 */
#define FEATURE_ACELITE_HI_LOG_PRINTF 1

/**
 * append no blank color to rootview for easy using, delete this after the mouse showing is optimized
 */
#define FEATURE_ROOTVIEW_CUSTOM_BACKGROUND_COLOR 1

/**
 * js system capability switch
 */
#define FEATURE_ACELITE_SYSTEM_CAPABILITY 1

/**
 * js profiler switch
 */
#define FEATURE_ACELITE_JS_PROFILER 1

/**
 * support audio API for JS
 */
#define FEATURE_MODULE_AUDIO 0

/**
 * switch for cipher module
 */
#define ENABLE_MODULE_CIPHER 1

/**
 * support storage and file API for JS
 */
#define FEATURE_MODULE_STORAGE 1

/**
 * support battery API for JS
 */
#define FEATURE_MODULE_BATTERY 1

/**
 * support device API for JS
 */
#define FEATURE_MODULE_DEVICE 1
/**
 * timer module
 */
#define FEATURE_TIMER_MODULE 1

/**
 * date time module
 */
#define FEATURE_DATE_FORMAT 1

#define FEATURE_API_VERSION 1

/**
 * support lite ace dfx module
 */
#define FEATURE_ACELITE_DFX_MODULE 1

#define FEATURE_ACELITE_LITE_DFX_MODULE 1

/**
 * enable Canvas component Feature API on ipcamera real devices
 */
#define FEATURE_COMPONENT_CANVAS 1

#define FEATURE_LOCALIZATION_MODULE 1

#define FEATURE_COMPONENT_CAMERA 0

#define FEATURE_COMPONENT_QRCODE 1

#define FEATURE_COMPONENT_VIDEO 0

#define FEATURE_MODULE_DIALOG 1

/**
 * support intl module
 */
#define FEATURE_INTL_MODULE 1

/**
 * support number format module
 */
#define FEATURE_NUMBER_FORMAT 1

#define FEATURE_UPDATE_VIDEO_PROGRESS_ASYNC 1

#define DEFAULT_PROFILER_MSG_PATH "/storage/user/data/"

#define PROFILER_ENABLE_FLAG_FILE "/storage/user/data/profiler_enable"

#define RUNTIME_MODE_FILE_PATH "/storage/user/data/js_snapshot_enable"

#define FEATURE_SUPPORT_HTTP 1

#endif // PRODUCT_ACELITE_CONFIG_H
