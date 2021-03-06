/*
 *
 * Synaptics Register Mapped Interface (RMI4) - RMI Bus Module Header.
 * Copyright (C) 2007 - 2010, Synaptics Incorporated
 *
 */
/*
 *
 * This file is licensed under the GPL2 license.
 *
 *#############################################################################
 * GPL
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 *#############################################################################
 */

#if !defined(_RMI_BUS_H)
#define _RMI_BUS_H

#include "rmi_sensor.h"

int rmi_bus_register_sensor_driver(struct rmi_sensor_driver *sensor_driver);
void rmi_bus_unregister_sensor_driver(struct rmi_sensor_driver *sensor_driver);

#endif
