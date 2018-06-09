/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPURatingControl : UIControl {
    <MPURatingControlDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitTestEdgeInsets;
    NSMutableArray * _imageViews;
    UIPanGestureRecognizer * _panGestureRecognizer;
    double  _rating;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic) <MPURatingControlDelegate> *delegate;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitTestEdgeInsets;
@property (nonatomic) double rating;

+ (id)ratingDotImage;
+ (id)ratingStarImage;

- (void).cxx_destruct;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_updateImageView:(id)arg1 proposedImage:(id)arg2 filled:(bool)arg3;
- (void)_updateImageViewsForRatingAnimated:(bool)arg1;
- (id)delegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitTestEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (double)rating;
- (double)ratingValueForLocationInView:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHitTestEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setRating:(double)arg1;
- (void)setRating:(double)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidMoveToSuperview;

@end
