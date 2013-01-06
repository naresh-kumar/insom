##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=primejan13
ConfigurationName      :=Debug
WorkspacePath          := "/home/naresh/codechef"
ProjectPath            := "/home/naresh/codechef/primejan13"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=naresh
Date                   :=Sunday 06 January 2013
CodeLitePath           :="/home/naresh/.codelite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="/home/naresh/codechef/primejan13/primejan13.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects=$(IntermediateDirectory)/hackjan13$(ObjectSuffix) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects) > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/hackjan13$(ObjectSuffix): hackjan13.cpp $(IntermediateDirectory)/hackjan13$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/naresh/codechef/primejan13/hackjan13.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hackjan13$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/hackjan13$(DependSuffix): hackjan13.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/hackjan13$(ObjectSuffix) -MF$(IntermediateDirectory)/hackjan13$(DependSuffix) -MM "/home/naresh/codechef/primejan13/hackjan13.cpp"

$(IntermediateDirectory)/hackjan13$(PreprocessSuffix): hackjan13.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/hackjan13$(PreprocessSuffix) "/home/naresh/codechef/primejan13/hackjan13.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/hackjan13$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/hackjan13$(DependSuffix)
	$(RM) $(IntermediateDirectory)/hackjan13$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) "/home/naresh/codechef/.build-debug/primejan13"


