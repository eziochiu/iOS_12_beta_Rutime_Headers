/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject {
    NSString * _mdmIdentityCommonName;
    NSData * _mdmIdentityPersistentID;
}

@property (nonatomic, retain) NSString *mdmIdentityCommonName;
@property (nonatomic, retain) NSData *mdmIdentityPersistentID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mdmIdentityCommonName;
- (id)mdmIdentityPersistentID;
- (void)setMdmIdentityCommonName:(id)arg1;
- (void)setMdmIdentityPersistentID:(id)arg1;

@end
