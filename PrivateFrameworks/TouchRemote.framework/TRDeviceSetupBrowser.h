/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate> {
    <TRDeviceSetupBrowserDelegate> * _delegate;
    TRDeviceSetupPeripheral * _peripheral;
    TRTransferBrowser * _transferBrowser;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TRDeviceSetupBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TRDeviceSetupPeripheral *peripheral;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) TRTransferBrowser *transferBrowser;

- (void).cxx_destruct;
- (void)browser:(id)arg1 didReceiveData:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)browser:(id)arg1 didStartTransferWithSendDataHandler:(id /* block */)arg2;
- (void)browserDidChangeState:(id)arg1;
- (void)browserDidDisconnect:(id)arg1;
- (void)defer;
- (id)delegate;
- (id)init;
- (id)peripheral;
- (void)setDelegate:(id)arg1;
- (void)setPeripheral:(id)arg1;
- (void)setTransferBrowser:(id)arg1;
- (void)start;
- (long long)state;
- (void)stop;
- (id)transferBrowser;

@end
