/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonationFeedback.framework/ContactsDonationFeedback
 */

@interface CDFDonationFeedbackStore : NSObject {
    NSMutableSet * _hashes;
    NSUbiquitousKeyValueStore * _kvs;
    NSNumber * _resetGeneration;
    NSNumber * _resetTimestamp;
    NSData * _userSalt;
}

+ (id)log_t;

- (void).cxx_destruct;
- (void)_confirmOrRejectDonatedValues:(id)arg1 contactIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_handleHashesChangedNotification:(id)arg1;
- (void)_hashStrings:(id)arg1 salt:(id)arg2 digest:(char *)arg3;
- (id)_hashableStringsForDonation:(id)arg1 contactIdentifier:(id)arg2;
- (id)_hashesForDonation:(id)arg1 contactIdentifier:(id)arg2;
- (id)_loadHashesForKey:(id)arg1;
- (id)_loadResetInfo;
- (id)_loadSalt;
- (id)_randomDataOfLength:(unsigned long long)arg1;
- (void)_saveHashes:(id)arg1 key:(id)arg2;
- (void)_saveResetInfo;
- (id)_sha256BytesForStrings:(id)arg1 salt:(id)arg2;
- (void)confirmDonatedValues:(id)arg1 contactIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)description;
- (bool)donatedValueHasBeenConfirmedOrRejected:(id)arg1 contactIdentifier:(id)arg2;
- (id)init;
- (id)initWithKeyValueStore:(id)arg1;
- (void)rejectDonatedValues:(id)arg1 contactIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)reset;
- (void)synchronize;

@end
