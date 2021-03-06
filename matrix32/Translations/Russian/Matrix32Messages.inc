{ *************************************************************************** }
{   Unit name: Matrix32Messages.inc                                           }
{   Autor: Loginov Dmitry <loginov_d@inbox.ru>                                }
{   http://matrix.kladovka.net.ru/                                            }
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