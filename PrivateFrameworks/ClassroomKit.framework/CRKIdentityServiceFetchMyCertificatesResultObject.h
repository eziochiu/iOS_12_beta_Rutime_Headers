/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIdentityServiceFetchMyCertificatesResultObject : CATTaskResultObject {
    NSDictionary * _certificatesByID;
}

@property (nonatomic, copy) NSDictionary *certificatesByID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificatesByID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCertificatesByID:(id)arg1;

@end
