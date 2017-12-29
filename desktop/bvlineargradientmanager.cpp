/**
 * Copyright (c) 2017-present, Status Research and Development GmbH.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "bvlineargradientmanager.h"

#include <QDebug>
#include <QQmlComponent>
#include <QQmlProperty>
#include <QQuickItem>
#include <QString>
#include <QVariant>

#include "attachedproperties.h"
#include "bridge.h"
#include "layout/flexbox.h"
#include "propertyhandler.h"
#include "utilities.h"

using namespace utilities;

namespace {
struct RegisterQMLMetaType {
    RegisterQMLMetaType() {
        qRegisterMetaType<BVLinearGradientManager*>();
    }
} registerMetaType;
} // namespace

class BVLinearGradientManagerPrivate {};

BVLinearGradientManager::BVLinearGradientManager(QObject* parent) : ViewManager(parent), d_ptr(new BVLinearGradientManagerPrivate) {}

BVLinearGradientManager::~BVLinearGradientManager() {}

QString BVLinearGradientManager::moduleName() {
    return "BVLinearGradientManager";
}

ViewManager* BVLinearGradientManager::viewManager() {
    return this;
}

/*QString BVLinearGradientManager::qmlComponentFile() const {
    return "qrc:/qml/ReactSlider.qml";
}*/

void BVLinearGradientManager::configureView(QQuickItem* view) const {
    ViewManager::configureView(view);
    //view->setProperty("sliderManager", QVariant::fromValue((QObject*)this));
}

#include "bvlineargradientmanager.moc"

