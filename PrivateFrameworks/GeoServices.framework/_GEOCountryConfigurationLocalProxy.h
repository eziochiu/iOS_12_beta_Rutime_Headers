/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOCountryConfigurationLocalProxy : NSObject <CoreTelephonyClientDataDelegate, _GEOCountryConfigurationServerProxy> {
    <_GEOCountryConfigurationServerProxyDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _scheduledUpdateTimer;
    CoreTelephonyClient * _telephonyClient;
    struct __CTServerConnection { } * _telephonyServerConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_determineCurrentCountryCode:(id /* block */)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_scheduleUpdate;
- (void)_updateCountryCodeWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)servingNetworkChanged:(id)arg1;
- (void)updateCountryCodeWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;

@end
