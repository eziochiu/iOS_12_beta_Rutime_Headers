/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKComplicationNoContentImageFileCache : NSObject {
    bool  _cacheDirty;
    NSMutableDictionary * _complicationNoContentImages;
    NTKTaskScheduler * _taskScheduler;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dirtyCache;
- (bool)_flushCache;
- (void)dealloc;
- (id)imageForClientIdentifier:(id)arg1 family:(long long)arg2;
- (id)init;
- (id)noContentImagesForClientIdentifier:(id)arg1;
- (void)removeAllEntriesExceptThoseWithClientIdentifiers:(id)arg1;
- (void)setImage:(id)arg1 forClientIdentifier:(id)arg2 family:(long long)arg3;
- (void)setNoContentImages:(id)arg1 forClientIdentifier:(id)arg2;

@end
