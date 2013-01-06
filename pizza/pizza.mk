##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=pizza
ConfigurationName      :=Debug
WorkspacePath          := "/home/naresh/codechef"
ProjectPath            := "/home/naresh/codechef/pizza"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=naresh
Date                   :=Sunday 09 December 2012
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
ObjectsFileList        :="/home/naresh/codechef/pizza/pizza.txt"
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
Objects=$(IntermediateDirectory)/pizza$(ObjectSuffix) 

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
$(IntermediateDirectory)/pizza$(ObjectSuffix): pizza.cpp $(IntermediateDirectory)/pizza$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/naresh/codechef/pizza/pizza.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/pizza$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/pizza$(DependSuffix): pizza.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/pizza$(ObjectSuffix) -MF$(IntermediateDirectory)/pizza$(DependSuffix) -MM "/home/naresh/codechef/pizza/pizza.cpp"

$(IntermediateDirectory)/pizza$(PreprocessSuffix): pizza.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/pizza$(PreprocessSuffix) "/home/naresh/codechef/pizza/pizza.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/pizza$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/pizza$(DependSuffix)
	$(RM) $(IntermediateDirectory)/pizza$(PreprocessSuffix)
	$(RM) $(OutputFile)
	$(RM) "/home/naresh/codechef/.build-debug/pizza"


