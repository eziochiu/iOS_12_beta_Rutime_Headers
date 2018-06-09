/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStarRatingControl : UIControl {
    UIImageView * _backgroundImageView;
    UILabel * _explanationLabel;
    UIImageView * _foregroundImageView;
    struct CGSize { 
        double width; 
        double height; 
    }  _hitPadding;
    double  _starWidth;
    struct CGPoint { 
        double x; 
        double y; 
    }  _trackingLastPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _trackingStartPoint;
    float  _value;
}

@property (nonatomic, copy) NSString *explanationText;
@property (nonatomic) double starWidth;
@property (nonatomic) float value;

- (void).cxx_destruct;
- (bool)_alwaysHandleScrollerMouseEvent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_foregroundImageClipBounds;
- (id)_newExplanationLabel;
- (void)_updateValueForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)canHandleSwipes;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)explanationText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (id)initWithBackgroundImage:(id)arg1 foregroundImage:(id)arg2;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setExplanationText:(id)arg1;
- (void)setHitPadding:(struct CGSize { double x1; double x2; })arg1;
- (void)setStarWidth:(double)arg1;
- (void)setValue:(float)arg1;
- (void)sizeToFit;
- (double)starWidth;
- (float)value;

@end
