/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

@interface AirPlayController : NSObject <AirPlayControllerAsync, AirPlayControllerSync> {
    NSXPCConnection * _cnx;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _xpcName;
}

@property (nonatomic, copy) NSString *xpcName;

- (id)_setupConnection;
- (void)dealloc;
- (void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(id /* block */)arg3;
- (id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int*)arg3;
- (id)init;
- (void)invalidate;
- (void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(id /* block */)arg4;
- (int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id*)arg4;
- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3;
- (void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(id /* block */)arg4;
- (int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;
- (void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(id /* block */)arg4;
- (void)setXpcName:(id)arg1;
- (id)xpcName;

@end
