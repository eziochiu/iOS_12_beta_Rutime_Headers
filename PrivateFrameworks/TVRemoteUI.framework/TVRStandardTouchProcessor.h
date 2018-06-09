/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface TVRStandardTouchProcessor : TVRTouchProcessor {
    long long  _clickVirtualizerState;
    NSTimer * _clickVirtualizerTimer;
    UITapGestureRecognizer * _tapGestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchBeganLocation;
}

- (void).cxx_destruct;
- (void)_tap:(id)arg1;
- (void)_touchpadClickVirtualizerTimerFired:(id)arg1;
- (void)setTouchpadView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
