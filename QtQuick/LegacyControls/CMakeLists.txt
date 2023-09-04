if (NOT DEFINED QT5LEGACYCONTROLS_OUTPUT_DIR)
  set(QT5LEGACYCONTROLS_OUTPUT_DIR ${CMAKE_CURRENT_BINARY_DIR})
endif ()

qt_add_qml_module(Qt5LegacyControls
  URI QtQuick.LegacyControls
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
    enumerations.h
    padding.h
    rangemodel.cpp
    rangemodel.h
    rangemodelprivate.h
    wheelarea.cpp
    wheelarea.h
  QML_FILES
    BasicTableView.qml
    BasicTableViewStyle.qml
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
)
target_link_libraries(Qt5LegacyControls PUBLIC Qt6::Quick)
set_target_properties(Qt5LegacyControls PROPERTIES
  LIBRARY_OUTPUT_DIRECTORY_DEBUG ${QT5LEGACYCONTROLS_OUTPUT_DIR}
  LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO ${QT5LEGACYCONTROLS_OUTPUT_DIR}
  LIBRARY_OUTPUT_DIRECTORY_RELEASE ${QT5LEGACYCONTROLS_OUTPUT_DIR}
  LIBRARY_OUTPUT_DIRECTORY_MINSIZEREL ${QT5LEGACYCONTROLS_OUTPUT_DIR}
)
