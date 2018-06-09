/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCEDUClassroomPayload : MCPayload {
    CRKEDUPayload * _crk_payload;
    NSData * _resourcePayloadCertificatePersistentID;
    NSString * _resourcePayloadCertificateUUID;
}

@property (nonatomic, readonly, copy) NSDictionary *configuration;
@property (nonatomic, retain) CRKEDUPayload *crk_payload;
@property (nonatomic, retain) NSArray *leaderPayloadCertificateAnchorPersistentID;
@property (nonatomic, retain) NSArray *leaderPayloadCertificateAnchorUUID;
@property (nonatomic, retain) NSArray *memberPayloadCertificateAnchorPersistentID;
@property (nonatomic, retain) NSArray *memberPayloadCertificateAnchorUUID;
@property (nonatomic, retain) NSData *payloadCertificatePersistentID;
@property (nonatomic, copy) NSString *payloadCertificateUUID;
@property (nonatomic, retain) NSData *resourcePayloadCertificatePersistentID;
@property (nonatomic, copy) NSString *resourcePayloadCertificateUUID;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)configuration;
- (id)crk_payload;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)leaderPayloadCertificateAnchorPersistentID;
- (id)leaderPayloadCertificateAnchorUUID;
- (id)memberPayloadCertificateAnchorPersistentID;
- (id)memberPayloadCertificateAnchorUUID;
- (id)payloadCertificatePersistentID;
- (id)payloadCertificateUUID;
- (id)payloadDescriptionKeyValueSections;
- (id)resourcePayloadCertificatePersistentID;
- (id)resourcePayloadCertificateUUID;
- (void)setCrk_payload:(id)arg1;
- (void)setLeaderPayloadCertificateAnchorPersistentID:(id)arg1;
- (void)setLeaderPayloadCertificateAnchorUUID:(id)arg1;
- (void)setMemberPayloadCertificateAnchorPersistentID:(id)arg1;
- (void)setMemberPayloadCertificateAnchorUUID:(id)arg1;
- (void)setPayloadCertificatePersistentID:(id)arg1;
- (void)setPayloadCertificateUUID:(id)arg1;
- (void)setResourcePayloadCertificatePersistentID:(id)arg1;
- (void)setResourcePayloadCertificateUUID:(id)arg1;
- (id)stubDictionary;
- (id)title;
- (id)translatedCRKError:(id)arg1;

@end
