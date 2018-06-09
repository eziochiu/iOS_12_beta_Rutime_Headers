/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWCaptureDevice : NSObject

@property (nonatomic, readonly) struct OpaqueCMClock { }*clock;
@property (nonatomic) float maximumFrameRate;
@property (nonatomic) float minimumFrameRate;
@property (nonatomic, readonly) int position;
@property (nonatomic, readonly) NSArray *supportedFormats;

- (long long)activeFormatIndex;
- (int)captureStillImageNowWithSettings:(id)arg1;
- (struct OpaqueCMClock { }*)clock;
- (void)getCurrentVideoFrameStatistics:(struct { double x1; float x2; float x3; double x4; float x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned char x10; unsigned char x11; unsigned int x12; int x13; int x14; int x15; unsigned int x16; float x17; unsigned char x18; double x19; int x20; int x21; int x22; float x23; float x24; unsigned char x25; int x26; int x27; float x28; float x29; int x30; int x31; long long x32; }*)arg1;
- (float)maximumFrameRate;
- (float)minimumFrameRate;
- (int)position;
- (void)setActiveFormatIndex:(long long)arg1;
- (void)setMaximumFrameRate:(float)arg1;
- (void)setMinimumFrameRate:(float)arg1;
- (id)stillImageCaptureSettingsWithID:(long long)arg1 captureType:(int)arg2 deliverProcessedImage:(bool)arg3 deliverOriginalImage:(bool)arg4 deliverSushiRaw:(bool)arg5 deliverBravoDualPhoto:(bool)arg6 includePreBracketedEV0ForProcessing:(bool)arg7 clientBracketSettings:(id)arg8 captureFlags:(unsigned long long)arg9 userInitiatedRequestPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg10;
- (id)supportedFormats;

@end
