

# Nmake macros for building Windows 32-Bit apps
!include <win32.mak>

!if ("$(TARGETOS)" == "WINNT") && ("$(CPU)" == "IA64") 

!message Sorry, this is not supported on the IA64 platforms.

!else

PROJ = FaxJobOperationsCPP

all: $(OUTDIR) $(OUTDIR)\$(PROJ).exe 

!message $(OUTDIR)
$(OUTDIR) :
    if not exist "$(OUTDIR)/$(NULL)" mkdir $(OUTDIR)

# Define project specific macros
PROJ_OBJS  = $(OUTDIR)\FaxJobOperations.obj 

INCLUDE  = $(DXSDKROOT)\Include;$(INCLUDE)

$(PROJ_OBJS)  : FaxJobOperations.cpp FaxJobOperations.h
   $(cc) $(cdebug) $(cflags) /Od /D "_CONSOLE" /D "_UNICODE" /D "UNICODE" /Gm /EHsc /RTC1 /c /Wp64 /TP  FaxJobOperations.cpp $(cvarsdll) /Fo"$(OUTDIR)\\" /Fd"$(OUTDIR)\\" 
	
INCLUDE  = $(DXSDKROOT)\Include;$(INCLUDE)

EXTRA_LIBS = $(STRMBASE) kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib

!IFDEF NODEBUG
DEBUG=
!ELSE
DEBUG=/DEBUG /PDB:$(OUTDIR)\FaxJobOperationsCPP.pdb
!ENDIF

# Build rule for EXE
$(OUTDIR)\$(PROJ).EXE: $(BASE_OBJS) $(PROJ_OBJS)
    $(link) /OUT:$(OUTDIR)\FaxJobOperationsCPP.exe /INCREMENTAL $(PROJ_OBJS) $(DEBUG)  /SUBSYSTEM:CONSOLE /MACHINE:$(CPU) $(EXTRA_LIBS) 
# embedd the manifest
    if exist $@.manifest mt.exe -manifest $@.manifest -outputresource:$@;1

# Rules for cleaning out old files
clean:
        $(CLEANUP)
!endif
