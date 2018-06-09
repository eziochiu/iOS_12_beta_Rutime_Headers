/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKAggregateReporter : NSObject

+ (void)_addScalarValue1ToKey:(id)arg1;
+ (id)_buildVersion;
+ (long long)_delayInMSFromDateSynced:(id)arg1;
+ (void)_postGroupedDelayInMS:(long long)arg1 key:(id)arg2;
+ (void)_postGroupedSizeInBytes:(long long)arg1 key:(id)arg2;
+ (void)_postGroupedValue:(float)arg1 key:(id)arg2;
+ (void)_postRawValue:(long long)arg1 key:(id)arg2;
+ (bool)_reportingEnabled;
+ (void)reportAppBackgroundRefreshed;
+ (void)reportAppLaunched;
+ (void)reportAppResumed;
+ (void)reportCellRighSwipeActionChanged:(id)arg1;
+ (void)reportCellRighSwipeActionIgnored;
+ (void)reportCellSwipeActionTypeExecuted:(id)arg1;
+ (void)reportComposedMessageSendFailure;
+ (void)reportComposedMessageSizeInBytes:(unsigned long long)arg1;
+ (void)reportContentDisplayedForMessageWithId:(id)arg1 hasMainAlternative:(bool)arg2 hasTextAlternative:(bool)arg3;
+ (void)reportContentReceivedForMessageWithId:(id)arg1 sizeInBytes:(unsigned long long)arg2 fullSyncVersion:(unsigned long long)arg3 dateSynced:(id)arg4;
+ (void)reportFetchForBatchResponseLatency:(double)arg1;
+ (void)reportFetchForBatchedResponse:(bool)arg1;
+ (void)reportFetchOlderMessages;
+ (void)reportFullSyncRequestedFromWatch:(bool)arg1 corruptionDetected:(bool)arg2 migrationRelated:(bool)arg3 idsFailureRelated:(bool)arg4 fullSyncVersionMatchRelated:(bool)arg5;
+ (void)reportHaltSyncRequestedFromWatch:(bool)arg1;
+ (void)reportImageAttachmentReceivedForMessageWithId:(id)arg1 contentId:(id)arg2 sizeInBytes:(unsigned long long)arg3 fullSyncVersion:(unsigned long long)arg4 dateSynced:(id)arg5;
+ (void)reportMailAttachmentHandoffAdvertisedByNotification:(bool)arg1;
+ (void)reportMailAttachmentHandoffContinuedByNotification:(bool)arg1;
+ (void)reportMailLinkHandoffAdvertisedByNotification:(bool)arg1;
+ (void)reportMailLinkHandoffContinuedByNotification:(bool)arg1;
+ (void)reportMailboxSelectionChanged:(id)arg1 fromWatch:(bool)arg2;
+ (void)reportMessageDeletionCountFetchedOverCloudMessaging:(unsigned long long)arg1;
+ (void)reportMessageDeletionReceivedForMessageWithId:(id)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
+ (void)reportMessageReceivedWithId:(id)arg1 willGenerateNotification:(bool)arg2 fullSyncVersion:(unsigned long long)arg3 dateSynced:(id)arg4;
+ (void)reportMessageRepliedFromApp:(bool)arg1;
+ (void)reportMessageUpdateCountFetchedOverCloudMessaging:(unsigned long long)arg1;
+ (void)reportMessageUpdateReceivedForMessageWithId:(id)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
+ (void)reportMoreMessagesReceivedConversationSpecific:(bool)arg1 fullSyncVersion:(unsigned long long)arg2 dateSynced:(id)arg3;
+ (void)reportNewMessageComposedFromApp:(bool)arg1 mailto:(bool)arg2;
+ (void)reportNewMessageCountFetchedOverCloudMessaging:(unsigned long long)arg1;
+ (void)reportNotificationAction:(unsigned long long)arg1;
+ (void)reportNotificationReceivedOverCloudMessaging;
+ (void)reportOriginalMessageContentSizeInBytes:(unsigned long long)arg1;
+ (void)reportRenderedNotificationUsingLocalContent:(bool)arg1 mailboxSynced:(bool)arg2 messageSynced:(bool)arg3 contentDownloaded:(bool)arg4;

@end
