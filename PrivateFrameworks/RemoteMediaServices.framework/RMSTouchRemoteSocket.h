/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSTouchRemoteSocket : NSObject <NSStreamDelegate> {
    <RMSTouchRemoteSocketDelegate> * _delegate;
    unsigned int  _encryptionKey;
    NSString * _host;
    NSOutputStream * _outputStream;
    unsigned int  _port;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSTouchRemoteSocketDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_encryptData:(id)arg1;
- (void)connect;
- (void)dealloc;
- (id)delegate;
- (void)disconnect;
- (id)initWithHost:(id)arg1 port:(int)arg2 encryptionKey:(int)arg3;
- (bool)sendTouchCode:(long long)arg1 timeInMilliseconds:(unsigned int)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (void)setDelegate:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
