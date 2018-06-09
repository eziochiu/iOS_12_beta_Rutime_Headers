/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSBulletinBoardEventBehaviorResolver : NSObject <DNDSEventBehaviorResolver> {
    CNContactStore * _contactStore;
    <DNDSModeRepository> * _modeRepository;
    <DNDSStateProvider> * _stateProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithModeRepository:(id)arg1 stateProvider:(id)arg2 contactStore:(id)arg3;
- (id)resolveBehaviorForEventDetails:(id)arg1 error:(id*)arg2;

@end
