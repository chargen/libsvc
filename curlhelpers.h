/******************************************************************************
* Copyright (C) 2013 - 2014 Andreas Öman
*
* Permission is hereby granted, free of charge, to any person obtaining
* a copy of this software and associated documentation files (the
* "Software"), to deal in the Software without restriction, including
* without limitation the rights to use, copy, modify, merge, publish,
* distribute, sublicense, and/or sell copies of the Software, and to
* permit persons to whom the Software is furnished to do so, subject to
* the following conditions:
*
* The above copyright notice and this permission notice shall be
* included in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
******************************************************************************/


#pragma once

#include <curl/curl.h>

#include "htsmsg.h"

size_t libsvc_curl_waste_output(char *ptr, size_t size, size_t nmemb,
                                void *userdata);

curl_socket_t libsvc_curl_sock_fn(void *clientp,
                                  curlsocktype purpose,
                                  struct curl_sockaddr *a);


htsmsg_t *libsvc_http_json_get(const char *url, const char *auth,
                               char *errbuf, size_t errlen);

htsmsg_t *libsvc_http_json_post(const char *url, const char *auth,
                                char *errbuf, size_t errlen,
                                const void *payload, size_t payloadlen);
