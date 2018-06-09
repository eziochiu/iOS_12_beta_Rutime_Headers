/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWBravoPortraitSceneMonitor : NSObject <BWPortraitSceneMonitor> {
    bool  _aeStableAfterStartStreaming;
    float  _backgroundShiftSumFiltered;
    bool  _focusAdjusting;
    bool  _focusLocked;
    bool  _focusStableAfterStartStreaming;
    float  _invalidShiftRatioFiltered;
    int  _lastFocusingMethod;
    int  _lastSDOFEffectStatus;
    int  _numFramesSinceAEBecameStable;
    int  _numFramesSinceFocusBecameStable;
    int  _numFramesSinceFocusLocked;
    bool  _oneShotFocusScanInProgress;
    bool  _portraitSceneMonitoringRequiresStageThresholds;
    bool  _sceneIsTooDark;
    bool  _sceneTooDarkExposureThresholdReached;
    float  _sceneTooDarkGainHysteresisLag;
    float  _sceneTooDarkGainThreshold;
    float  _sceneTooDarkInvalidShiftRatioHysteresisLag;
    float  _sceneTooDarkInvalidShiftRatioThreshold;
    bool  _sceneTooDarkMonitoringEnabled;
    bool  _stageFaceDetected;
    bool  _stageFaceMonitoringEnabled;
    int  _stageFaceNumberOfFramesSinceLastFace;
    int  _stageFaceNumberOfFramesSinceLastFaceThreshold;
    NSArray * _stageMostRecentFaces;
    bool  _stageSubjectTooFarDistanceThresholdReached;
    bool  _stageTooFarBackgroundShiftSumNoFacesIsTooLow;
    float  _stageTooFarBackgroundShiftSumNoFacesThreshold;
    int  _stageTooFarBackgroundShiftTooLowNumFrames;
    float  _stageTooFarFocusDistanceThreshold;
    bool  _subjectIsTooClose;
    int  _subjectTooCloseLastWideFocusPosition;
    bool  _subjectTooCloseMonitoringEnabled;
    float  _subjectTooCloseWideFocusDistanceHysteresisLag;
    float  _subjectTooCloseWideFocusDistanceThreshold;
    float  _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioEnd;
    float  _subjectTooFarBackgroundShiftRollOffInvalidShiftRatioStart;
    bool  _subjectTooFarBackgroundShiftSumIsTooLow;
    float  _subjectTooFarBackgroundShiftSumTooLowHysteresisLag;
    float  _subjectTooFarBackgroundShiftSumTooLowThreshold;
    int  _subjectTooFarBackgroundShiftTooLowNumFrames;
    bool  _subjectTooFarDistanceThresholdReached;
    float  _subjectTooFarFocusDistanceHysteresisLag;
    float  _subjectTooFarFocusDistanceInfinityThreshold;
    float  _subjectTooFarFocusDistanceThreshold;
    int  _subjectTooFarLastTeleFocusPosition;
    bool  _subjectTooFarMonitoringEnabled;
    bool  _subjectTooFarUseTeleForFocusDistance;
    bool  _useLensMakersFocusDistance;
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
