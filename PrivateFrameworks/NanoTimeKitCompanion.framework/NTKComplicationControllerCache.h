/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationControllerCache : NSObject <NTKFaceCollectionObserver, NTKFaceObserver> {
    NSMutableDictionary * _controllers;
    NSMutableDictionary * _controllersToOwningFace;
    NSMapTable * _faceToLegacyControllers;
    NTKFaceCollection * _libraryCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_addComplicationsForFace:(id)arg1;
- (void)_purge;
- (void)_removeComplicationsForFace:(id)arg1;
- (void)_updateComplicationsForFace:(id)arg1;
- (id)controllerForComplication:(id)arg1 family:(long long)arg2 face:(id)arg3 create:(id /* block */)arg4;
- (void)dealloc;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (id)init;
- (id)legacyControllerForComplication:(id)arg1 face:(id)arg2 slot:(id)arg3 create:(id /* block */)arg4;
- (void)setLibraryCollection:(id)arg1;

@end
