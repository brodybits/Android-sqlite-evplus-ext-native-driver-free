
all: ndkbuild

init:
	git submodule update --init

regen:
	java -cp gluegentools/antlr.jar:gluegentools/gluegen.jar com.jogamp.gluegen.GlueGen -I. -Ecom.jogamp.gluegen.JavaEmitter -CEVCoreNativeDriver.cfg native/sqlc.h
	sed -i.orig 's/^import/\/\/import/' java/io/sqlc/EVCoreNativeDriver.java

ndkbuild:
	rm -rf lib libs *.jar
	ndk-build
	cp -r libs lib
	jar cf evcore-native-driver.jar lib

clean:
	rm -rf java/io/sqlc/*.orig obj lib libs *.jar *.zip *.jar
