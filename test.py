#!/usr/bin/env python2.7

import urho
v = urho.Vector3()
c = urho.Context()
fs = urho.FileSystem(c)

from urho import StringHash as sh

import os
print (os.getcwd())

class App(urho.Application):
    #def __init__(self, name):
    #    Dog.__init__(self) # Without this, undefind behavior may occur if the C++ portions are referenced.
    def __init__(self,c):
        urho.Application.__init__(self,c)
    #    self.name = name
    #def bark(self):
    #    return "yap!"
    def Setup(self):
        print 'Setting up the applicaiton'
        
        self.engineParameters["WindowTitle"] = "PYrho3D"

        return

    def Start(self):
        print 'Starting up the applicaiton'
        fs = c.GetSubsystem('FileSystem')
        commandFile = fs.GetProgramDir() + "Data/CommandLine.txt"
        print commandFile
        # with open(commandFile) as f:
            # line = commandFile[0]
        scriptfile = 'Scripts/NinjaSnowWar.as'

        c.RegisterSubsystem(urho.Script(c))
        cache = c.GetSubsystem('ResourceCache')
        sf = cache.GetResource('ScriptFile',scriptfile)
        sf.Execute("void Start()")

a = App(c)
#help(a)

var = urho.Variant(u'/home/nathan/Desktop/testClang')
print(var)

print(fs.GetCurrentDir())
#a.engineParameters[urho.StringHash('ResourcePrefixPaths')] = var
#a.engineParameters["FullScreen"] = False
#a.engineParameters[urho.StringHash('FullScreen')] = False

a.engineParameters["WindowWidth"] = 500

c.GetSubsystem(sh('Input')).SetMouseVisible(True)

del fs
c.GetSubsystem(sh('Input')).SetMouseVisible(True)
a.Run()

#ep = a.engineParameters


