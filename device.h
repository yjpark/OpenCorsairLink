/*
 * This file is part of OpenCorsairLink.
 * Copyright (C) 2017  Sean Nelson <audiohacked@gmail.com>

 * OpenCorsairLink is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * any later version.

 * OpenCorsairLink is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with OpenCorsairLink.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _DEVICE_H
#define _DEVICE_H

#include "options.h"

struct corsair_device_info {
	/** device info */
	char name[64];
	uint16_t vendor_id;
	uint16_t product_id;
	uint16_t device_id;

	/** device endpoints */
	uint8_t read_endpoint;
	uint8_t write_endpoint;

	/** device control info */
	struct corsair_device_driver *driver;
	uint8_t led_control_count; // used mostly with HID driver
	uint8_t fan_control_count; // used with HID driver
	uint8_t pump_index; // used with HID driver
};

extern struct corsair_device_info corsairlink_devices[];
extern size_t corsairlink_device_count;

#endif

