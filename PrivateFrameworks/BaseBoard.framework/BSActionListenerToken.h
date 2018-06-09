/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSActionListenerToken : NSObject {
    NSObject<OS_xpc_object> * _endpoint;
    unsigned int  _port;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *endpoint;
@property (nonatomic) unsigned int port;

- (void)dealloc;
- (id)endpoint;
- (id)initWithPort:(unsigned int)arg1 endpoint:(id)arg2;
- (unsigned int)port;
- (void)setEndpoint:(id)arg1;
- (void)setPort:(unsigned int)arg1;

@end
