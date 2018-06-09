/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDKnobDragGestureRecognizer : UIGestureRecognizer <TSDAutoscrollDelegate, TSDTrackerManipulator> {
    TSDAutoscroll * mAutoscroll;
    struct CGPoint { 
        double x; 
        double y; 
    }  mAutoscrollPoint;
    TSDiOSCanvasViewController * mCVC;
    bool  mDelayHasElapsed;
    TSDInteractiveCanvasController * mICC;
    struct CGPoint { 
        double x; 
        double y; 
    }  mKnobToTouchOffset;
    bool  mKnobTouchHasMoved;
    TSDRep * mLastHitRep;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOriginalPointInWindow;
    UITouch * mSecondTouch;
    UITouch * mTouch;
    bool  mTouchesMoved;
    TSDKnobTracker * mTracker;
}

@property (nonatomic, retain) TSDAutoscroll *autoscroll;
@property (nonatomic) struct CGPoint { double x1; double x2; } autoscrollPoint;
@property (nonatomic, readonly) TSDInteractiveCanvasController *icc;
@property (nonatomic, readonly) TSDInteractiveCanvasController *interactiveCanvasController;

- (bool)allowTrackerManipulatorToTakeControl:(id)arg1;
- (int)allowedAutoscrollDirections;
- (id)autoscroll;
- (struct CGPoint { double x1; double x2; })autoscrollPoint;
- (void)autoscrollWillNotStart;
- (void)cancelBecauseOfRotation;
- (void)dealloc;
- (id)icc;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (id)interactiveCanvasController;
- (void)operationDidEnd;
- (void)p_cancelDelayedKnobTracking;
- (bool)p_hitRepIsValid:(id)arg1;
- (struct CGPoint { double x1; double x2; })p_pointInUnscaledCanvas;
- (void)p_requestDelayedKnobTracking:(double)arg1;
- (void)p_triggerDelayedKnobTracking:(id)arg1;
- (bool)readyToEndOperation;
- (void)reset;
- (void)setAutoscroll:(id)arg1;
- (void)setAutoscrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setState:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)tracker;
- (double)unscaledStartAutoscrollThreshold;
- (void)updateAfterAutoscroll:(id)arg1;

@end
