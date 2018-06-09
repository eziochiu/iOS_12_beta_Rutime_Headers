/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGStorageContact : NSObject {
    SGContactDetailsHolder * _internalDetectedDetails;
    long long  _masterEntityId;
    NSMutableSet * _profiles;
    SGRecordId * _recordId;
}

@property (retain) SGContactDetailsHolder *internalDetectedDetails;
@property (nonatomic, readonly) long long masterEntityId;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) SGRecordId *recordId;

+ (id)contactFromContactEntity:(id)arg1;
+ (id)contactWithMasterEntityId:(long long)arg1;
+ (id)mergeAll:(id)arg1;
+ (void)subtractDetailsFromSGContact:(id)arg1 thatMatchCNContact:(id)arg2;

- (void).cxx_destruct;
- (void)addProfile:(id)arg1;
- (id)allNames;
- (id)bestProfile;
- (bool)canMerge:(id)arg1;
- (id)convertToContact:(id)arg1;
- (id)convertToContact:(id)arg1 sourceEntity:(id)arg2 enrichments:(id)arg3;
- (id)description;
- (bool)hasProfileFromInteraction;
- (bool)hasProfileFromTextMessage;
- (unsigned long long)hash;
- (id)init;
- (id)internalDetectedDetails;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStorageContact:(id)arg1;
- (id)loadAddressDetailsFrom:(id)arg1;
- (id)loadAllDetailsFrom:(id)arg1;
- (id)loadEmailAddressDetailsFrom:(id)arg1;
- (id)loadPhoneDetailsFrom:(id)arg1;
- (long long)masterEntityId;
- (void)merge:(id)arg1;
- (id)name;
- (id)profiles;
- (id)recordId;
- (void)reload;
- (void)setInternalDetectedDetails:(id)arg1;

@end
