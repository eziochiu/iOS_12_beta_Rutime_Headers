/* made by EzioChiu.
 */

@protocol VCHardwareSettingsEmbeddedProtocol

@required

- (long long)chipId;
- (long long)deviceClass;
- (unsigned int)maxActiveVideoDecoders;
- (unsigned int)maxActiveVideoEncoders;
- (int)screenHeight;
- (int)screenWidth;
- (bool)supportHEVC;
- (bool)useSoftFramerateSwitching;
- (bool)vcpSupportsHEVCEncoder;
- (long long)videoEncoderType;

@end
