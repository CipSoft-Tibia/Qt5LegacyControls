#pragma once

#include <QtQml/qqmlregistration.h>

namespace SelectionMode
{
  Q_NAMESPACE
  QML_ELEMENT

  enum SelectionMode
  {
    NoSelection,
    SingleSelection,
    MultiSelection,
    ExtendedSelection,
    ContiguousSelection
  };
  Q_ENUM_NS(SelectionMode)
}
