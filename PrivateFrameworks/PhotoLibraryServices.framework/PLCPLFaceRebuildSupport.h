/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCPLFaceRebuildSupport : NSObject {
    PLManagedAsset * _asset;
    NSManagedObjectContext * _context;
    int  _detectedFaceCount;
    int  _hiddenFaceCount;
    PLFaceRebuildHelper * _rebuildHelper;
    int  _rejectedFaceCount;
}

+ (void)rebuildDeferredFacesForAsset:(id)arg1 inManagedObjectContext:(id)arg2;

- (void)dealloc;
- (id)fetchDeferredFacesToRebuild;
- (id)fetchPersonForDeferredFace:(id)arg1;
- (id)initWithAsset:(id)arg1 managedObjectContext:(id)arg2;
- (void)rebuildAllFaces;
- (void)rebuildDetectedFace:(id)arg1;
- (void)rebuildFace:(id)arg1;
- (void)rebuildHiddenFace:(id)arg1;
- (void)rebuildRejectedFace:(id)arg1;

@end
