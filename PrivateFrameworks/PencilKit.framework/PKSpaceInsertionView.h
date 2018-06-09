/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKSpaceInsertionView : UIView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _handleLocation;
    unsigned long long  _insertionType;
    bool  _isDragging;
    struct CGPath { } * _lassoPath;
}

@property (nonatomic) unsigned long long insertionType;
@property (nonatomic) bool isDragging;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 insertionType:(unsigned long long)arg2 path:(struct CGPath { }*)arg3 handleLocation:(struct CGPoint { double x1; double x2; })arg4;
- (unsigned long long)insertionType;
- (bool)isDragging;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setInsertionType:(unsigned long long)arg1;
- (void)setIsDragging:(bool)arg1;

@end
