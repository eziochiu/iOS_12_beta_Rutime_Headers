/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRMaterialViewButton : UIButton {
    double  _diameter;
    UIImageView * _iconImageView;
    UILabel * _label;
    MTMaterialView * _materialView;
}

@property (nonatomic) double diameter;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) UILabel *label;

- (void).cxx_destruct;
- (double)diameter;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)setDiameter:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setLabel:(id)arg1;

@end
