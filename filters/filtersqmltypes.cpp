#include "filter.h"
#include "valuefilter.h"
#include "indexfilter.h"
#include "regexpfilter.h"
#include "rangefilter.h"
#include "expressionfilter.h"
#include "anyoffilter.h"
#include "alloffilter.h"
#include <QQmlEngine>
#include <QCoreApplication>

namespace qqsfpm {

void registerFiltersTypes() {
    qmlRegisterUncreatableType<Filter>("SortFilterProxyModel", 0, 2, "Filter", "Filter is an abstract class");
    qmlRegisterType<ValueFilter>("SortFilterProxyModel", 0, 2, "ValueFilter");
    qmlRegisterType<IndexFilter>("SortFilterProxyModel", 0, 2, "IndexFilter");
    qmlRegisterType<RegExpFilter>("SortFilterProxyModel", 0, 2, "RegExpFilter");
    qmlRegisterType<RangeFilter>("SortFilterProxyModel", 0, 2, "RangeFilter");
    qmlRegisterType<ExpressionFilter>("SortFilterProxyModel", 0, 2, "ExpressionFilter");
    qmlRegisterType<AnyOfFilter>("SortFilterProxyModel", 0, 2, "AnyOf");
    qmlRegisterType<AllOfFilter>("SortFilterProxyModel", 0, 2, "AllOf");
}

#ifndef SORT_FILTER_MODEL_DISABLE_AUTO_QML_REGISTER
Q_COREAPP_STARTUP_FUNCTION(registerFiltersTypes)
#endif

}
