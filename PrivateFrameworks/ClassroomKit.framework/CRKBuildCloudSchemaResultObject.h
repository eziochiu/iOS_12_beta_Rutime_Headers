/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKBuildCloudSchemaResultObject : CATTaskResultObject {
    NSNumber * _success;
}

@property (nonatomic) NSNumber *success;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSuccess:(id)arg1;
- (id)success;

@end
