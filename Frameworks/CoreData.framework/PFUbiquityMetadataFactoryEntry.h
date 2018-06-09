/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityMetadataFactoryEntry : NSObject {
    PFUbiquityMetadataFactoryFilePresenter * _filePresenter;
    PFUbiquityLocation * _metadataStoreFileLocation;
    NSPersistentStoreCoordinator * _psc;
    NSPersistentStore * _store;
}

@property (nonatomic, readonly) PFUbiquityMetadataFactoryFilePresenter *filePresenter;
@property (nonatomic, readonly) PFUbiquityLocation *metadataStoreFileLocation;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *psc;
@property (nonatomic, readonly) NSPersistentStore *store;

- (void)dealloc;
- (id)description;
- (id)filePresenter;
- (id)init;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
- (bool)initializePersistentStoreCoordinator:(id*)arg1;
- (id)metadataStoreFileLocation;
- (id)psc;
- (id)store;

@end
