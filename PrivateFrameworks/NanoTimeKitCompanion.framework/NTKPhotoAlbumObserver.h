/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKPhotoAlbumObserver : NSObject {
    NPTOPreference * _albumPreferenceObserver;
    NSHashTable * _observers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_startOrStopObservingIfNecessary;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
