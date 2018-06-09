/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFSystemService : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    SFService * _sfService;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (void)_handleGetSystemInfoRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleProfileInstallForSession:(id)arg1 request:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_handleProfileRemoveForSession:(id)arg1 request:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_handleProfilesGetForSession:(id)arg1 request:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_sfServiceStart;
- (void)activate;
- (id)description;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setDispatchQueue:(id)arg1;

@end
