/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKEDUPayload : NSObject {
    NSArray * _departments;
    NSArray * _deviceGroups;
    NSArray * _groups;
    NSArray * _leaderPayloadCertificateAnchorPersistentID;
    NSArray * _leaderPayloadCertificateAnchorUUID;
    NSArray * _memberPayloadCertificateAnchorPersistentID;
    NSArray * _memberPayloadCertificateAnchorUUID;
    NSString * _organizationName;
    NSString * _organizationUUID;
    NSData * _payloadCertificatePersistentID;
    NSString * _payloadCertificateUUID;
    NSString * _payloadDescriptionName;
    NSString * _payloadDisplayName;
    NSData * _resourcePayloadCertificatePersistentID;
    NSString * _resourcePayloadCertificateUUID;
    bool  _screenObservationPermissionModificationAllowed;
    NSString * _userIdentifier;
    NSArray * _users;
}

@property (nonatomic, readonly, copy) NSDictionary *configuration;
@property (nonatomic, retain) NSArray *departments;
@property (nonatomic, retain) NSArray *deviceGroups;
@property (nonatomic, retain) NSArray *groups;
@property (nonatomic, retain) NSArray *leaderPayloadCertificateAnchorPersistentID;
@property (nonatomic, retain) NSArray *leaderPayloadCertificateAnchorUUID;
@property (nonatomic, retain) NSArray *memberPayloadCertificateAnchorPersistentID;
@property (nonatomic, retain) NSArray *memberPayloadCertificateAnchorUUID;
@property (nonatomic, retain) NSString *organizationName;
@property (nonatomic, retain) NSString *organizationUUID;
@property (nonatomic, retain) NSData *payloadCertificatePersistentID;
@property (nonatomic, retain) NSString *payloadCertificateUUID;
@property (nonatomic, retain) NSString *payloadDescriptionName;
@property (nonatomic, retain) NSString *payloadDisplayName;
@property (nonatomic, retain) NSData *resourcePayloadCertificatePersistentID;
@property (nonatomic, retain) NSString *resourcePayloadCertificateUUID;
@property (nonatomic) bool screenObservationPermissionModificationAllowed;
@property (nonatomic, retain) NSString *userIdentifier;
@property (nonatomic, retain) NSArray *users;

- (void).cxx_destruct;
- (id)configuration;
- (id)departments;
- (id)description;
- (id)deviceGroups;
- (id)groups;
- (id)initWithDictionary:(id)arg1 isStub:(bool)arg2 error:(id*)arg3;
- (id)leaderPayloadCertificateAnchorPersistentID;
- (id)leaderPayloadCertificateAnchorUUID;
- (id)memberPayloadCertificateAnchorPersistentID;
- (id)memberPayloadCertificateAnchorUUID;
- (id)organizationName;
- (id)organizationUUID;
- (id)parseDepartmentFromDictionary:(id)arg1 isStub:(bool)arg2 outError:(id*)arg3;
- (id)parseDeviceGroupFromDictionary:(id)arg1 isStub:(bool)arg2 outError:(id*)arg3;
- (bool)parseDictionary:(id)arg1 isStub:(bool)arg2 outError:(id*)arg3;
- (id)parseGroupFromDictionary:(id)arg1 isStub:(bool)arg2 outError:(id*)arg3;
- (id)parseUserFromDictionary:(id)arg1 isStub:(bool)arg2 outError:(id*)arg3;
- (id)payloadCertificatePersistentID;
- (id)payloadCertificateUUID;
- (id)payloadDescriptionName;
- (id)payloadDisplayName;
- (id)resourcePayloadCertificatePersistentID;
- (id)resourcePayloadCertificateUUID;
- (bool)screenObservationPermissionModificationAllowed;
- (void)setDepartments:(id)arg1;
- (void)setDeviceGroups:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setLeaderPayloadCertificateAnchorPersistentID:(id)arg1;
- (void)setLeaderPayloadCertificateAnchorUUID:(id)arg1;
- (void)setMemberPayloadCertificateAnchorPersistentID:(id)arg1;
- (void)setMemberPayloadCertificateAnchorUUID:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setOrganizationUUID:(id)arg1;
- (void)setPayloadCertificatePersistentID:(id)arg1;
- (void)setPayloadCertificateUUID:(id)arg1;
- (void)setPayloadDescriptionName:(id)arg1;
- (void)setPayloadDisplayName:(id)arg1;
- (void)setResourcePayloadCertificatePersistentID:(id)arg1;
- (void)setResourcePayloadCertificateUUID:(id)arg1;
- (void)setScreenObservationPermissionModificationAllowed:(bool)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUsers:(id)arg1;
- (id)userIdentifier;
- (id)users;

@end
