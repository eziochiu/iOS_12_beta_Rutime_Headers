/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBLaunchImageProviderClient : BSBaseXPCClient {
    XBApplicationLaunchCompatibilityInfo * _appInfo;
}

+ (void)preheatServiceWithTimeout:(double)arg1;

- (void).cxx_destruct;
- (unsigned int)generateImageWithContext:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithApplicationInfo:(id)arg1;

@end
