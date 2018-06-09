/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMFixedSizeView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedIntrinsicSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } fixedIntrinsicSize;

- (struct CGSize { double x1; double x2; })fixedIntrinsicSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setFixedIntrinsicSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIntrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
