/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIdentityServiceFetchCertificatesResultObject : CATTaskResultObject {
    NSDictionary * _certificatesByPersonLinkID;
}

@property (nonatomic, copy) NSDictionary *certificatesByPersonLinkID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificatesByPersonLinkID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCertificatesByPersonLinkID:(id)arg1;

@end
