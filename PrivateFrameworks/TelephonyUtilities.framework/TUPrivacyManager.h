/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUPrivacyManager : NSObject

+ (id)sharedPrivacyManager;

- (void)_handleBlockListChanged:(id)arg1;
- (void)addRule:(id)arg1;
- (id)allBlacklistRules;
- (void)dealloc;
- (id)init;
- (bool)isIncomingCommunicationBlockedForEmailAddress:(id)arg1;
- (bool)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1;
- (void)removeRule:(id)arg1;
- (void)setBlockIncomingCommunication:(bool)arg1 forEmailAddress:(id)arg2;
- (void)setBlockIncomingCommunication:(bool)arg1 forPhoneNumber:(id)arg2;

@end
