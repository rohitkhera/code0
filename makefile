
###################################################
# cc , ld flags and java defs
###################################################

CC=g++

#ARCH_FLAGS=-m32

CFLAGS=-g $(ARCH_FLAGS) $(INCLUDES) $(JNI_INCLUDES) $(JNI_INCLUDES_MD) $(DEBUG_FLAGS)  $(LOG_LEVEL_FLAGS)

#LD_VERBOSE=-v

LD_FLAGS=$(ARCH_FLAGS) $(DEBUG_FLAGS) $(LD_VERBOSE)

SO_FLAGS=-shared

# should be the same on gcc and LLVM
#RELOC_FLAGS=-fpic

INCLUDES=-I$./include

# on ubuntu, the following var should point to the dir that contains libcrypto.so.1.1
#LD_LIBRARY_PATH=/usr/local/lib:.

#SO_EXT=dylib

SO_EXT=so

############################################
# srcs, hdrs, obs and shared objs
############################################

CUR_MAIN=RemoveElement

SRC=StrCompress.C \
	WordCount.C \
	TwoSums.C \
	TwoSumsSorted.C \
	ReverseInt.C \
	PalindromeInt.C \
	LongestCommonPrefix.C \
	ValidParens.C \
	MergeSorted.C \
	RemoveDupsSorted.C \
	RemoveElement.C \
	StrStr.C

OBJ=StrCompress.o \
	WordCount.o \
	TwoSums.o \
	TwoSumsSorted.o \
	ReverseInt.o \
	PalindromeInt.o \
	LongestCommonPrefix.o \
	ValidParens.o \
	MergeSorted.o \
	RemoveDupsSorted.o \
	RemoveElement.o \
	StrStr.o


##############################################
# shlib targets, executable targets
##############################################

TARGET = run

all: 
	make $(TARGET)

$(TARGET): $(OBJ) 
	$(CC) *.o -o $(TARGET) 

# do not use default .c.o suffix rulex for FIPS statically linked exec
# since default suffixes use the RELOC position independent code flag


##############################################
# suffixes
##############################################

.c.o:
	$(CC) -c $(CFLAGS) $(RELOC_FLAGS) $<

.C.o:
	$(CC) -c $(CFLAGS) $(RELOC_FLAGS) $<



clean:
	@rm -rf *.o $(TARGET)




