/*
 * Copyright (c) 2018 Balabit
 * Copyright (c) 2018 Mehul Prajapati <mehulprajapati2802@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * As an additional exemption you are allowed to compile & link against the
 * OpenSSL libraries as published by the OpenSSL project. See the file
 * COPYING for details.
 *
 */

#ifndef LOGQUEUE_REDIS_H_INCLUDED
#define LOGQUEUE_REDIS_H_INCLUDED

#include "logmsg/logmsg.h"
#include "logqueue.h"

typedef struct _LogQueueRedis LogQueueRedis;

struct _LogQueueRedis
{
  LogQueue super;

  GQueue *qredis;
  GlobalConfig *cfg;
};

extern QueueType log_queue_redis_type;

LogQueue *log_queue_redis_init_instance(GlobalConfig *cfg, const gchar *persist_name);

#endif
