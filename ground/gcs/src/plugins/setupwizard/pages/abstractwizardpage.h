/**
 ******************************************************************************
 *
 * @file       abstractwizardpage.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2012.
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2013
 * @see        The GNU Public License (GPL) Version 3
 *
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup SetupWizard Setup Wizard
 * @{
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>
 */

#ifndef ABSTRACTWIZARDPAGE_H
#define ABSTRACTWIZARDPAGE_H

#include <QWizardPage>
#include "setupwizard.h"
#include <coreplugin/iboardtype.h>

class AbstractWizardPage : public QWizardPage
{
    Q_OBJECT
protected:
    explicit AbstractWizardPage(SetupWizard *wizard, QWidget *parent = nullptr);

private:
    SetupWizard *m_wizard;

public:
    SetupWizard *getWizard() const { return m_wizard; }

    Core::IBoardType *getControllerType() const;
};

#endif // ABSTRACTWIZARDPAGE_H
