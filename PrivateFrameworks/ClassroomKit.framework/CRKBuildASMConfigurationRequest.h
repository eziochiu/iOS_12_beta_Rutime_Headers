/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKBuildASMConfigurationRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _courseIdentifier;
    NSDictionary * _existingASMConfiguration;
}

@property (nonatomic, retain) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, copy) NSDictionary *existingASMConfiguration;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)existingASMConfiguration;
- (id)initWithCoder:(id)arg1;
- (void)setCourseIdentifier:(id)arg1;
- (void)setExistingASMConfiguration:(id)arg1;

@end
