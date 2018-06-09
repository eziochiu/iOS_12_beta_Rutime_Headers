/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIdentityServiceFetchClassroomCourseIDsRequest : CATTaskRequest {
    NSArray * _ASMCourseIDs;
}

@property (nonatomic, copy) NSArray *ASMCourseIDs;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)ASMCourseIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setASMCourseIDs:(id)arg1;

@end
