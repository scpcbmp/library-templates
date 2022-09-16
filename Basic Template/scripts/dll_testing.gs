public def OnScriptLoaded()
	print("Begin Script Load.")
	global bot = plugin_load("DllExportTest1.dll")
	print("Bot Loaded ID as: " + bot)
	plugin_call(bot, "_TestFunc@0", 0)
	print("Script Load finished.")
end