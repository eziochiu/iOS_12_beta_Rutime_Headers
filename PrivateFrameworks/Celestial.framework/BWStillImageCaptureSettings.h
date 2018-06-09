/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageCaptureSettings : NSObject <NSSecureCoding> {
    unsigned long long  _captureFlags;
    NSArray * _captureStreamSettings;
    int  _captureType;
    bool  _deliverOriginalImage;
    bool  _deliverProcessedImage;
    bool  _deliverSushiRaw;
    struct { 
        double integrationTime; 
        float normalizedSNR; 
        float baseISO; 
        double exposureBias; 
        float gain; 
        unsigned int conversionGain; 
        unsigned int readNoise_1x; 
        unsigned int readNoise_8x; 
        unsigned int aeAvg; 
        unsigned char aeLimitsReached; 
        unsigned char aeStable; 
        unsigned int luxLevel; 
        int logicalFocusLensPosition; 
        int afStatus; 
        int focusingMethod; 
        unsigned int motionDataStatus; 
        float synchronizedStreamsTelephotoGain; 
        unsigned char synchronizedStreamsTelephotoAEStable; 
        double synchronizedStreamsTelephotoIntegrationTime; 
        int synchronizedStreamsTelephotoAFStatus; 
        int synchronizedStreamsTelephotoFocusingMethod; 
        int synchronizedStreamsTelephotoAFStationaryCount; 
        float synchronizedStreamsTelephotoFocusDistance; 
        float synchronizedStreamsTelephotoLensMakersFocusDistance; 
        unsigned char synchronizedStreamsWideAEStable; 
        int synchronizedStreamsWideFocusPosition; 
        int synchronizedStreamsWideLogicalFocusLensPosition; 
        float synchronizedStreamsWideFocusDistance; 
        float synchronizedStreamsWideLensMakersFocusDistance; 
        int synchronizedStreamsWideAFStatus; 
        int synchronizedStreamsWideAFStationaryCount; 
        long long frameCount; 
    }  _frameStatistics;
    bool  _frameStatisticsAreValid;
    long long  _settingsID;
    int  _tempExpectedClientImageCount;
    int  _timeMachineReferenceFrameBracketedCaptureSequenceNumber;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _zeroShutterLagPTS;
    bool  _zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled;
}

@property (nonatomic, readonly) int bracketedCaptureSequenceNumberForOISLongExposure;
@property (nonatomic, readonly) unsigned long long captureFlags;
@property (nonatomic, readonly) NSArray *captureStreamSettings;
@property (nonatomic, readonly) int captureType;
@property (nonatomic, readonly) bool deliverOriginalImage;
@property (nonatomic, readonly) bool deliverProcessedImage;
@property (nonatomic, readonly) bool deliverSushiRaw;
@property (nonatomic, readonly) bool expectReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) int expectedClientImageCount;
@property (nonatomic, readonly) long long settingsID;
@property (nonatomic) int timeMachineReferenceFrameBracketedCaptureSequenceNumber;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } zeroShutterLagPTS;
@property (nonatomic) bool zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled;

+ (bool)supportsSecureCoding;

- (void)_setFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; float x17; unsigned char x18; double x19; int x20; int x21; int x22; float x23; float x24; unsigned char x25; int x26; int x27; float x28; float x29; int x30; int x31; long long x32; }*)arg1;
- (int)bracketedCaptureSequenceNumberForOISLongExposure;
- (unsigned long long)captureFlags;
- (id)captureStreamSettings;
- (id)captureStreamSettingsForPortType:(id)arg1;
- (int)captureType;
- (void)dealloc;
- (bool)deliverOriginalImage;
- (bool)deliverProcessedImage;
- (bool)deliverSushiRaw;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)expectReferenceFrameBracketedCaptureSequenceNumber;
- (int)expectedClientImageCount;
- (bool)getFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; float x17; unsigned char x18; double x19; int x20; int x21; int x22; float x23; float x24; unsigned char x25; int x26; int x27; float x28; float x29; int x30; int x31; long long x32; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingsID:(long long)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 deliverProcessedImage:(bool)arg4 deliverOriginalImage:(bool)arg5 deliverSushiRaw:(bool)arg6 captureStreamSettings:(id)arg7;
- (void)setExpectedClientImageCount:(int)arg1;
- (void)setTimeMachineReferenceFrameBracketedCaptureSequenceNumber:(int)arg1;
- (void)setZeroShutterLagPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setZeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled:(bool)arg1;
- (long long)settingsID;
- (int)timeMachineReferenceFrameBracketedCaptureSequenceNumber;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })zeroShutterLagPTS;
- (bool)zeroShutterLagSmartCameraPostCaptureReferenceFrameSelectionEnabled;

@end
