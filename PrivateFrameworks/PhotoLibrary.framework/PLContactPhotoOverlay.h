/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLContactPhotoOverlay : UIView {
    UIImageView * __avatarPreview;
    CAShapeLayer * _circularLayer;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIImageView *_avatarPreview;
@property (nonatomic, retain) CAShapeLayer *circularLayer;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } overlayEdgeInsets;
@property (nonatomic, readonly) UILabel *titleLabel;

- (id)_avatarPreview;
- (void)_commonPLContactPhotoOverlayInitialization;
- (void)beginAvatarTrackingFromImageView:(id)arg1;
- (id)circularLayer;
- (void)dealloc;
- (void)endAvatarTracking;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inscribingBounds;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })overlayEdgeInsets;
- (void)setCircularLayer:(id)arg1;
- (id)titleLabel;

@end
