/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKDefaultSettingsUIVisibilityProvider : NSObject <CRKCourseEnrollmentControllerDelegate, CRKSettingsUIVisibilityProvider> {
    bool  _settingsUIVisible;
    CRKCourseEnrollmentController * mEnrollmentController;
    CRKUserDefaultsObject * mPreviouslyCloudEnrolled;
    CRKUserDefaultsObject * mPreviouslyEnrolled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool settingsUIVisible;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectToDaemon;
- (void)enrollmentControllerDidUpdateCloudEnrollmentStatus:(id)arg1;
- (void)enrollmentControllerDidUpdateCourses:(id)arg1;
- (void)enrollmentControllerDidUpdateInvitations:(id)arg1;
- (id)init;
- (void)setSettingsUIVisible:(bool)arg1;
- (bool)settingsUIVisible;
- (void)updateVisibilityState;

@end
