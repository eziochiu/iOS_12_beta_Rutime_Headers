/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchCloudEnrollmentStatusResultObject : CATTaskResultObject {
    long long  _cloudEnrollmentStatus;
}

@property (nonatomic) long long cloudEnrollmentStatus;

+ (bool)supportsSecureCoding;

- (long long)cloudEnrollmentStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCloudEnrollmentStatus:(long long)arg1;

@end
