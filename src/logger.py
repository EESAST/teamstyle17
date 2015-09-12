#! /usr/bin/env python3
# -*- coding: utf-8 -*-

import action

class Logger:
    def __init__(self, repfile, mode):
        self.file_path = repfile
        self.mode = mode
    def query_stage(self, timestamp):
        pass
    def add_action(self, obj: action.Action):
        pass
