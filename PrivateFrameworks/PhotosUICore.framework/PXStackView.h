/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXStackView : PXCollageView {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _offset;
    double  _scaleFactor;
}

@property (nonatomic) struct UIOffset { double x1; double x2; } offset;
@property (nonatomic) double scaleFactor;

- (void)_setImageBorderColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct UIOffset { double x1; double x2; })offset;
- (double)scaleFactor;
- (void)setCornerBackgroundColor:(id)arg1;
- (void)setOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setScaleFactor:(double)arg1;

@end
