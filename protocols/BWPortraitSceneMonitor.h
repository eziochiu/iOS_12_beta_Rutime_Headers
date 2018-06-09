/* made by EzioChiu.
 */

@protocol BWPortraitSceneMonitor <NSObject>

@required

- (void)focusScanDidComplete;
- (bool)portraitSceneMonitoringRequiresStageThresholds;
- (bool)resolveSDOFStatusWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 frameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; float x17; unsigned char x18; double x19; int x20; int x21; int x22; float x23; float x24; unsigned char x25; int x26; int x27; float x28; float x29; int x30; int x31; long long x32; }*)arg2 flashScene:(bool)arg3 hdrScene:(bool)arg4 sisScene:(bool)arg5 effectStatus:(int*)arg6;
- (void)setAutoFocusInProgress:(bool)arg1 focusLocked:(bool)arg2 oneShotFocusScanInProgress:(bool)arg3;
- (void)setPortraitSceneMonitoringRequiresStageThresholds:(bool)arg1;
- (void)setSDOFBackgroundShiftSum:(float)arg1 invalidShiftRatio:(float)arg2 closeCanonicalDisparityAverage:(float)arg3 faceCanonicalDisparityAverages:(NSArray *)arg4 erodedForegroundRatio:(float)arg5 foregroundRatio:(float)arg6 occluded:(bool)arg7 faces:(NSArray *)arg8;

@end
