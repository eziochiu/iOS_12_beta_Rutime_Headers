/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeExporter : NSObject {
    NSPointerArray * _bottomRowStrokes;
    TSUIntegerKeyDictionary * _columnStrokeExportCache;
    <TSTCustomStrokeProviding> * _customStrokeProvider;
    <TSTTableStrokeProviding> * _defaultStrokeProvider;
    NSPointerArray * _leftColumnStrokes;
    NSPointerArray * _rightColumnStrokes;
    TSUIntegerKeyDictionary * _rowStrokeExportCache;
    <TSTTableInternalGeometryProviding><TSTTableHiddenRowColumnProviding> * _tableProvider;
    NSPointerArray * _topRowStrokes;
}

@property (nonatomic, readonly, retain) NSPointerArray *bottomRowStrokes;
@property (nonatomic, retain) TSUIntegerKeyDictionary *columnStrokeExportCache;
@property (nonatomic, readonly, retain) <TSTCustomStrokeProviding> *customStrokeProvider;
@property (nonatomic, readonly, retain) <TSTTableStrokeProviding> *defaultStrokeProvider;
@property (nonatomic, readonly, retain) NSPointerArray *leftColumnStrokes;
@property (nonatomic, readonly, retain) NSPointerArray *rightColumnStrokes;
@property (nonatomic, retain) TSUIntegerKeyDictionary *rowStrokeExportCache;
@property (nonatomic, readonly, retain) <TSTTableInternalGeometryProviding><TSTTableHiddenRowColumnProviding> *tableProvider;
@property (nonatomic, readonly, retain) NSPointerArray *topRowStrokes;

- (id)bottomRowStrokes;
- (id)columnStrokeExportCache;
- (id)customStrokeProvider;
- (void)dealloc;
- (id)defaultStrokeProvider;
- (id)initWithDefaultStrokeProvider:(id)arg1 customStrokeProvider:(id)arg2 tableProvider:(id)arg3;
- (id)leftColumnStrokes;
- (void)p_resolveStrokes;
- (id)rightColumnStrokes;
- (id)rowStrokeExportCache;
- (void)setColumnStrokeExportCache:(id)arg1;
- (void)setRowStrokeExportCache:(id)arg1;
- (void)strokesForCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 top:(id*)arg2 left:(id*)arg3 bottom:(id*)arg4 right:(id*)arg5;
- (id)tableProvider;
- (id)topRowStrokes;

@end
