object DataModule1: TDataModule1
  OldCreateOrder = False
  Height = 416
  Width = 731
  object FDConnection1: TFDConnection
    Params.Strings = (
      'Database=MAGAZIN'
      'Server=DESKTOP-NOPFO5O'
      'OSAuthent=Yes'
      'DriverID=MSSQL')
    Connected = True
    LoginPrompt = False
    Left = 16
    Top = 8
  end
  object DSQCautare: TDataSource
    DataSet = QCautare
    Left = 128
    Top = 80
  end
  object QCautare: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'SELECT * FROM PRODUS')
    Left = 72
    Top = 80
  end
  object QLiber: TFDQuery
    Connection = FDConnection1
    Left = 64
    Top = 152
  end
  object QProdus: TFDQuery
    Connection = FDConnection1
    Left = 128
    Top = 160
  end
  object FDStoredProc1: TFDStoredProc
    Connection = FDConnection1
    StoredProcName = 'MAGAZIN.dbo.FACTURA'
    Left = 8
    Top = 296
    ParamData = <
      item
        Position = 1
        Name = '@RETURN_VALUE'
        DataType = ftInteger
        ParamType = ptResult
      end
      item
        Position = 2
        Name = '@D'
        DataType = ftDate
        ParamType = ptInput
      end
      item
        Position = 3
        Name = '@N'
        DataType = ftString
        ParamType = ptInput
        Size = 20
      end
      item
        Name = '@E'
        DataType = ftString
        ParamType = ptInput
      end>
  end
end
