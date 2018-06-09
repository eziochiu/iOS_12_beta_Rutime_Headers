/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIdentityServiceFetchCertificatesRequest : CATTaskRequest {
    NSArray * _personLinkIDs;
}

@property (nonatomic, copy) NSArray *personLinkIDs;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)personLinkIDs;
- (void)setPersonLinkIDs:(id)arg1;

@end
