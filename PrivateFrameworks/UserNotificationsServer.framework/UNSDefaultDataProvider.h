/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSDefaultDataProvider : NSObject <BBRemoteDataProvider, UNSNotificationCategoryRepositoryObserver, UNSNotificationRepositoryObserver, UNSNotificationTopicRepositoryObserver> {
    UNSApplicationLauncher * _appLauncher;
    UNSAttachmentsService * _attachmentsService;
    BSCFBundle * _bundle;
    UNSNotificationCategoryRepository * _categoryRepository;
    NSMutableDictionary * _categoryToParamSubType;
    UNSDaemonLauncher * _daemonLauncher;
    UNSNotificationRepository * _notificationRepository;
    UNSNotificationSourceDescription * _notificationSourceDescription;
    NSMutableDictionary * _primaryAttachmentMetadata;
    NSMutableDictionary * _primaryAttachments;
    BBDataProviderProxy * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    BBSectionIcon * _sectionIcon;
    BBSectionInfo * _sectionInfo;
    bool  _suppressUserAuthorizationPrompt;
    UNSNotificationTopicRepository * _topicRepository;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BBDataProviderProxy *proxy;
@property (nonatomic, retain) BBSectionInfo *sectionInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionFromActionRecord:(id)arg1;
- (id)_actionsFromActionRecords:(id)arg1;
- (void)_addAttachments:(id)arg1 toBulletinRequest:(id)arg2;
- (id)_allBulletinsWithMaxCount:(unsigned long long)arg1 sinceDate:(id)arg2;
- (id)_allCategories;
- (id)_categoryForIdentifier:(id)arg1;
- (id)_defaultActionWithNotification:(id)arg1;
- (id)_dismissActionForCategory:(id)arg1;
- (void)_handleBulletinActionResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)_isPushDataProvider;
- (bool)_isResourceValidForPath:(id)arg1 withContainerPath:(id)arg2;
- (id)_localizeClientString:(id)arg1 inBundle:(id)arg2;
- (id)_pathForSoundName:(id)arg1;
- (void)_queue_addBulletinForNotification:(id)arg1;
- (id)_queue_applicableSectionInfosForSubsectionIDs:(id)arg1;
- (id)_queue_bulletinForNotification:(id)arg1;
- (void)_queue_modifyBulletinForNotification:(id)arg1;
- (void)_queue_notificationRepositoryDidPerformUpdates:(id)arg1;
- (bool)_queue_supportsCriticalAlertsForSubsectionIDs:(id)arg1;
- (void)_queue_withdrawBulletinForNotification:(id)arg1;
- (id)_sectionIconForNotificationSourceDescription:(id)arg1;
- (id)_sectionIconVariantForImageName:(id)arg1 bundlePath:(id)arg2 format:(long long)arg3;
- (id)_silenceActionForCategory:(id)arg1;
- (id)_supplementaryActionsForForCategoryRecord:(id)arg1;
- (id)_topicForIdentifier:(id)arg1;
- (id)_unarchiveNotificationFromData:(id)arg1;
- (float)attachmentAspectRatioForRecordID:(id)arg1;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (void)categoryRepository:(id)arg1 didChangeCategoriesForBundleIdentifier:(id)arg2;
- (id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)defaultSectionInfo;
- (id)defaultSubsectionInfos;
- (id)displayNameForSubsectionID:(id)arg1;
- (void)handleBulletinActionResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithNotificationSourceDescription:(id)arg1 applicationLauncher:(id)arg2 daemonLauncher:(id)arg3 categoryRepository:(id)arg4 notificationRepository:(id)arg5 topicRepository:(id)arg6 attachmentsService:(id)arg7 queue:(id)arg8;
- (void)invalidate;
- (id)notificationRecords;
- (void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;
- (id)primaryAttachmentDataForRecordID:(id)arg1;
- (id)proxy;
- (id)sectionDisplayName;
- (id)sectionIcon;
- (id)sectionIdentifier;
- (id)sectionInfo;
- (id)sectionParameters;
- (void)setNotificationSourceDescription:(id)arg1;
- (void)setProxy:(id)arg1;
- (void)setSectionInfo:(id)arg1;
- (id)sortDescriptors;
- (bool)syncsBulletinDismissal;
- (void)topicRepository:(id)arg1 didChangeTopicsForBundleIdentifier:(id)arg2;
- (void)uninstall;
- (id)universalSectionIdentifier;

@end
