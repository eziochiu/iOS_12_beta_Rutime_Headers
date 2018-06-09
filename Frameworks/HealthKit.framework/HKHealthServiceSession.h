/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthServiceSession : NSObject {
    id /* block */  _characteristicsHandler;
    NSLock * _propertyLock;
    HKHealthService * _service;
    id /* block */  _sessionHandler;
    unsigned long long  _sessionIdentifier;
}

@property (nonatomic, copy) id /* block */ characteristicsHandler;
@property (nonatomic, retain) NSLock *propertyLock;
@property (nonatomic, readonly) HKHealthService *service;
@property (nonatomic, copy) id /* block */ sessionHandler;
@property (nonatomic) unsigned long long sessionIdentifier;

- (void).cxx_destruct;
- (id /* block */)characteristicsHandler;
- (id)initWithService:(id)arg1;
- (id)propertyLock;
- (id)service;
- (id /* block */)sessionHandler;
- (unsigned long long)sessionIdentifier;
- (void)setCharacteristicsHandler:(id /* block */)arg1;
- (void)setPropertyLock:(id)arg1;
- (void)setSessionHandler:(id /* block */)arg1;
- (void)setSessionIdentifier:(unsigned long long)arg1;

@end
