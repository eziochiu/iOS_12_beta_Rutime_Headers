/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNSheetUIState : NSObject <NSCopying> {
    long long  mDeviceIdiom;
    bool  mHasPreviousVisibleRect;
    bool  mHasVisibleRect;
    float  mPreviousViewScale;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mPreviousVisibleRect;
    TSKSelectionPath * mSelectionPath;
    float  mViewScale;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mVisibleRect;
}

@property (nonatomic) long long archivedDeviceIdiom;
@property (nonatomic) bool hasPreviousVisibleRect;
@property (nonatomic) bool hasVisibleRect;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } previousScrollPosition;
@property (nonatomic) float previousViewScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousVisibleRect;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } scrollPosition;
@property (nonatomic, retain) TSKSelectionPath *selectionPath;
@property (nonatomic) float viewScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

+ (long long)currentDeviceIdiom;
+ (id)sheetUIState;
+ (id)sheetUIStateWithPreviousVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)sheetUIStateWithVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

- (long long)archivedDeviceIdiom;
- (void)clearPreviousVisibleRect;
- (void)clearVisibleRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)hasPreviousVisibleRect;
- (bool)hasVisibleRect;
- (id)init;
- (id)initWithArchive:(const struct SheetUIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Point {} *x5; float x6; float x7; struct Point {} *x8; bool x9; bool x10; bool x11; unsigned int x12; struct Size {} *x13; struct Size {} *x14; struct SelectionPathArchive {} *x15; }*)arg1 unarchiver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)p_persistableSelectionPathFromSelectionPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })previousScrollPosition;
- (float)previousViewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousVisibleRect;
- (void)saveToArchive:(struct SheetUIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Point {} *x5; float x6; float x7; struct Point {} *x8; bool x9; bool x10; bool x11; unsigned int x12; struct Size {} *x13; struct Size {} *x14; struct SelectionPathArchive {} *x15; }*)arg1 archiver:(id)arg2 context:(id)arg3;
- (struct CGPoint { double x1; double x2; })scrollPosition;
- (id)selectionPath;
- (void)setArchivedDeviceIdiom:(long long)arg1;
- (void)setHasPreviousVisibleRect:(bool)arg1;
- (void)setHasVisibleRect:(bool)arg1;
- (void)setPreviousViewScale:(float)arg1;
- (void)setPreviousVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectionPath:(id)arg1;
- (void)setViewScale:(float)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateForDeviceIdiom:(long long)arg1;
- (float)viewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
