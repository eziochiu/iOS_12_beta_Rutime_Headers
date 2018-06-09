/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITouchObservation : NSObject {
    unsigned long long  _observedTouchCount;
    unsigned long long  _observedTouchOffset;
    struct { 
        int phase; 
        struct CGPoint { 
            double x; 
            double y; 
        } position; 
        double timestamp; 
        double azimuth; 
        double altitude; 
        double pressure; 
    }  _observedTouches;
}

- (void)dealloc;
- (void)enumerateTouchesWithBlock:(id /* block */)arg1;
- (void)observeTouch:(id)arg1;
- (void)reset;
- (unsigned long long)touchCount;

@end
