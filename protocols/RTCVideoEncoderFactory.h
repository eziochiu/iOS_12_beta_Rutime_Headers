/* made by EzioChiu.
 */

@protocol RTCVideoEncoderFactory <NSObject>

@required

- (<RTCVideoEncoder> *)createEncoder:(RTCVideoCodecInfo *)arg1;
- (NSArray *)supportedCodecs;

@end
