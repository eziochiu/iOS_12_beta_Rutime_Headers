/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
 */

@interface CKSharedCourse : NSManagedObject

@property (nonatomic, retain) UIImage *courseCover;
@property (nonatomic, copy) NSString *courseCoverChecksum;
@property (nonatomic, copy) NSString *courseID;
@property (nonatomic) long long enrollmentType;
@property (nonatomic, copy) NSString *institutionName;
@property (nonatomic, copy) NSString *longName;
@property (nonatomic, retain) NSNumber *managedClassID;
@property (nonatomic, copy) NSString *shortName;

- (void)setCourseCover:(id)arg1;
- (void)setCourseID:(id)arg1;
- (void)setEnrollmentType:(long long)arg1;
- (void)setInstitutionName:(id)arg1;
- (void)setLongName:(id)arg1;
- (void)setManagedClassID:(id)arg1;
- (void)setShortName:(id)arg1;

@end
