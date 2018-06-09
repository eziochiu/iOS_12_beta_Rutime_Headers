/* made by EzioChiu.
 */

@protocol RTCYUVPlanarBuffer <RTCVideoFrameBuffer>

@required

- (int)chromaHeight;
- (int)chromaWidth;
- (const char *)dataU;
- (const char *)dataV;
- (const char *)dataY;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)initWithWidth:(int)arg1 height:(int)arg2 strideY:(int)arg3 strideU:(int)arg4 strideV:(int)arg5;
- (int)strideU;
- (int)strideV;
- (int)strideY;

@end
