/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKInitiateParticipantVettingOperationInfo : CKOperationInfo {
    NSString * _address;
    NSString * _participantID;
    CKShareMetadata * _shareMetadata;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *participantID;
@property (nonatomic, retain) CKShareMetadata *shareMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)participantID;
- (void)setAddress:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setShareMetadata:(id)arg1;
- (id)shareMetadata;

@end