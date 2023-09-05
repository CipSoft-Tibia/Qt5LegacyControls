if (NOT DEFINED QT5LEGACYCONTROLS_OUTPUT_DIR)
  set(QT5LEGACYCONTROLS_OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR})
endif ()

set_source_files_properties(TextSingleton.qml PROPERTIES QT_QML_SINGLETON_TYPE TRUE)

qt_add_qml_module(Qt5LegacyControls
  URI QtQuick.LegacyControls
  VERSION 1.0.0
  PLUGIN_TARGET Qt5LegacyControls
  OUTPUT_DIRECTORY ${QT5LEGACYCONTROLS_OUTPUT_DIR}
  SHARED
  IMPORTS
    QtQml
    QtQuick
    QtQuick.Layouts
    QtQuick.Window
  SOURCES
    abstractstyle.cpp
    abstractstyle.h
    calendarmodel.cpp
    calendarmodel.h
    enumerations.h
    padding.h
    rangeddate.cpp
    rangeddate.h
    rangemodel.cpp
    rangemodel.h
    rangemodelprivate.h
    wheelarea.cpp
    wheelarea.h
  QML_FILES
    BasicTableView.qml
    BasicTableViewStyle.qml
    CalendarHeaderModel.qml
    CalendarOld.qml
    CalendarStyle.qml
    calendarutils.js
    FocusFrame.qml
    FocusFrameStyle.qml
    ScrollBarOld.qml
    ScrollViewHelper.qml
    ScrollViewOld.qml
    ScrollViewStyle.qml
    Style.qml
    TableViewColumn.qml
    TableViewItemDelegateLoader.qml
    TableViewOld.qml
    TableViewSelection.qml
    TableViewStyle.qml
    TextSingleton.qml
)
target_link_libraries(Qt5LegacyControls PUBLIC Qt6::Quick Qt6::Qml)
target_compile_options(Qt5LegacyControls PRIVATE
  $<IF:$<STREQUAL:$<CXX_COMPILER_ID>,MSVC>,-W0,-w>)
set_target_properties(Qt5LegacyControls PROPERTIES
  LIBRARY_OUTPUT_DIRECTORY_DEBUG ${QT5LEGACYCONTROLS_OUTPUT_DIR}
  LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO ${QT5LEGACYCONTROLS_OUTPUT_DIR}
  LIBRARY_OUTPUT_DIRECTORY_RELEASE ${QT5LEGACYCONTROLS_OUTPUT_DIR}
  LIBRARY_OUTPUT_DIRECTORY_MINSIZEREL ${QT5LEGACYCONTROLS_OUTPUT_DIR}
)
