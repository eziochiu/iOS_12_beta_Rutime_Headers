/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSProgress : NSObject <NSProgressPublisher, VSAccountSerializationResult> {
    NSMutableDictionary * _acknowledgementHandlersByLowercaseBundleID;
    id /* block */  _cancellationHandler;
    NSMutableSet * _children;
    unsigned long long  _flags;
    NSMutableDictionary * _lastNotificationTimesByKey;
    NSLock * _lock;
    NSProgress * _parent;
    id /* block */  _pausingHandler;
    id /* block */  _prioritizationHandler;
    NSString * _publisherID;
    long long  _reserved4;
    id  _reserved5;
    long long  _reserved6;
    long long  _reserved7;
    long long  _reserved8;
    id /* block */  _resumingHandler;
    NSMutableDictionary * _userInfoLastNotificationTimesByKey;
    id  _userInfoProxy;
    id  _values;
}

@property (getter=isCancellable) bool cancellable;
@property (copy) id /* block */ cancellationHandler;
@property (getter=isCancelled, readonly) bool cancelled;
@property long long completedUnitCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *estimatedTimeRemaining;
@property (copy) NSNumber *fileCompletedCount;
@property (copy) NSString *fileOperationKind;
@property (copy) NSNumber *fileTotalCount;
@property (copy) NSURL *fileURL;
@property (getter=isFinished, readonly) bool finished;
@property (readonly) double fractionCompleted;
@property (readonly) unsigned long long hash;
@property (getter=isIndeterminate, readonly) bool indeterminate;
@property (nonatomic) unsigned long long installPhase;
@property (nonatomic, readonly) NSString *installPhaseString;
@property (nonatomic) unsigned long long installState;
@property (copy) NSString *kind;
@property (copy) NSString *localizedAdditionalDescription;
@property (copy) NSString *localizedDescription;
@property (getter=isOld, readonly) bool old;
@property (getter=isPausable) bool pausable;
@property (getter=isPaused, readonly) bool paused;
@property (copy) id /* block */ pausingHandler;
@property (copy) id /* block */ resumingHandler;
@property (nonatomic, readonly) NSString *sf_bundleID;
@property (nonatomic, readonly) NSString *sf_error;
@property (nonatomic, readonly) NSString *sf_personRealName;
@property (nonatomic, readonly) NSString *sf_publishingKey;
@property (nonatomic, readonly) NSString *sf_sessionID;
@property (nonatomic) long long sf_transferState;
@property (readonly) Class superclass;
@property (copy) NSNumber *throughput;
@property long long totalUnitCount;
@property (readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_addSubscriberForCategory:(id)arg1 usingPublishingHandler:(id /* block */)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)_addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id /* block */)arg2;
+ (id)_publisherInterface;
+ (id)_registrarInterface;
+ (void)_removeSubscriber:(id)arg1;
+ (id)_serverConnection;
+ (id)_subscriberInterface;
+ (id)addSubscriberForFileURL:(id)arg1 usingBlock:(id /* block */)arg2;
+ (id)addSubscriberForFileURL:(id)arg1 withPublishingHandler:(id /* block */)arg2;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)currentProgress;
+ (id)discreteProgressWithTotalUnitCount:(long long)arg1;
+ (id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (id)progressWithTotalUnitCount:(long long)arg1;
+ (id)progressWithTotalUnitCount:(long long)arg1 parent:(id)arg2 pendingUnitCount:(long long)arg3;
+ (void)removeSubscriber:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)_acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)_addCompletedUnitCount:(long long)arg1;
- (void)_addImplicitChild:(id)arg1;
- (bool)_adoptChildUserInfo;
- (id)_indentedDescription:(unsigned long long)arg1;
- (id)_initWithValues:(id)arg1;
- (void)_notifyRemoteObserversOfUserInfoValueForKey:(id)arg1;
- (void)_notifyRemoteObserversOfValueForKeys:(id)arg1;
- (id)_parent;
- (void)_publish;
- (id)_publishingAppBundleIdentifier;
- (void)_receiveProgressMessage:(id)arg1 forSequence:(unsigned long long)arg2;
- (double)_remoteFractionCompleted;
- (void)_setAcknowledgementHandler:(id /* block */)arg1 forAppBundleIdentifier:(id)arg2;
- (void)_setCompletedUnitCount:(long long)arg1 totalUnitCount:(long long)arg2;
- (void)_setParent:(id)arg1 portion:(long long)arg2;
- (void)_setRemoteUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)_setRemoteValues:(id)arg1 forKeys:(id)arg2;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(bool)arg3;
- (id)_setValueForKeys:(id /* block */)arg1 settingBlock:(id /* block */)arg2;
- (void)_unpublish;
- (void)_updateChild:(id)arg1 fraction:(id)arg2 portion:(long long)arg3;
- (void)_updateFractionCompleted:(id)arg1;
- (void)acknowledge;
- (void)acknowledgeWithSuccess:(bool)arg1;
- (id /* block */)acknowledgementHandlerForAppBundleIdentifier:(id)arg1;
- (void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2;
- (oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(bool)arg2;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1 inBlock:(id /* block */)arg2;
- (id)byteCompletedCount;
- (id)byteTotalCount;
- (void)cancel;
- (id /* block */)cancellationHandler;
- (long long)completedUnitCount;
- (void)dealloc;
- (id)description;
- (id)estimatedTimeRemaining;
- (id)fileCompletedCount;
- (id)fileOperationKind;
- (id)fileTotalCount;
- (id)fileURL;
- (double)fractionCompleted;
- (void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;
- (bool)isCancellable;
- (bool)isCancelled;
- (bool)isFinished;
- (bool)isIndeterminate;
- (bool)isOld;
- (bool)isPausable;
- (bool)isPaused;
- (bool)isPrioritizable;
- (id)kind;
- (id)localizedAdditionalDescription;
- (id)localizedDescription;
- (unsigned long long)ownedDictionaryCount;
- (id)ownedDictionaryKeyEnumerator;
- (id)ownedDictionaryObjectForKey:(id)arg1;
- (void)pause;
- (id /* block */)pausingHandler;
- (void)performAsCurrentWithPendingUnitCount:(long long)arg1 usingBlock:(id /* block */)arg2;
- (id /* block */)prioritizationHandler;
- (oneway void)prioritize;
- (void)publish;
- (void)resignCurrent;
- (void)resume;
- (id /* block */)resumingHandler;
- (void)setAcknowledgementHandler:(id /* block */)arg1 forAppBundleIdentifier:(id)arg2;
- (void)setByteCompletedCount:(id)arg1;
- (void)setByteTotalCount:(id)arg1;
- (void)setCancellable:(bool)arg1;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setEstimatedTimeRemaining:(id)arg1;
- (void)setFileCompletedCount:(id)arg1;
- (void)setFileOperationKind:(id)arg1;
- (void)setFileTotalCount:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setLocalizedAdditionalDescription:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setPausable:(bool)arg1;
- (void)setPausingHandler:(id /* block */)arg1;
- (void)setPrioritizable:(bool)arg1;
- (void)setPrioritizationHandler:(id /* block */)arg1;
- (void)setResumingHandler:(id /* block */)arg1;
- (void)setThroughput:(id)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)set_adoptChildUserInfo:(bool)arg1;
- (id)throughput;
- (long long)totalUnitCount;
- (void)unpublish;
- (id)userInfo;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)childProgressForBundleID:(id)arg1 andPhase:(unsigned long long)arg2;
+ (id)keyPathsForValuesAffectingInstallPhase;
+ (id)keyPathsForValuesAffectingInstallState;
+ (id)publishingKeyForApp:(id)arg1 withPhase:(unsigned long long)arg2;

- (id)_LSDescription;
- (void)_LSResume;
- (id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned long long)arg3;
- (unsigned long long)installPhase;
- (id)installPhaseString;
- (unsigned long long)installState;
- (void)setInstallPhase:(unsigned long long)arg1;
- (void)setInstallState:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

- (id)fp_fileOperationKind;
- (bool)fp_isOfFileOperationKind:(id)arg1;
- (void)fp_setFileOperationKind:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (id)brc_dumpDescription;
- (void)brc_publish;
- (void)brc_unpublish;

// Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore

- (bool)doc_isPending;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_mirroredProgressForReceivingOverXPC:(id*)arg1;
+ (id)_geo_mirroredProgressFromReceivingXPCEndpoint:(id)arg1;
+ (id)_geo_mirroredProgressFromReportingXPCEndpoint:(id)arg1 totalUnitCount:(long long)arg2;
+ (id)_geo_newReportingXPCEndpointMirroringProgress:(id)arg1;
+ (id)_geo_progressMirroringProgress:(id)arg1;

- (void)_geo_mirroredProgressReplaceObservedProgressWith:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hd_progressMirroringProgress:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)_px_performSimulatedWorkStep:(long long)arg1;
- (void)px_appendChild:(id)arg1 withPendingUnitCount:(long long)arg2;
- (void)px_appendSimulatedProgressWithDuration:(double)arg1 pendingUnitCount:(short)arg2;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing

+ (id)sf_publishingKeyForApp:(id)arg1 sessionID:(id)arg2;
+ (id)sf_transferStateAsString:(long long)arg1;

- (void)setSf_transferState:(long long)arg1;
- (id)sf_bundleID;
- (id)sf_error;
- (void)sf_failedWithError:(id)arg1;
- (id)sf_initWithAppBundle:(id)arg1 sessionID:(id)arg2 andPersonRealName:(id)arg3;
- (id)sf_initWithFileURL:(id)arg1;
- (id)sf_personRealName;
- (id)sf_publishingKey;
- (id)sf_sessionID;
- (long long)sf_transferState;

@end