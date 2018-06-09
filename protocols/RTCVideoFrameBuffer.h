/* made by EzioChiu.
 */

@protocol RTCVideoFrameBuffer <NSObject>

@required

- (int)height;
- (<RTCI420Buffer> *)toI420;
- (int)width;

@end
