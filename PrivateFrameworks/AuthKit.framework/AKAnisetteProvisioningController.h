/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAnisetteProvisioningController : NSObject {
    <AKAnisetteServiceProtocol> * _anisetteDataProvider;
    NSXPCConnection * _anisetteServiceConnection;
    NSLock * _connectionLock;
    NSXPCListenerEndpoint * _daemonXPCEndpoint;
    AKDevice * _targetDevice;
}

@property (nonatomic, retain) <AKAnisetteServiceProtocol> *anisetteDataProvider;
@property (nonatomic, retain) AKDevice *targetDevice;

- (void).cxx_destruct;
- (id)_anisetteServiceConnection;
- (void)anisetteDataForURLRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)anisetteDataForURLRequest:(id)arg1 error:(id*)arg2;
- (id)anisetteDataProvider;
- (void)anisetteDataWithCompletion:(id /* block */)arg1;
- (id)anisetteDataWithError:(id*)arg1;
- (void)dealloc;
- (void)eraseWithCompletion:(id /* block */)arg1;
- (id)fetchAnisetteDataAndProvisionIfNecessary:(bool)arg1 error:(id*)arg2;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)initForDevice:(id)arg1 provider:(id)arg2;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)provisionWithCompletion:(id /* block */)arg1;
- (void)setAnisetteDataProvider:(id)arg1;
- (void)setTargetDevice:(id)arg1;
- (void)syncWithSIMData:(id)arg1 completion:(id /* block */)arg2;
- (id)targetDevice;

@end
