/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPTapAndTouchGestureRecognizer : UIGestureRecognizer <TSDTapGesture> {
    unsigned long long  _numberOfTapsRequired;
}

@property (nonatomic, retain) <TSDGestureTarget> *cachedGestureTarget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <TSDGestureDelegate> *gestureDelegate;
@property (nonatomic, retain) NSString *gestureKind;
@property (nonatomic, readonly) int gestureState;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (readonly) Class superclass;
@property (nonatomic, retain) TSDRep *targetRep;

- (unsigned long long)numberOfTapsRequired;
- (void)p_failBecauseFingerStayedUpTooLongAfterTap;
- (void)reset;
- (void)setNumberOfTapsRequired:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
