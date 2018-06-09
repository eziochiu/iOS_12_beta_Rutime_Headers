/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSLifetimeMonitorModeAssertionDetails : NSObject {
    DNDModeAssertionLifetime * _effectiveLifetime;
    DNDModeAssertion * _modeAssertion;
}

@property (nonatomic, readonly, copy) DNDModeAssertionLifetime *effectiveLifetime;
@property (nonatomic, readonly, copy) DNDModeAssertion *modeAssertion;

- (void).cxx_destruct;
- (id)effectiveLifetime;
- (id)initWithModeAssertion:(id)arg1 effectiveLifetime:(id)arg2;
- (id)modeAssertion;

@end
