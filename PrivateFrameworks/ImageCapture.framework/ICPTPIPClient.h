/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICPTPIPClient : NSObject {
    id  _clientProperties;
}

- (struct __CFFileDescriptor { }*)fdref;
- (id)init;
- (int)pid;
- (bool)registered;
- (int)remoteAddress;
- (struct __CFMessagePort { }*)remotePort;
- (int)serverFD;
- (void)setFdref:(struct __CFFileDescriptor { }*)arg1;
- (void)setPid:(int)arg1;
- (void)setRegistered:(bool)arg1;
- (void)setRemoteAddress:(int)arg1;
- (void)setRemotePort:(struct __CFMessagePort { }*)arg1;
- (void)setServerFD:(int)arg1;

@end
