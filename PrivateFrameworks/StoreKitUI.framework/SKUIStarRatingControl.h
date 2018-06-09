/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStarRatingControl : UIControl {
    UIImageView * _emptyStarsImageView;
    UIImageView * _filledStarsImageView;
    long long  _previousUserRating;
    float  _starSpacing;
    float  _starWidth;
    long long  _userRating;
}

@property (nonatomic, retain) UIImage *emptyStarsImage;
@property (nonatomic, retain) UIImage *filledStarsImage;
@property (nonatomic) float starSpacing;
@property (nonatomic) float starWidth;
@property (nonatomic) long long userRating;

- (void).cxx_destruct;
- (double)_unfilledStarsMinX;
- (double)_unfilledStarsWidth;
- (void)_updateUserRatingWithTouch:(id)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)emptyStarsImage;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)filledStarsImage;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setEmptyStarsImage:(id)arg1;
- (void)setFilledStarsImage:(id)arg1;
- (void)setStarSpacing:(float)arg1;
- (void)setStarWidth:(float)arg1;
- (void)setUserRating:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (float)starSpacing;
- (float)starWidth;
- (long long)userRating;

@end
