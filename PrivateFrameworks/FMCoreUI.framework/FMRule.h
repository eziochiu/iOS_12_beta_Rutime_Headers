/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMRule : UIView {
    UIColor * _color;
    UIImageView * _imageView;
    bool  _leading;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool leading;

+ (id)imageWithColor:(id)arg1 leading:(bool)arg2;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)color;
- (void)commonSetup;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)leading;
- (void)prepareForInterfaceBuilder;
- (void)setColor:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLeading:(bool)arg1;

@end