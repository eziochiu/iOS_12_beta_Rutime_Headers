/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibraryUsabilityCriteriaDataSource : NSOrderedSet <PLPersonClusterUsabilityCriteriaDataSource> {
    PLPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)fetchResults;
- (id)fetchUnverifiedPersonsSortedByFaceCount;
- (unsigned long long)fetchVerifiedPersonsCount;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;

@end
