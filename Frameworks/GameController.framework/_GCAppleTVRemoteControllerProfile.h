/* made by EzioChiu
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCAppleTVRemoteControllerProfile : _GCMicroGamepad <DigitizerValueChangedDelegate, _GCACHomeButtonDelegate> {
    _GCACHomeButton * _acHome;
    unsigned int  _accumInputSampleCount;
    int  _candidateOrientation;
    NSDate * _candidateOrientationTimestamp;
    double  _deadzoneSize;
    unsigned int  _digitizerTouchState;
    GCMotion * _motion;
    int  _orientation;
    unsigned long long  _owner;
    double  _prevLogTime;
    unsigned int  _sampleCount;
    double  _windowBufferSize;
    double  _windowSize;
    double  _windowX;
    double  _windowY;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) GCControllerDirectionPad *dpad;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long owner;
@property (readonly) Class superclass;

+ (int)updateDevice:(struct __IOHIDDevice { }*)arg1 withButtonDebounceTime:(unsigned char)arg2 withDelay:(bool)arg3;

- (void).cxx_destruct;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(bool)arg5;
- (void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(bool)arg3;
- (void)getPositionInSlidingWindowForRealX:(double)arg1 realY:(double)arg2 outXInWindow:(double*)arg3 outYInWindow:(double*)arg4;
- (void)handleReport:(unsigned int)arg1 data:(id)arg2;
- (void)initCommon:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(bool)arg2;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)menuButton;
- (id)motion;
- (id)name;
- (unsigned long long)owner;
- (bool)ownershipClaimingElementsZero;
- (void)processOrientationData:(id)arg1;
- (unsigned int)sampleRate;
- (void)setAllowsRotation:(bool)arg1;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(bool)arg5;
- (void)setOwner:(unsigned long long)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)set_motion:(id)arg1;
- (void)toggleSuspendResume;

@end
