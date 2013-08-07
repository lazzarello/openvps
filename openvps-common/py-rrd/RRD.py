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

# $Id: RRD.py,v 1.3 2005/02/11 22:24:19 grisha Exp $

from types import ListType, TupleType

import _RRD

def _call(name, args):

    if type(args[0]) in (ListType, TupleType):
        args = args[0]
    args = [name]+list(args)

    return _RRD.call(args)

def create(*args):
    return _call('create', args)

def update(*args):
    return _call('update', args)

def restore(*args):
    return _call('restore', args)

def dump(*args):
    return _call('dump', args)

def tune(*args):
    return _call('tune', args)

def last(*args):
    return _call('last', args)

def resize(*args):
    return _call('resize', args)

def fetch(*args):
    return _call('fetch', args)

def graph(*args):
    return _call('graph', args)
