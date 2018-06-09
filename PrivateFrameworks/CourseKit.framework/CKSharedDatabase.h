/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
 */

@interface CKSharedDatabase : NSObject {
    NSManagedObjectContext * _mainManagedObjectContext;
    NSManagedObjectModel * _managedObjectModel;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
}

@property (nonatomic, retain) NSManagedObjectContext *mainManagedObjectContext;
@property (nonatomic, retain) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (id)databaseURL;

- (void).cxx_destruct;
- (id)mainManagedObjectContext;
- (id)managedObjectModel;
- (id)newManagedObjectContext;
- (id)persistentStoreCoordinator;
- (void)setMainManagedObjectContext:(id)arg1;
- (void)setManagedObjectModel:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (id)urlForDataModel;

@end
