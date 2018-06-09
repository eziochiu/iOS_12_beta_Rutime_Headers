/* made by EzioChiu.
 */

@protocol RTCVideoDecoderFactory <NSObject>

@required

- (<RTCVideoDecoder> *)createDecoder:(RTCVideoCodecInfo *)arg1;
- (NSArray *)supportedCodecs;

@end
