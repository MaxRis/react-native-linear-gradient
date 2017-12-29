/**
 * Copyright (c) 2017-present, Status Research and Development GmbH.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#ifndef BVLINEARGRADIENTMANAGER_H
#define BVLINEARGRADIENTMANAGER_H

#include "moduleinterface.h"
#include "componentmanagers/viewmanager.h"

class BVLinearGradientManagerPrivate;
class BVLinearGradientManager : public ViewManager {
    Q_OBJECT
    Q_INTERFACES(ModuleInterface)
    Q_DECLARE_PRIVATE(BVLinearGradientManager)

public:
    Q_INVOKABLE BVLinearGradientManager(QObject* parent = 0);
    ~BVLinearGradientManager();

    virtual ViewManager* viewManager() override;
    virtual QString moduleName() override;

private:
    //virtual QString qmlComponentFile() const override;
    virtual void configureView(QQuickItem* view) const override;

    QScopedPointer<BVLinearGradientManagerPrivate> d_ptr;
};

#endif // BVLINEARGRADIENTMANAGER_H
