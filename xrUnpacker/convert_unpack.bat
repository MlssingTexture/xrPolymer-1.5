::unpack db directory

mkdir .\unpacked
for %%f in (.\db\*.db*) do (
    converter.exe -unpack -xdb %%f -dir .\unpacked
)
for %%f in (.\db\levels\*.db*) do (
    converter.exe -unpack -xdb %%f -dir .\unpacked
)
for %%f in (.\db\mods\*.db*) do (
    converter.exe -unpack -xdb %%f -dir .\unpacked
)
for %%f in (.\db\updates\*.db*) do (
    converter.exe -unpack -xdb %%f -dir .\unpacked
)
pause
