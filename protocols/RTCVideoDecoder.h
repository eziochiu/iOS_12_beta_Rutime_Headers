/* made by EzioChiu.
 */

@protocol RTCVideoDecoder <NSObject>

@required

- (long long)decode:(RTCEncodedImage *)arg1 missingFrames:(bool)arg2 fragmentationHeader:(RTCRtpFragmentationHeader *)arg3 codecSpecificInfo:(id <RTCCodecSpecificInfo>)arg4 renderTimeMs:(long long)arg5;
- (NSString *)implementationName;
- (long long)releaseDecoder;
- (void)setCallback:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RTCVideoFrame *, void*
- (long long)startDecodeWithSettings:(RTCVideoEncoderSettings *)arg1 numberOfCores:(int)arg2;

@end
