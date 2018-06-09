/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellBorder : NSObject <NSCopying, TSSPropertyCommandSerializing, TSTCellDiffing> {
    TSDStroke * _bottomStroke;
    int  _bottomStrokeOrder;
    bool  _definedBottomStroke;
    bool  _definedBottomStrokeOrder;
    bool  _definedLeftStroke;
    bool  _definedLeftStrokeOrder;
    bool  _definedRightStroke;
    bool  _definedRightStrokeOrder;
    bool  _definedTopStroke;
    bool  _definedTopStrokeOrder;
    TSDStroke * _leftStroke;
    int  _leftStrokeOrder;
    TSDStroke * _rightStroke;
    int  _rightStrokeOrder;
    TSDStroke * _topStroke;
    int  _topStrokeOrder;
}

@property (nonatomic, readonly, retain) TSDStroke *bottomStroke;
@property (nonatomic, readonly) int bottomStrokeOrder;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool definedBottomStroke;
@property (nonatomic, readonly) bool definedLeftStroke;
@property (nonatomic, readonly) bool definedRightStroke;
@property (nonatomic, readonly) bool definedTopStroke;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, retain) TSDStroke *leftStroke;
@property (nonatomic, readonly) int leftStrokeOrder;
@property (nonatomic, readonly, retain) TSDStroke *rightStroke;
@property (nonatomic, readonly) int rightStrokeOrder;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) TSDStroke *topStroke;
@property (nonatomic, readonly) int topStrokeOrder;

+ (id)cellBorder;
+ (id)cellBorderForResettingAllStrokes;
+ (id)cellDiffProperties;

- (void)_clearBottomStroke;
- (void)_clearLeftStroke;
- (void)_clearRightStroke;
- (void)_clearTopStroke;
- (void)applyToCell:(id)arg1;
- (id)bottomStroke;
- (int)bottomStrokeOrder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)definedBottomStroke;
- (bool)definedLeftStroke;
- (bool)definedRightStroke;
- (bool)definedTopStroke;
- (void)didInitFromSOS;
- (id)initFromMessage:(const struct CellBorderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StrokeArchive {} *x5; struct StrokeArchive {} *x6; int x7; int x8; struct StrokeArchive {} *x9; struct StrokeArchive {} *x10; int x11; int x12; }*)arg1 unarchiver:(id)arg2;
- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (bool)isEmpty;
- (id)leftStroke;
- (int)leftStrokeOrder;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (id)rightStroke;
- (int)rightStrokeOrder;
- (void)saveToMessage:(struct CellBorderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StrokeArchive {} *x5; struct StrokeArchive {} *x6; int x7; int x8; struct StrokeArchive {} *x9; struct StrokeArchive {} *x10; int x11; int x12; }*)arg1 archiver:(id)arg2;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;
- (void)setBottomStroke:(id)arg1 order:(int)arg2;
- (void)setLeftStroke:(id)arg1 order:(int)arg2;
- (void)setRightStroke:(id)arg1 order:(int)arg2;
- (void)setTopStroke:(id)arg1 order:(int)arg2;
- (id)topStroke;
- (int)topStrokeOrder;

@end
