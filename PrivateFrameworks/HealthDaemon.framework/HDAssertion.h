/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAssertion : NSObject {
    NSUUID * _UUID;
    NSString * _assertionIdentifier;
    double  _expirationDate;
    NSObject<OS_dispatch_source> * _invalidationTimer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDAssertionManager * _manager;
    NSString * _ownerIdentifier;
    long long  _state;
    double  _timeout;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *assertionIdentifier;
@property (nonatomic, readonly, copy) NSString *ownerIdentifier;
@property (readonly) long long rawState;
@property (readonly) double remainingTime;
@property (readonly) long long state;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)UUID;
- (void)_invalidateAndRelease:(bool)arg1;
- (void)_invalidationTimerDidFire;
- (long long)_takeWithManager:(id)arg1;
- (id)assertionIdentifier;
- (void)dealloc;
- (id)description;
- (id)initWithAssertionIdentifier:(id)arg1 ownerIdentifier:(id)arg2;
- (void)invalidate;
- (id)ownerIdentifier;
- (long long)rawState;
- (double)remainingTime;
- (void)setTimeout:(double)arg1;
- (long long)state;
- (double)timeout;

@end
