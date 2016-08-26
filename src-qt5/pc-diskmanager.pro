#-------------------------------------------------
#
# Project created by QtCreator 2013-05-28T13:01:47
#
#-------------------------------------------------

QT       += core gui widgets network svg

CONFIG += qt warn_on

LIBS	+= -L../libpcbsd -L/usr/local/lib -lpcbsd-ui -lpcbsd-utils
INCLUDEPATH+= ../libpcbsd/utils ../libpcbsd/ui /usr/local/include

TARGET = pc-diskmanager
target.path = /usr/local/bin/

TEMPLATE = app
LANGUAGE	= C++


SOURCES += main.cpp\
        diskmanagerwindow.cpp \
    dialogpartition.cpp \
    dialogmount.cpp \
    dialognewpool.cpp \
    dialogname.cpp \
    dialogprop.cpp \
    dialogfscreate.cpp \
    dialogfsprop.cpp

HEADERS  += diskmanagerwindow.h \
    dialogpartition.h \
    dialogmount.h \
    dialognewpool.h \
    dialogname.h \
    dialogprop.h \
    dialogfscreate.h \
    dialogfsprop.h

FORMS    += diskmanagerwindow.ui \
    dialogpartition.ui \
    dialogmount.ui \
    dialognewpool.ui \
    dialogname.ui \
    dialogprop.ui \
    dialogfscreate.ui \
    dialogfsprop.ui

TRANSLATIONS =  i18n/diskmanager_af.ts \
                i18n/diskmanager_ar.ts \
                i18n/diskmanager_az.ts \
                i18n/diskmanager_bg.ts \
                i18n/diskmanager_bn.ts \
                i18n/diskmanager_bs.ts \
                i18n/diskmanager_ca.ts \
                i18n/diskmanager_cs.ts \
                i18n/diskmanager_cy.ts \
                i18n/diskmanager_da.ts \
                i18n/diskmanager_de.ts \
                i18n/diskmanager_el.ts \
                i18n/diskmanager_en_GB.ts \
                i18n/diskmanager_en_ZA.ts \
                i18n/diskmanager_es.ts \
                i18n/diskmanager_et.ts \
                i18n/diskmanager_eu.ts \
                i18n/diskmanager_fa.ts \
                i18n/diskmanager_fi.ts \
                i18n/diskmanager_fr.ts \
                i18n/diskmanager_fr_CA.ts \
                i18n/diskmanager_fur.ts \
                i18n/diskmanager_gl.ts \
                i18n/diskmanager_he.ts \
                i18n/diskmanager_hi.ts \
                i18n/diskmanager_hr.ts \
                i18n/diskmanager_hu.ts \
                i18n/diskmanager_id.ts \
                i18n/diskmanager_is.ts \
                i18n/diskmanager_it.ts \
                i18n/diskmanager_ja.ts \
                i18n/diskmanager_ka.ts \
                i18n/diskmanager_ko.ts \
                i18n/diskmanager_lt.ts \
                i18n/diskmanager_lv.ts \
                i18n/diskmanager_mk.ts \
                i18n/diskmanager_mn.ts \
                i18n/diskmanager_ms.ts \
                i18n/diskmanager_mt.ts \
                i18n/diskmanager_nb.ts \
                i18n/diskmanager_ne.ts \
                i18n/diskmanager_nl.ts \
                i18n/diskmanager_pa.ts \
                i18n/diskmanager_pl.ts \
                i18n/diskmanager_pt.ts \
                i18n/diskmanager_pt_BR.ts \
                i18n/diskmanager_ro.ts \
                i18n/diskmanager_ru.ts \
                i18n/diskmanager_sk.ts \
                i18n/diskmanager_sl.ts \
                i18n/diskmanager_sr.ts \
                i18n/diskmanager_sv.ts \
                i18n/diskmanager_sw.ts \
                i18n/diskmanager_ta.ts \
                i18n/diskmanager_tg.ts \
                i18n/diskmanager_th.ts \
                i18n/diskmanager_tr.ts \
                i18n/diskmanager_uk.ts \
                i18n/diskmanager_ur.ts \
                i18n/diskmanager_uz.ts \
                i18n/diskmanager_vi.ts \
                i18n/diskmanager_zh_CN.ts \
                i18n/diskmanager_zh_HK.ts \
                i18n/diskmanager_zh_TW.ts \
                i18n/diskmanager_zu.ts

icons.path=/usr/local/share/pcbsd/icons
icons.files=icons/diskmanager.png

INSTALLS += target icons

RESOURCES += \
    diskmanagerres.qrc
