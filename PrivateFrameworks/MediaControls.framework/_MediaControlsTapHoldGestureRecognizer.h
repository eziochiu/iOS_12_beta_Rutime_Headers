/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface _MediaControlsTapHoldGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _startingLocation;
}

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
