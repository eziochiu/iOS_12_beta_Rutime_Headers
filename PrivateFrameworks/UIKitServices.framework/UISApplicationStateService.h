/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISApplicationStateService : NSObject <UISApplicationStateServerDelegate> {
    FBSSerialQueue * _calloutQueue;
    <UISApplicationStateServiceDelegate> * _delegate;
    struct { 
        unsigned int delegateDataSourceForApplicationBundleIdentifier : 1; 
    }  _delegateFlags;
    UISApplicationStateServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISApplicationStateServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSourceForApplicationBundleIdentifier:(id)arg1;
- (bool)_isClientAuthorized:(id)arg1 forApplicationBundleIdentifier:(id)arg2;
- (id)client:(id)arg1 getBadgeValueForApplication:(id)arg2;
- (double)client:(id)arg1 getNextWakeIntervalSinceReferenceDateForApplication:(id)arg2;
- (bool)client:(id)arg1 getUsesBackgroundNetworkForApplication:(id)arg2;
- (void)client:(id)arg1 setBadgeValue:(id)arg2 forApplication:(id)arg3;
- (void)client:(id)arg1 setMinimumBackgroundFetchInterval:(double)arg2 forApplication:(id)arg3;
- (void)client:(id)arg1 setNextWakeIntervalSinceReferenceDate:(double)arg2 forApplication:(id)arg3;
- (void)client:(id)arg1 setUsesBackgroundNetwork:(bool)arg2 forApplication:(id)arg3;
- (id)delegate;
- (id)initWithCalloutQueue:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
