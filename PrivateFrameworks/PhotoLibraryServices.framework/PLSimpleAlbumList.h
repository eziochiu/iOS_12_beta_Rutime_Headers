/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList> {
    NSOrderedSet * _containers;
}

@property (nonatomic, retain) NSOrderedSet *containers;
@property (nonatomic, readonly) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)canEditContainers;
- (id)containers;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (void)dealloc;
- (id)initWithAssetContainer:(id)arg1;
- (id)initWithAssetContainers:(id)arg1;
- (bool)isEmpty;
- (id)managedObjectContext;
- (id)photoLibrary;
- (void)setContainers:(id)arg1;

@end
