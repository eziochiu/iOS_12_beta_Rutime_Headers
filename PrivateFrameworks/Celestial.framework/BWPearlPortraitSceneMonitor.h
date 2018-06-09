/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPearlPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor> {
    bool  _aeStableAfterStartStreaming;
    float  _closeDepthDistanceAverage;
    bool  _depthSensorOccluded;
    float  _luxLevelFiltered;
    float  _luxLevelSmoothingFactor;
    int  _numberOfFramesToWaitForAEAndLTMToStabilize;
    bool  _portraitSceneMonitoringRequiresStageThresholds;
    float  _sdofDepthQuality;
    float  _sdofDepthQualityFiltered;
    float  _sdofDepthQualityKCount;
    float  _sdofDepthQualitySmoothingFactor;
    int  _sdofNumFramesSinceAEBecameStable;
    float  _sdofTooBrightDepthQualityMinThreshold;
    unsigned short  _sdofTooBrightLuxLevelThreshold;
    unsigned short  _sdofTooBrightMaxLuxLevelThreshold;
    float  _sdofTooBrightTooFarDepthDistanceThreshold;
    float  _sdofTooCloseDepthDistanceThreshold;
    float  _sdofTooFarDepthDistanceThreshold;
    float  _stageBackgroundTooFarDepthQualityThreshold;
    unsigned short  _stageBackgroundTooFarLuxLevelThreshold;
    float  _stageDepthQuality;
    float  _stageTooBrightDepthQualityMinThreshold;
    float  _stageTooCloseDepthDistanceThreshold;
    float  _stageTooFarDepthDistanceThreshold;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool portraitSceneMonitoringRequiresStageThresholds;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (void)focusScanDidComplete;
- (id)initWithTuningParameters:(id)arg1 attachDebugFrameStatistics:(bool)arg2;
- (bool)portraitSceneMonitoringRequiresStageThresholds;
- (bool)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; float x17; unsigned char x18; double x19; int x20; int x21; int x22; float x23; float x24; unsigned char x25; int x26; int x27; float x28; float x29; int x30; int x31; long long x32; }*)arg2 flashScene:(bool)arg3 hdrScene:(bool)arg4 sisScene:(bool)arg5 effectStatus:(int*)arg6;
- (void)setAutoFocusInProgress:(bool)arg1 focusLocked:(bool)arg2 oneShotFocusScanInProgress:(bool)arg3;
- (void)setPortraitSceneMonitoringRequiresStageThresholds:(bool)arg1;
- (void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(id)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(bool)arg7 faces:(id)arg8;

@end
