SELECT * FROM PRODUS

SELECT * FROM PRODUS WHERE DENUMIRE=:DENUMIRE

UPDATE PRODUS SET DENUMIRE=:DENUMIRE,COD_PRODUS=:COD_PRODUS,AUTOR=:AUTOR,EDITURA=:EDITURA,COLECTIE=:COLECTIE,AN_APARITIE=:AN_APARITIE,NR_PAG=:NR_PAG,LIMBA=:LIMBA WHERE COD_PRODUS=:COD+PRODUS

INSERT INTO PRODUS(DENUMIRE,COD_PRODUS,AUTOR,EDITURA,COLECTIA,AN_APARITIE,NR_PAG,LIMBA)
VALUES(:DENUMIRE,:COD_PRODUS,:AUTOR,:EDITURA,:COLECTIA,:AN_APARITIE,:NR_PAG,:LIMBA)

--RETURN ID DACTURII
CREATE FUNCTION ID_FACTURA()
RETURNS INT 
AS
BEGIN
	RETURN(SELECT @@IDENTITY)
END;

INSERT INTO FACTURA_REC(NR_FACTURA) VALUES(23)
SELECT DBO.ID_FACTURA()

ALTER PROCEDURE FACTURA @D DATE, @N INT, @E VARCHAR(50)
AS
	INSERT INTO FACTURA_REC(NR_FACTURA,DATA_FACTURA,EMITENT) VALUES(@N,@D,@E);
	SELECT DBO.ID_FACTURA();

EXEC FACTURA @N='24', @D='2021-12-01'

select * from FACTURA_REC

INSERT INTO RECEPTIE(PRODUS_ID,FACTURA_REC_ID,OPERATOR_ID,STOCK1,STOCK2,PRET_INTRARE, PRET_VANZARE)
VALUES(:PRODUS_ID,:FACTURA_REC_ID,:OPERATOR_ID,:STOCK1,:STOCK2,:PRET_INTRARE,:PRET_VANZARE)
