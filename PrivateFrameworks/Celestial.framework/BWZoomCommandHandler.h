/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWZoomCommandHandler : NSObject {
    float  _appliedZoomFactor;
    bool  _clientCanCompensateForDelay;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastFramePTSes;
    float  _lastRequestedZoomFactor;
    float  _rampAcceleration;
    bool  _rampActive;
    int  _rampCommandID;
    float  _rampCurrentVelocity;
    double  _rampDuration;
    float  _rampSnapFraction;
    float  _rampStartFactor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _rampStartTime;
    float  _rampStartVelocity;
    float  _rampTargetFactor;
    float  _rampTargetVelocity;
    int  _rampType;
    float  _rampZoomFactorOfInterest;
    <BWZoomCompletionDelegate> * _zoomCompletionDelegate;
    BWZoomDelayBuffer * _zoomDelayBuffer;
    bool  _zoomFactorServiced;
    int  _zoomLock;
}

@property (readonly) float appliedZoomFactor;
@property (readonly) float rampZoomFactorOfInterest;
@property float requestedZoomFactor;
@property (nonatomic) <BWZoomCompletionDelegate> *zoomCompletionDelegate;

+ (void)initialize;

- (void)_activateRampMode:(bool)arg1;
- (float)_zoomFactorForDurationBasedRampAtPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 updateCurrentZoomRampState:(bool)arg2;
- (float)_zoomFactorForRampAtPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 updateCurrentZoomRampState:(bool)arg2;
- (float)_zoomFactorForRateBasedRampAtPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 updateCurrentZoomRampState:(bool)arg2;
- (float)appliedZoomFactor;
- (void)dealloc;
- (id)init;
- (float)predictRampZoomFactorAfterNumberOfFrames:(int)arg1 settingZoomFactorOfInterest:(float)arg2;
- (void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 snapToTargetZoomFactorWithinRampFraction:(float)arg5 commandID:(int)arg6;
- (float)rampZoomFactorOfInterest;
- (float)requestedZoomFactor;
- (void)setRequestedZoomFactor:(float)arg1;
- (void)setTypicalISPZoomDelay:(unsigned int)arg1 clientCanCompensateForDelay:(bool)arg2;
- (void)setZoomCompletionDelegate:(id)arg1;
- (void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg1;
- (float)updateZoomModelForNextFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)zoomCompletionDelegate;

@end
