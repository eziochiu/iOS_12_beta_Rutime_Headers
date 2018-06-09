/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPPillView : UIView {
    TPBadgeView * _badgeView;
    <TPPillViewDelegate> * _delegate;
    UITapGestureRecognizer * _gestureRecognizer;
    UIImageView * _imageView;
    UILabel * _label;
    UIStackView * _stackView;
    NSString * _title;
}

@property (nonatomic, readonly) TPBadgeView *badgeView;
@property (nonatomic) <TPPillViewDelegate> *delegate;
@property (nonatomic, readonly) UITapGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)badgeView;
- (id)delegate;
- (id)gestureRecognizer;
- (void)handleTap:(id)arg1;
- (id)imageView;
- (id)initWithTitle:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)label;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)stackView;
- (id)title;

@end
