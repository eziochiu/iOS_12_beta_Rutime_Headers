/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVShelfLayoutHelper : NSObject {
    long long  _actualRowCount;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _cellFrames;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _headerFrames;
    long long  _sectionCount;
    struct UIEdgeInsets { double x1; double x2; double x3; double x4; } * _sectionInsets;
    long long * _sectionOffsets;
    _TVShelfViewLayout * _shelfViewLayout;
    double  _tallestColumnHeight;
    double  _tallestHeaderHeight;
    double  _tallestInsetBottom;
    double  _tallestInsetTop;
}

@property (nonatomic, readonly) long long actualRowCount;
@property (nonatomic, readonly) _TVShelfViewLayout *shelfViewLayout;
@property (nonatomic, readonly) double tallestColumnHeight;
@property (nonatomic, readonly) double tallestHeaderHeight;
@property (nonatomic, readonly) double tallestInsetBottom;
@property (nonatomic, readonly) double tallestInsetTop;

- (void).cxx_destruct;
- (void)_compute;
- (void)_freeBuffers;
- (long long)actualRowCount;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForHeaderInSection:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndexPath:(id)arg1;
- (id)initWithShelfViewLayout:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetForSection:(long long)arg1;
- (id)shelfViewLayout;
- (double)tallestColumnHeight;
- (double)tallestHeaderHeight;
- (double)tallestInsetBottom;
- (double)tallestInsetTop;

@end
