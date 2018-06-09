/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFClient : NSObject {
    CFCommandQueuer * _commandQueuer;
    NSObject<OS_dispatch_queue> * _queue;
    <AFServiceHelper> * _serviceHelper;
}

@property (retain) CFCommandQueuer *commandQueuer;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) <AFServiceHelper> *serviceHelper;

- (void).cxx_destruct;
- (id)commandQueuer;
- (void)executeCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)executeCommand:(id)arg1 peerInfo:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithClientLiteWithConnectionName:(id)arg1;
- (id)initWithServiceHelper:(id)arg1 withConnectionName:(id)arg2;
- (id)queue;
- (id)serviceHelper;
- (void)setCommandQueuer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServiceHelper:(id)arg1;
- (void)warmUpWithSignal:(id)arg1 completion:(id /* block */)arg2;

@end
