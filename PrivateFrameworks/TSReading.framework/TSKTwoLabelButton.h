/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKTwoLabelButton : UIButton {
    UIImage * mDisabledStateImage;
    UIImage * mHighlightedStateImage;
    UIImageView * mImageView;
    UIImage * mNormalStateImage;
    UILabel * mSecondLabel;
    UIColor * mSecondLabelTextColor;
}

@property (nonatomic, retain) UIImage *disabledStateImage;
@property (nonatomic, retain) UIImage *highlightedStateImage;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIImage *normalStateImage;
@property (nonatomic, retain) UILabel *secondLabel;
@property (nonatomic, retain) UIColor *secondLabelTextColor;

- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)disabledStateImage;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)highlightedStateImage;
- (id)imageView;
- (void)layoutSubviews;
- (id)normalStateImage;
- (void)p_syncButtonState;
- (id)secondLabel;
- (id)secondLabelTextColor;
- (void)setDisabledStateImage:(id)arg1;
- (void)setHighlightedStateImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setNormalStateImage:(id)arg1;
- (void)setSecondLabel:(id)arg1;
- (void)setSecondLabelTextColor:(id)arg1;

@end
