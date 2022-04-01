/****************************************************************************
 * boards/arm/stm32/common/include/board_hall3ph.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __BOARD_HALL3PH_H
#define __BOARD_HALL3PH_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

/****************************************************************************
 * Public Data
 ****************************************************************************/

#ifdef __cplusplus
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

/****************************************************************************
 * Name: board_hall3ph_initialize
 *
 * Description:
 *   Initialize the 3-phase Hall effect sensor driver for the given timer
 *
 * Input Parameters:
 *   devno - The device number, used to build the device path as /dev/hallN
 *   pha   - phase A Hall effect sensor pin configuration
 *   phb   - phase B Hall effect sensor pin configuration
 *   phc   - phase C Hall effect sensor pin configuration
 *
 ****************************************************************************/

int board_hall3ph_initialize(int devno, int pha, int phb, int phc);

#undef EXTERN
#ifdef __cplusplus
}
#endif

#endif // __BOARD_HALL3PH_H
