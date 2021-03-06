/****************************************************************************
**
** Copyright (C) 2014-2015 Debao Zhang <hello@debao.me>
**
** This file is part of the QtOfficeOpenXml library.
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPLv2 included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
****************************************************************************/
#ifndef OOXMLZIPPACKAGE_H
#define OOXMLZIPPACKAGE_H

#include <QtOfficeOpenXml/opcpackage.h>

namespace QtOfficeOpenXml {
namespace Opc {
class ZipPackagePart;
class ZipPackagePrivate;
class Q_OFFICEOPENXML_EXPORT ZipPackage : public Package
{
public:
    explicit ZipPackage(const QString &fileName);
    explicit ZipPackage(QIODevice *device);
    virtual ~ZipPackage();

private:
    bool doOpenPackage(QIODevice::OpenMode mode) Q_DECL_OVERRIDE;
    bool doClosePackage() Q_DECL_OVERRIDE;
    PackagePart *doCreatePart(const QString &partName, const QString &contentType) Q_DECL_OVERRIDE;
    bool doDeletePart(const QString &partName) Q_DECL_OVERRIDE;

    Q_DECLARE_PRIVATE(ZipPackage)
};

} // namespace Opc
} // namespace QtOfficeOpenXml
#endif // OOXMLZIPPACKAGE_H
