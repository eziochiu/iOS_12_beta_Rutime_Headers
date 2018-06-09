/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNReputationLogger : NSObject

+ (id)describeScore:(long long)arg1;
+ (id)obfuscate:(id)arg1;
+ (id)obfuscateHandle:(id)arg1;
+ (id)performanceLog;
+ (id)queryLog;

- (void)beginQueryForHandle:(id)arg1;
- (void)contactsConfirmedTrustOfEmailAddress;
- (void)contactsConfirmedTrustOfPhoneNumber;
- (void)contactsCouldNotConfirmTrustOfEmailAddress;
- (void)contactsCouldNotConfirmTrustOfPhoneNumber;
- (void)coreRecentsConfirmedTrust;
- (void)coreRecentsCouldNotConfirmTrust;
- (void)couldNotQueryContactsForEmailAddressWithError:(id)arg1;
- (void)couldNotQueryContactsForPhoneNumberWithError:(id)arg1;
- (void)couldNotQueryCoreRecentsWithError:(id)arg1;
- (void)queryForHandle:(id)arg1 didFailWithError:(id)arg2;
- (void)queryForHandle:(id)arg1 didFinishWithReputation:(id)arg2;
- (void)reputationUnestablished;
- (void)timeToResolve:(double)arg1;

@end
