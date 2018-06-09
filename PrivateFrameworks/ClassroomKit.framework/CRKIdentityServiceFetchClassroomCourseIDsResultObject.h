/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIdentityServiceFetchClassroomCourseIDsResultObject : CATTaskResultObject {
    NSDictionary * _classroomCourseIDsByASMCourseID;
}

@property (nonatomic, copy) NSDictionary *classroomCourseIDsByASMCourseID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classroomCourseIDsByASMCourseID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setClassroomCourseIDsByASMCourseID:(id)arg1;

@end
