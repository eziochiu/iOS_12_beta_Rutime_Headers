/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKUsageStatistics : NSObject

+ (void)clearDistributionKey:(id)arg1;
+ (void)incrementKey:(id)arg1;
+ (void)logCourseCount:(unsigned long long)arg1;
+ (void)logDidAcceptJoinCourse;
+ (void)logDidAllowAction;
+ (void)logDidDeleteCourse;
+ (void)logDidDenyAction;
+ (void)logDidDenyJoinCourse;
+ (void)logDidEnterInvalidEnrollmentPin;
+ (void)logDidFailEnrollment;
+ (void)logDidModifyPermission;
+ (void)logDidShareDocument;
+ (void)logDidShareLink;
+ (void)logDidSuccessfullyEnroll;
+ (void)logWillAutomaticallyJoinCourses:(bool)arg1;
+ (void)pushDouble:(double)arg1 forKey:(id)arg2;
+ (void)resetConfigurationCounts;

@end
