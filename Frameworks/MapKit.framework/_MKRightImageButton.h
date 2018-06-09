/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKRightImageButton : UIControl {
    UITapGestureRecognizer * _gestureRecognizer;
    bool  _highlighted;
    UIImageView * _imageView;
    NSArray * _titleAndImageConstraints;
    bool  _titleConstraintsAdded;
    _MKUILabel * _titleLabel;
    NSArray * _titleOnlyConstraints;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) _MKUILabel *titleLabel;

- (void).cxx_destruct;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)titleLabel;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;

@end
