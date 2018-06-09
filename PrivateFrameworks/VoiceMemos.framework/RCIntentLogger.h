/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCIntentLogger : NSObject

+ (void)deleteInteractionsWithUUID:(id)arg1;
+ (void)deleteInteractionsWithUUIDs:(id)arg1;
+ (void)donateInteraction:(id)arg1;
+ (void)donatePlaybackVoiceMemoIntentWithUUID:(id)arg1;
+ (void)donateRecordVoiceMemoIntentWithUUID:(id)arg1;
+ (id)interactionForPlaybackVoiceMemo;
+ (id)interactionForRecordVoiceMemo;

@end
