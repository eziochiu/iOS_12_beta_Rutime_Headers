/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDServerConfigurationManager : NSObject <CKDSystemAvailabilityWatcher> {
    NSOperationQueue * _configurationQueue;
    NSMutableDictionary * _containerSpecificInfoOperations;
    NSOperationQueue * _containerSpecificInfoQueue;
    NSMutableDictionary * _containerSpecificInfos;
    CKDServerConfiguration * _globalConfiguration;
    NSMutableSet * _globalConfigurationOps;
    int  _iCloudEnvNotifToken;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _shouldDropAllConfigurations;
}

@property (nonatomic, retain) NSOperationQueue *configurationQueue;
@property (nonatomic, retain) NSMutableDictionary *containerSpecificInfoOperations;
@property (nonatomic, retain) NSOperationQueue *containerSpecificInfoQueue;
@property (nonatomic, retain) NSMutableDictionary *containerSpecificInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKDServerConfiguration *globalConfiguration;
@property (nonatomic, retain) NSMutableSet *globalConfigurationOps;
@property (readonly) unsigned long long hash;
@property (nonatomic) int iCloudEnvNotifToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic) bool shouldDropAllConfigurations;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)_behaviorOptionsChanged:(id)arg1;
- (void)_dropAllConfigurations;
- (void)_fetchContainerSpecificInfoForOperation:(id)arg1 requireUserIDs:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_fetchGlobalConfigForOperation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_reallyDropAllConfigurations;
- (id)_uniqueStringForContainerAndAccount:(id)arg1;
- (void)_writeOutiCloudHostnames:(id)arg1;
- (void)configurationForOperation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)configurationQueue;
- (void)containerInfoForOperation:(id)arg1 requireUserIDs:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)containerSpecificInfoOperations;
- (id)containerSpecificInfoQueue;
- (id)containerSpecificInfos;
- (void)dealloc;
- (void)expireConfigurationForContext:(id)arg1;
- (void)expireGlobalConfiguration;
- (id)globalConfiguration;
- (id)globalConfigurationOps;
- (int)iCloudEnvNotifToken;
- (id)init;
- (id)propertyQueue;
- (void)setConfigurationQueue:(id)arg1;
- (void)setContainerSpecificInfoOperations:(id)arg1;
- (void)setContainerSpecificInfoQueue:(id)arg1;
- (void)setContainerSpecificInfos:(id)arg1;
- (void)setGlobalConfiguration:(id)arg1;
- (void)setGlobalConfigurationOps:(id)arg1;
- (void)setICloudEnvNotifToken:(int)arg1;
- (void)setPropertyQueue:(id)arg1;
- (void)setShouldDropAllConfigurations:(bool)arg1;
- (bool)shouldDropAllConfigurations;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;

@end