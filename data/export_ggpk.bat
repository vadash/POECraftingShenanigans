cd "C:\projects\POECraftingShenanigans\data\ggpk"
del /q *.json
pypoe_exporter dat json DelveCraftingModifiers.json --files DelveCraftingModifiers.dat
pypoe_exporter dat json Mods.json --files Mods.dat
pypoe_exporter dat json ModType.json --files ModType.dat
pypoe_exporter dat json Stats.json --files Stats.dat
pypoe_exporter dat json Tags.json --files Tags.dat
pause