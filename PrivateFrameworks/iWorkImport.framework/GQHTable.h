/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTable : GQHGraphicStyle <GQTableGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addMissingCellWithRowIndex:(unsigned short)arg1 columnIndex:(unsigned short)arg2 state:(id)arg3;
+ (void)addMissingCellsUpToRowIndex:(unsigned short)arg1 columnIndex:(unsigned short)arg2 state:(id)arg3;
+ (int)beginCells:(id)arg1 state:(id)arg2;
+ (void)beginRowWithIndex:(unsigned short)arg1 state:(id)arg2;
+ (int)beginTable:(id)arg1 state:(id)arg2;
+ (struct __CFString { }*)createTableAttachmentIdWithNumber:(long long)arg1;
+ (int)endCells:(id)arg1 state:(id)arg2;
+ (int)endTable:(id)arg1 state:(id)arg2;
+ (void)getVectorStylesForRowIndex:(unsigned short)arg1 rowSpan:(unsigned short)arg2 columnIndex:(unsigned short)arg3 columnSpan:(unsigned short)arg4 vectorStyles:(id*)arg5 state:(id)arg6;
+ (int)handleCell:(id)arg1 state:(id)arg2;
+ (id)mapBaseFillStyleForRowIndex:(unsigned short)arg1 columnIndex:(unsigned short)arg2 state:(id)arg3 isGroupingCell:(bool)arg4;
+ (int)mapCellContent:(id)arg1 xml:(id)arg2 state:(id)arg3;
+ (void)mapCellStyle:(id)arg1 rowIndex:(unsigned short)arg2 rowSpan:(unsigned short)arg3 columnIndex:(unsigned short)arg4 columnSpan:(unsigned short)arg5 state:(id)arg6 cell:(id)arg7 level:(unsigned short)arg8;
+ (void)mapVectorStyles:(id*)arg1 toCellStyle:(id)arg2 state:(id)arg3;
+ (const char *)name;
+ (unsigned short)resolveGroupLevel:(id)arg1 model:(id)arg2 columnIndex:(int)arg3 tableState:(id)arg4;
+ (void)splitTable:(id)arg1;
+ (void)startTableWithTableAnchor:(struct __CFString { }*)arg1 tableHeight:(float)arg2 state:(id)arg3;

@end
