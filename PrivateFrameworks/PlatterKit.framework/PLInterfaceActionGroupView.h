/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLInterfaceActionGroupView : UIView {
    bool  _actionsDirty;
    UIInterfaceActionGroupView * _actionsGroupView;
    double  _cornerRadius;
    MTVibrantStylingProvider * _vibrantStylingProvider;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) MTVibrantStylingProvider *vibrantStylingProvider;

- (void).cxx_destruct;
- (id)_newInterfaceActionGroupViewWithActions:(id)arg1;
- (id)actions;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setActions:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setVibrantStylingProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)vibrantStylingProvider;

@end
