/* made by EzioChiu.
 */

@protocol FigCaptureExternalEAControlPipeDelegate <NSObject>

@required

- (void)handleIncomingIAPOverEAPacket:(struct _IAPPacket { unsigned char x1; unsigned short x2; unsigned short x3; unsigned short x4; void *x5; }*)arg1;
- (void)handleIncomingVideoBufferPacket:(NSData *)arg1 msgID:(unsigned short)arg2;
- (void)streamsReady;

@end
