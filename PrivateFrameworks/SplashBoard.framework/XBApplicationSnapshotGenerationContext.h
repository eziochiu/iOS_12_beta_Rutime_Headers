/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationSnapshotGenerationContext : NSObject <BSDescriptionProviding> {
    XBApplicationLaunchCompatibilityInfo * _applicationCompatibilityInfo;
    XBLaunchStateRequest * _launchRequest;
    double  _timeout;
}

@property (nonatomic, readonly) XBApplicationLaunchCompatibilityInfo *applicationCompatibilityInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) XBLaunchStateRequest *launchRequest;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeout;

- (void).cxx_destruct;
- (id)applicationCompatibilityInfo;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithApplicationCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 timeout:(double)arg3;
- (id)launchRequest;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (double)timeout;

@end
