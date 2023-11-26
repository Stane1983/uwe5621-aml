/*
 * Copyright (C) 2015 Spreadtrum Communications Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MTTY_H
#define __MTTY_H
//#include <soc/sprd/wcn_bus.h>
#include <wcn_bus.h>

struct mtty_init_data {
    char *name;
};

enum mtty_state {
    MTTY_STATE_CLOSE,
    MTTY_STATE_OPEN
};

#define BT_ACL_TX_CHANNEL    2
#define BT_ACL_RX_CHANNEL    18
#define BT_CMD_TX_CHANNEL    0 //7
#define BT_EVENT_RX_CHANNEL  17
#define BT_SCO_TX_CHANNEL    3
#define BT_SCO_RX_CHANNEL    19

#define BT_TX_INOUT       1
#define BT_RX_INOUT       0
#define BT_TX_POOL_SIZE   64  // the max buffer is 64
#define BT_RX_POOL_SIZE   8
#define BT_SDIO_HEAD_LEN  0


#define HCI_PACKET_TYPE_COMMAND   1
#define HCI_PACKET_TYPE_ACL_DATA  2
#define HCI_PACKET_TYPE_SCO_DATA  3
#define HCI_PACKET_TYPE_EVENT     4

#define HCI_USB_WITH_TYPE TRUE

#endif
