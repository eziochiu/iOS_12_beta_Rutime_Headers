/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSRemoteAlertHandleProvider : NSObject <SBSRemoteAlertHandleObserver> {
    <SSRemoteAlertHandleProviderDelegate> * _delegate;
    SBSRemoteAlertHandle * _handle;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSRemoteAlertHandleProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callDelegate:(id /* block */)arg1;
- (id)_screenshotServicesServiceAlertDefinition;
- (void)activate;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (bool)isActive;
- (void)prepare;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (id)screenshotServicesAlertHandle;
- (void)setDelegate:(id)arg1;

@end
