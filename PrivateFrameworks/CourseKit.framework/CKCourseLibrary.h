/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
 */

@interface CKCourseLibrary : NSObject {
    NSManagedObjectContext * _moc;
    CKSharedDatabase * _sharedDatabase;
}

@property (nonatomic, retain) NSManagedObjectContext *moc;
@property (nonatomic, retain) CKSharedDatabase *sharedDatabase;

+ (bool)isCourseLibraryAvailable;
+ (bool)openCourse:(id)arg1;
+ (id)sharedCourseLibrary;
+ (id)sharedDocumentsDirectory;

- (void).cxx_destruct;
- (id)allCourses;
- (id)courseLibrayVersion;
- (id)courseWithCourseID:(id)arg1;
- (id)init;
- (id)moc;
- (void)setMoc:(id)arg1;
- (void)setSharedDatabase:(id)arg1;
- (id)sharedDatabase;

@end
