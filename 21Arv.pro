TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        bank.cpp \
        baseplayer.cpp \
        bundleofcards.cpp \
        card.cpp \
        cardhand.cpp \
        deck.cpp \
        main.cpp \
        player.cpp

HEADERS += \
	bank.h \
	baseplayer.h \
	bundleofcards.h \
	card.h \
	cardhand.h \
	deck.h \
	player.h
