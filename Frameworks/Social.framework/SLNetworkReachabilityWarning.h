/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLNetworkReachabilityWarning : NSObject {
    id /* block */  _completionHandler;
    NSString * _serviceType;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithServiceType:(id)arg1;
- (void)showIfNecessary;
- (void)showIfNecessaryWithCompletion:(id /* block */)arg1;

@end
