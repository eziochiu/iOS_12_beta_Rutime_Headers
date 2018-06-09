/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDTapGestureRecognizer : UITapGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  mFirstTapLocation;
    bool  mSavedFirstTapLocation;
    unsigned long long  mTapCount;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } firstTapLocation;
@property (nonatomic, readonly) unsigned long long tapCount;

- (struct CGPoint { double x1; double x2; })firstTapLocation;
- (void)reset;
- (unsigned long long)tapCount;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
