/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDAlertSuppressorAssertion : HDAssertion {
    NSObject<OS_dispatch_source> * _keepaliveTimer;
    NSString * _processBundleIdentifier;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *keepaliveTimer;
@property (nonatomic, readonly, copy) NSString *processBundleIdentifier;

- (void).cxx_destruct;
- (id)initWithOwnerIdentifier:(id)arg1 processBundleIdentifier:(id)arg2;
- (id)keepaliveTimer;
- (id)processBundleIdentifier;
- (void)setKeepaliveTimer:(id)arg1;

@end
