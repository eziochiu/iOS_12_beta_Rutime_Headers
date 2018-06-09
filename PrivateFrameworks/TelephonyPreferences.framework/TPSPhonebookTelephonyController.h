/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

@interface TPSPhonebookTelephonyController : TPSTelephonyController <CoreTelephonyClientSuppServicesDelegate> {
    int  _pendingPhoneBookNameSelection;
    long long  _phoneBookEntryCount;
    CTPhoneNumberInfo * _phoneNumberInfo;
    int  _selectedPhoneBookName;
    CTXPCServiceSubscriptionContext * _subscriptionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int pendingPhoneBookNameSelection;
@property (nonatomic) long long phoneBookEntryCount;
@property (nonatomic, retain) CTPhoneNumberInfo *phoneNumberInfo;
@property (nonatomic, readonly) int selectedPhoneBookName;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchPhoneBookEntryAtIndex:(int)arg1 completion:(id /* block */)arg2;
- (void)fetchPhoneBookEntryCount;
- (void)fetchPhoneBookEntryCountWithCompletion:(id /* block */)arg1;
- (void)fetchPhoneNumberInfo;
- (void)fetchPhoneNumberInfoWithCompletion:(id /* block */)arg1;
- (id)getPhoneBookEntryAtIndex:(int)arg1;
- (id)getPhoneBookEntryAtIndex:(int)arg1 error:(id*)arg2;
- (long long)getPhoneBookEntryCount;
- (long long)getPhoneBookEntryCountWithError:(id*)arg1;
- (id)getPhoneNumberInfo;
- (id)getPhoneNumberInfoWithError:(id*)arg1;
- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (int)pendingPhoneBookNameSelection;
- (long long)phoneBookEntryCount;
- (void)phoneBookSelected:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (id)phoneNumberInfo;
- (void)savePhoneBookEntryAtIndex:(int)arg1 withContactName:(id)arg2 contactNumber:(id)arg3;
- (void)savePhoneBookEntryAtIndex:(int)arg1 withContactName:(id)arg2 contactNumber:(id)arg3 completion:(id /* block */)arg4;
- (void)selectPhoneBookWithName:(int)arg1 password:(id)arg2;
- (void)selectPhoneBookWithName:(int)arg1 password:(id)arg2 completion:(id /* block */)arg3;
- (int)selectedPhoneBookName;
- (void)setPendingPhoneBookNameSelection:(int)arg1;
- (void)setPhoneBookEntryCount:(long long)arg1;
- (void)setPhoneNumberInfo:(id)arg1;
- (void)setSelectedPhoneBookName:(int)arg1;
- (id)subscriptionContext;
- (void)updatePhoneNumberInfo:(id)arg1 label:(id)arg2 number:(id)arg3 completion:(id /* block */)arg4;

@end
