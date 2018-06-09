/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKStarRatingView : UIControl {
    TSUColor * mColor;
    TSKHorizontalDragRecognizer * mDragGesture;
    long long  mRating;
    long long  mRatingOnFingerDown;
    bool  mShowsDots;
    int  mStyle;
}

@property (nonatomic, copy) TSUColor *color;
@property (nonatomic) bool showsDots;
@property (nonatomic) int style;
@property (nonatomic) long long value;

+ (struct CGPath { }*)newStarPath:(double)arg1;
+ (void)renderRating:(long long)arg1 intoContext:(struct CGContext { }*)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 style:(int)arg4 showDots:(bool)arg5;

- (id)color;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)p_horizontalDrag:(id)arg1;
- (void)p_setupGestureRecognizers;
- (long long)p_starRatingForGesture:(id)arg1;
- (long long)p_starRatingForLocation:(double)arg1;
- (void)p_tapped:(id)arg1;
- (Class)renderClass;
- (void)setColor:(id)arg1;
- (void)setShowsDots:(bool)arg1;
- (void)setStyle:(int)arg1;
- (void)setValue:(long long)arg1;
- (bool)showsDots;
- (int)style;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (long long)value;
- (void)willMoveToSuperview:(id)arg1;

@end
