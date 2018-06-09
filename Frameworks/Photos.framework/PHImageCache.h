/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageCache : NSObject {
    NSMutableDictionary * _cachesBySize;
    <PHImageCacheDelegate> * _delegate;
    PHRecyclableObjectVendor * _entryVendor;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic) <PHImageCacheDelegate> *delegate;

- (void).cxx_destruct;
- (id)_cacheForSizeKey:(id)arg1 createIfNecessary:(bool)arg2;
- (void)_removeEntry:(id)arg1;
- (id)delegate;
- (id)init;
- (void)pinEntryForSize:(struct CGSize { double x1; double x2; })arg1 assetUUID:(id)arg2 requestID:(int)arg3 postProcessingHandler:(id /* block */)arg4;
- (bool)populateEntryWithImage:(struct CGImage { }*)arg1 requestID:(int)arg2 forSize:(struct CGSize { double x1; double x2; })arg3 assetUUID:(id)arg4;
- (void)queryEntryForSize:(struct CGSize { double x1; double x2; })arg1 assetUUID:(id)arg2 didWaitForInFlightRequest:(bool*)arg3 didFindImage:(bool*)arg4 resultHandler:(id /* block */)arg5;
- (void)removeAllEntries;
- (void)removeEntriesForSize:(struct CGSize { double x1; double x2; })arg1 assetUUIDs:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
