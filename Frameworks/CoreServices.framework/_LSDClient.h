/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSDClient : NSObject <NSXPCConnectionDelegate> {
    NSXPCConnection * _XPCConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, retain) NSXPCConnection *XPCConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)XPCConnection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)dealloc;
- (void)didHandleInvocation:(id)arg1 isReply:(bool)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (void)willHandleInvocation:(id)arg1 isReply:(bool)arg2;

@end
