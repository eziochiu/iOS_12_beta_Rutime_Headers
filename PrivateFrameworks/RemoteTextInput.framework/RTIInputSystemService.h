/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
 */

@interface RTIInputSystemService : NSObject <NSXPCListenerDelegate, RTIInputSystemSessionDelegate> {
    RTIInputSystemServiceSession * _currentSession;
    <RTIInputSystemDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _enabled;
    NSXPCListener * _listener;
    NSString * _machName;
    NSMutableSet * _sessions;
}

@property (nonatomic, readonly) RTIInputSystemServiceSession *currentSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RTIInputSystemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (nonatomic, retain) NSString *machName;
@property (readonly) Class superclass;

+ (Class)serviceSessionClass;
+ (id)sharedServiceWithMachName:(id)arg1;

- (void).cxx_destruct;
- (void)_createListenerIfNecessary;
- (void)_destroyListenerIfNecessary;
- (id)currentSession;
- (void)dealloc;
- (id)delegate;
- (id)dispatchQueue;
- (id)initWithMachName:(id)arg1;
- (void)inputSession:(id)arg1 didChangePause:(bool)arg2 withReason:(id)arg3;
- (void)inputSession:(id)arg1 documentStateDidChange:(id)arg2;
- (void)inputSession:(id)arg1 documentTraitsDidChange:(id)arg2;
- (void)inputSessionDidBegin:(id)arg1;
- (void)inputSessionDidDie:(id)arg1;
- (void)inputSessionDidEnd:(id)arg1;
- (bool)isEnabled;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (id)machName;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setListener:(id)arg1;
- (void)setMachName:(id)arg1;

@end
