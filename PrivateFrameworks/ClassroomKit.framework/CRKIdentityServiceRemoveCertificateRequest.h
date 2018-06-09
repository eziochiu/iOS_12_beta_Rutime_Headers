/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIdentityServiceRemoveCertificateRequest : CATTaskRequest {
    NSString * _certificateID;
}

@property (nonatomic, copy) NSString *certificateID;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)certificateID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCertificateID:(id)arg1;

@end
