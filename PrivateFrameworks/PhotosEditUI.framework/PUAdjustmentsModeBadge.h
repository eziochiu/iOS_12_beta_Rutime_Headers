/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUAdjustmentsModeBadge : UIView {
    bool  _filled;
    bool  _stroked;
}

@property (getter=isFilled, nonatomic) bool filled;
@property (getter=isStroked, nonatomic) bool stroked;

- (id)_drawColor;
- (void)_updateBadge;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFilled;
- (bool)isStroked;
- (void)setFilled:(bool)arg1;
- (void)setStroked:(bool)arg1;

@end
