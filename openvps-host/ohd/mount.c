/*
 *
 * Copyright 2004 OpenHosting, Inc.
 *
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
 *
 * $Id: mount.c,v 1.1 2004/09/18 03:46:04 grisha Exp $
 * 
 */

#include "common.h"

int main(int argc, char *argv[]) {

    if (argc > 1) {
        if (!strcmp("--bind", argv[1])) {
            return run("MOUNT_BIND", argc, argv);
        }
    }

    execv("/usr/libexec/oh/mount", argv);

}
