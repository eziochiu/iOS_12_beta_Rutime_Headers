/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFreehandDrawingToolkitUIState : TSPObject {
    double  _crayonToolOpacity;
    double  _crayonToolUnscaledWidth;
    TSUColor * _currentColor;
    unsigned long long  _currentToolType;
    bool  _eraserToolErasesWholeObjects;
    double  _eraserToolScaledWidth;
    double  _fillToolOpacity;
    unsigned long long  _mostRecentPenToolType;
    double  _penToolOpacity;
    double  _penToolUnscaledWidth;
    double  _pencilToolOpacity;
    double  _pencilToolUnscaledWidth;
}

@property (nonatomic, retain) TSUColor *currentColor;
@property (nonatomic) unsigned long long currentToolType;
@property (nonatomic, readonly) unsigned long long mostRecentPenToolType;

- (void).cxx_destruct;
- (id)copy;
- (id)currentColor;
- (unsigned long long)currentToolType;
- (id)initWithContext:(id)arg1;
- (void)loadFromArchive:(const struct FreehandDrawingToolkitUIState { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; int x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; bool x15; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (unsigned long long)mostRecentPenToolType;
- (double)p_defaultStrokeWidthForToolType:(unsigned long long)arg1;
- (unsigned long long)p_defaultToolType;
- (unsigned long long)p_indexOfDefaultStrokeWidthForFreehandDrawingToolType:(unsigned long long)arg1;
- (void)p_setDefaultToolType:(unsigned long long)arg1;
- (void)p_setupDefaultValuesFromUnarchive:(bool)arg1;
- (void)saveToArchive:(struct FreehandDrawingToolkitUIState { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Color {} *x5; int x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; bool x15; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setCurrentColor:(id)arg1;
- (void)setCurrentToolType:(unsigned long long)arg1;
- (id)strokeWidthsForFreehandDrawingToolType:(unsigned long long)arg1;

@end
