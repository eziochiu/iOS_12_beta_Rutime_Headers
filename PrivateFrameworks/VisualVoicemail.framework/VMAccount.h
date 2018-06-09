/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMAccount : NSObject {
    VMVoicemailManager * _voicemailManager;
}

@property (nonatomic, retain) VMVoicemailManager *voicemailManager;

- (void).cxx_destruct;
- (id)allVoicemailsWithFlags:(unsigned long long)arg1 withoutFlags:(unsigned long long)arg2;
- (void)changePassword:(id)arg1 fromPassword:(id)arg2;
- (bool)greetingAvailable;
- (void)handlePasswordNotificationResponse:(id)arg1;
- (id)init;
- (bool)isMessageWaiting;
- (bool)isOfflineDueToRoaming;
- (bool)isOnline;
- (bool)isSubscribed;
- (bool)mailboxRequiresSetup;
- (int)mailboxUsage;
- (void)moveVoicemailFromTrash:(id)arg1;
- (void)moveVoicemailToTrash:(id)arg1;
- (unsigned int)recentUnreadCount;
- (void)setGreetingType:(long long)arg1 withData:(id)arg2 duration:(unsigned int)arg3;
- (void)setProvisionalPassword:(id)arg1;
- (void)setVoicemailManager:(id)arg1;
- (void)synchronize:(bool)arg1;
- (unsigned int)unreadCount;
- (id)voicemailManager;
- (id)voicemailWithIdentifier:(unsigned long long)arg1;

@end
