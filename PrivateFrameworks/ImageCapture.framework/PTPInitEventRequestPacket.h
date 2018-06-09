/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPInitEventRequestPacket : NSObject {
    unsigned int  _connectionNumber;
}

- (unsigned int)connectionNumber;
- (id)contentForTCP;
- (id)description;
- (id)initWithConnectionNumber:(unsigned int)arg1;
- (id)initWithTCPBuffer:(void*)arg1;
- (void)setConnectionNumber:(unsigned int)arg1;

@end
