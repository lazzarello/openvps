#
# Copyright 2004 OpenHosting, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# $Id: setup.py,v 1.3 2005/03/01 04:12:29 grisha Exp $

from distutils.core import setup, Extension

VER = open('../../version.txt').read().strip()

import sys

setup(name='openvps-admin',
      version=VER,
      description='OpenVPS Admin Utilities',
      author='OpenHosting, Inc.',
      author_email='dev@openvps.org',
      url='http://www.openvps.org/',
      packages=['openvps.admin', 'openvps.www_admin'])


                          
