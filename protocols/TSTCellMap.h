/* made by EzioChiu.
 */

@protocol TSTCellMap <NSObject>

@required

- (void)addCell:(TSTCell *)arg1 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (bool)appliesToHidden;
- (TSTCell *)cellAtIndex:(unsigned long long)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellIDAtIndex:(unsigned long long)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)cellIDs;
- (bool)containsCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned long long)count;
- (bool)mayModifyFormulasInCells;
- (bool)mayModifyValuesReferencedByFormulas;
- (void)popLastCell;
- (void)setAppliesToHidden:(bool)arg1;
- (void)setMayModifyValuesReferencedByFormulas:(bool)arg1;

@end
