/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPSwipeGestureRecognizer : UIGestureRecognizer {
    int  mDirection;
    unsigned long long  mNumberOfTouchesRequired;
    TSUPointerKeyDictionary * mStartLocations;
    double  mStartTime;
    unsigned long long  mTouchCountAttained;
}

@property (nonatomic) int direction;
@property (nonatomic) unsigned long long numberOfTouchesRequired;

- (void)dealloc;
- (int)direction;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (unsigned long long)numberOfTouchesRequired;
- (double)p_angleDifferenceForAngle1:(double)arg1 angle2:(double)arg2;
- (void)p_recordTouches:(id)arg1;
- (bool)p_swipeDirectionValidForAngle:(double)arg1 direction:(int)arg2;
- (bool)p_swipeDirectionValidForXDiff:(double)arg1 yDiff:(double)arg2;
- (bool)p_touchWasSwipe:(id)arg1 movedFarOut:(bool*)arg2;
- (void)reset;
- (void)setDirection:(int)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
