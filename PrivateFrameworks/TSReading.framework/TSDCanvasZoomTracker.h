/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDCanvasZoomTracker : NSObject {
    bool  mAlwaysUsesTranslationSprings;
    bool  mAnimateTransform;
    TSDCanvasLayer * mCanvasLayer;
    NSObject<TSDCanvasZoomTrackerDelegate> * mDelegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  mGestureOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  mGestureOrigin;
    bool  mHasGestureOrigin;
    bool  mIsShowingZoomHUD;
    bool  mIsZooming;
    struct CGPoint { 
        double x; 
        double y; 
    }  mSavedContentOffset;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mSavedTransform;
    bool  mSnapsViewScale;
    struct CGPoint { 
        double x; 
        double y; 
    }  mZoomOrigin;
    double  mZoomStartTime;
    double  mZoomVelocity;
    unsigned long long  mZoomVelocitySampleCount;
}

@property (nonatomic) bool alwaysUsesTranslationSprings;
@property (nonatomic) bool animateTransform;
@property (nonatomic) NSObject<TSDCanvasZoomTrackerDelegate> *delegate;
@property (nonatomic) bool snapsViewScale;

- (bool)alwaysUsesTranslationSprings;
- (bool)animateTransform;
- (id)delegate;
- (id)initWithCanvasLayer:(id)arg1;
- (void)p_finishZoomWithFinalScaleFactor:(double)arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAlwaysUsesTranslationSprings:(bool)arg1;
- (void)setAnimateTransform:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSnapsViewScale:(bool)arg1;
- (bool)snapsViewScale;
- (void)zoomWithScale:(double)arg1 velocity:(double)arg2 locationInView:(struct CGPoint { double x1; double x2; })arg3 phase:(int)arg4;

@end
