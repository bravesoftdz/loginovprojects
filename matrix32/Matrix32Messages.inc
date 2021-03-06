{
Copyright (c) 2005-2013, Loginov Dmitry Sergeevich
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
}

{ *************************************************************************** }
{   Unit name: Matrix32Messages.inc                                           }
{   Autor: Loginov Dmitry <loginov_d@inbox.ru>                                }
{   ����� �����: http://loginovprojects.ru/                                   }
{   Last update: 04.02.2008                                                   }
{ *************************************************************************** }

{$IFDEF UseResStr}
resourcestring
  matSBaseWorkspace = '�������� ������� �������';
  matSWrongCoords = '������ ������� � �������� �������. ������� ������������ ���������� ��������. ';
  matSTryAccessToElem = '������� ���������� � �������� � ������������ (%s)';
  matSBadInputData = '������������ ������� ������';
  matSErrorCreateArray = '���������� ������� ������ � ���������� ���������';
  matSInvalidFloat = '''%s'' �� �������� ������ � ��������� ������';
  matSInvalidComplex = '''%s'' �� �������� ����������� ������';
  matSInvalidNumericSymbol = '������ ''%s'' �� �������� ��� �������� ������������������';
  matSOutOfMemory = '������������ ������ ��� ���������� ��������. ���������: %.0f ����. � �������: %.0f ����.';
  matSBadName = '������� ������������ ��� ������� "%s"';
  matSArraysNotAgree = '������� �������� �� �����������';
  matSIsNotSquareArray = '������ ������ ���� ���������� ��������';
  matSBinaryHeader = 'Matrix32 binaries version 2.0...'; // 32 �����
  matSBadBINFile = '���� �� ������������� ������� ������� Matrix32';
  matSCanNotRenameFile = '�� ������� ������������� ���� "%s" � "%s"';
  matSBadNameForBinFile =
    '���������� ��������� ��� ��������� ������ � ����, ��� ��� ��� ������� �� �������';
  matSArrayNotFound = '�� ������� ����� ������ � ������ "%s"';
  matSMatrixRangeOutOfStream =
    '���������� ��������� ������ �� ������ TStream, ��� ��� ��������� ' +
    '�� ����� ������� ��������� �� ������� ������';
  matSDimensionError = '������ ������������ �������� ����������� �������';
  matSNoDimension = '��������� ����������� �� ����������';
  matSAbstractError = '������� ��������� � ������������ ��� ������� ������';
  matSWorkspace = '������� �������';
  matSIsNotMatrix = '�������� ��������� ������ ��� 2-������ ��������';
  matSDifferentDimCount = '������� ����� ������ �����������';
  matSMustHaveSameType = '������� ������ ���� �����������';
  matSNotObjectType = '�������� ��������� ������ ��� ��������� ��������';
  matSNotNumericType = '�������� ��������� ������ ��� �������� ��������';
  matSNotCellType = '�������� ��������� ������ ��� �������� �����';
  matSNotRecordType = '�������� ��������� ������ ��� �������� �������';
  matSNotDynamicType = '�������� ��������� ������ ��� ������������ ��������';
  masSIsBadClassForOperation = '������ ������ "%s" �� �������� ��� ���������� ��������';
  matSUnknownType = '��� ������� �� ��������������';
  matSFunctionError = '��� ������ ������� ��������� ������';
  matSIsCopyByRef = '������ �������� ��������� �������, ����������� �� ������';
  matSCanNotWriteCell = '���������� �������� ������� ������� �����, ����������� �� ������';
  matSCanNotChangeSize = '���������� �������� ������� �������';
  matSArrayIsEmpty = '������ ����';
  matSDimNotValid = '������������ ����������� �������';
  matSElemWriteError = '������ ������ �������� �������';
  matSElemReadError = '������ ������ �������� �������';
  matSIsRefToSelf = '������� ���������� ��������� �� ����';
  matSRefIsNotMatrix = '������ "0x%p" �� ������������� ������������� ������� TMatrix';
  matSDimIntervError = '��������� �������� ������� �� ����� �������� �����������';
  matSMatrixListIsSmall = '� ������ �������� ������� ������� ���� ���������';
  matSClassNotFound = '����� "%s" �� ���������������';
  matSAliasError = '����� ������������ ��������� ������ �������';
  matSIsRefToWorkspace = '������� ��������� ������ �� ������ "������� �������"';
  matSRecordFieldIsNil = '���� � ������ "%s" �� ����������!';
  matSRecordIndexNotExists = '���� � �������� "%d" �� ����������!';

  matSBCDErrorString = '������ "%s" �� �������� ����������� �������-����������� ��������';
  matSBCDTooBigNumber = '�������-���������� ����� "%s" ������� �������';
  matSBCDOverFlow = '�������-���������� ����� �� ���������� � ��������� �����';
  
  matSOriginalErrorMsg = '��������� �� ������:';
  matSExceptionClass = '����� ����������: ';
  matSMatrixObjectInformation = '���������� �� ������� TMatrix:';
  matSMatrixName = '��� �������: ';
  matSMatrixClassName = '����� �������: %s = class(%s)';
  matSMatrixUsedMemory = '���������� ������: %d ����(�)';
  matSMatrixElemSize = '������ ��������: %d ����(�)';
  matSMatrixElemCount = '���������� ��������� �������: %d';
  matSMatrixDimensions = '������� ������� (%d-D): %s';
  matSMatrixFieldsCount = '����� ����� ������: %d';
  matSMatrixChildrenCount = '����� �������� ��������: %d';
  matSCatchStack = '���� ��������������� ������:';
  
  matSLibraryNotLoaded = '���������� "%s" �� ���������!';
  matSProcNotFoundInLibrary = '��������� "%s" �� ������� � ���������� "%s"';
{$ELSE}

var
  matSBaseWorkspace: string = '�������� ������� �������';
  matSWrongCoords: string = '������ ������� � �������� �������. ������� ������������ ���������� ��������. ';
  matSTryAccessToElem: string = '������� ���������� � �������� � ������������ (%s)';
  matSBadInputData: string = '������������ ������� ������';
  matSErrorCreateArray: string = '���������� ������� ������ � ���������� ���������';
  matSInvalidFloat: string = '''%s'' �� �������� ������ � ��������� ������';
  matSInvalidComplex: string = '''%s'' �� �������� ����������� ������';
  matSInvalidNumericSymbol: string = '������ ''%s'' �� �������� ��� �������� ������������������';
  matSOutOfMemory: string = '������������ ������ ��� ���������� ��������. ���������: %.0f ����. � �������: %.0f ����.';
  matSBadName: string = '������� ������������ ��� ������� "%s"';
  matSArraysNotAgree: string = '������� �������� �� �����������';
  matSIsNotSquareArray: string = '������ ������ ���� ���������� ��������';
  matSBinaryHeader: string = 'Matrix32 binaries version 2.0...'; // 32 �����
  matSBadBINFile: string = '���� �� ������������� ������� ������� Matrix32';
  matSCanNotRenameFile: string = '�� ������� ������������� ���� "%s" � "%s"';
  matSBadNameForBinFile: string =
    '���������� ��������� ��� ��������� ������ � ����, ��� ��� ��� ������� �� �������';
  matSArrayNotFound: string = '�� ������� ����� ������ � ������ "%s"';
  matSMatrixRangeOutOfStream: string =
    '���������� ��������� ������ �� ������ TStream, ��� ��� ��������� ' +
    '�� ����� ������� ��������� �� ������� ������';
  matSDimensionError: string = '������ ������������ �������� ����������� �������';
  matSNoDimension: string = '��������� ����������� �� ����������';
  matSAbstractError: string = '������� ��������� � ������������ ��� ������� ������';
  matSWorkspace: string = '������� �������';
  matSIsNotMatrix: string = '�������� ��������� ������ ��� 2-������ ��������';
  matSDifferentDimCount: string = '������� ����� ������ �����������';
  matSMustHaveSameType: string = '������� ������ ���� �����������';
  matSNotObjectType: string = '�������� ��������� ������ ��� ��������� ��������';
  matSNotNumericType: string = '�������� ��������� ������ ��� �������� ��������';
  matSNotCellType: string = '�������� ��������� ������ ��� �������� �����';
  matSNotRecordType: string = '�������� ��������� ������ ��� �������� �������';
  matSNotDynamicType: string = '�������� ��������� ������ ��� ������������ ��������';
  masSIsBadClassForOperation: string = '������ ������ "%s" �� �������� ��� ���������� ��������';
  matSUnknownType: string = '��� ������� �� ��������������';
  matSFunctionError: string = '��� ������ ������� ��������� ������';
  matSIsCopyByRef: string = '������ �������� ��������� �������, ����������� �� ������';
  matSCanNotWriteCell: string = '���������� �������� ������� ������� �����, ����������� �� ������';
  matSCanNotChangeSize: string = '���������� �������� ������� �������';
  matSArrayIsEmpty: string = '������ ����';
  matSDimNotValid: string = '������������ ����������� �������';
  matSElemWriteError: string = '������ ������ �������� �������';
  matSElemReadError: string = '������ ������ �������� �������';
  matSIsRefToSelf: string = '������� ���������� ��������� �� ����';
  matSRefIsNotMatrix: string = '������ "0x%p" �� ������������� ������������� ������� TMatrix';
  matSDimIntervError: string = '��������� �������� ������� �� ����� �������� �����������';
  matSMatrixListIsSmall: string = '� ������ �������� ������� ������� ���� ���������';
  matSClassNotFound: string = '����� "%s" �� ���������������';
  matSAliasError: string = '����� ������������ ��������� ������ �������';
  matSIsRefToWorkspace: string = '������� ��������� ������ �� ������ "������� �������"';
  matSRecordFieldIsNil: string = '���� � ������ "%s" �� ����������!';
  matSRecordIndexNotExists: string = '���� � �������� "%d" �� ����������!';

  matSBCDErrorString: string = '������ "%s" �� �������� ����������� �������-����������� ��������';
  matSBCDTooBigNumber: string = '�������-���������� ����� "%s" ������� �������';
  matSBCDOverFlow: string = '�������-���������� ����� �� ���������� � ��������� �����';

  matSOriginalErrorMsg: string = '��������� �� ������:';
  matSExceptionClass: string = '����� ����������: ';
  matSMatrixObjectInformation: string = '���������� �� ������� TMatrix:';
  matSMatrixName: string = '��� �������: ';
  matSMatrixClassName: string = '����� �������: %s = class(%s)';
  matSMatrixUsedMemory: string = '���������� ������: %d ����(�)';
  matSMatrixElemSize: string = '������ ��������: %d ����(�)';
  matSMatrixElemCount: string = '���������� ��������� �������: %d';
  matSMatrixDimensions: string = '������� ������� (%d-D): %s';
  matSMatrixFieldsCount: string = '����� ����� ������: %d';
  matSMatrixChildrenCount: string = '����� �������� ��������: %d';
  matSCatchStack: string = '���� ��������������� ������:';
  
  matSLibraryNotLoaded: string = '���������� "%s" �� ���������!';
  matSProcNotFoundInLibrary: string = '��������� "%s" �� ������� � ���������� "%s"';
{$ENDIF}