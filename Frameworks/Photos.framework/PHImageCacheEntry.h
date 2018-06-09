/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageCacheEntry : NSObject <PHRecyclableObject> {
    NSError * _error;
    NSMutableArray * _handlersWaitingOnResult;
    struct CGImage { } * _imageRef;
    int  _imageRequestIDForPopulatingCache;
    bool  _isCancelled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int imageRequestIDForPopulatingCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callWaiters:(id)arg1 wasCancelled:(bool)arg2;
- (void)addNotifyHandler:(id /* block */)arg1;
- (void)cancel;
- (struct CGImage { }*)createImageRef;
- (void)dealloc;
- (int)imageRequestIDForPopulatingCache;
- (id)init;
- (bool)isCancelled;
- (void)populateWithImageRef:(struct CGImage { }*)arg1 error:(id)arg2 unlockBeforeNotfiyingWaiters:(struct os_unfair_lock_s { unsigned int x1; }*)arg3;
- (void)prepareForReuse;
- (void)setImageRequestIDForPopulatingCache:(int)arg1;

@end
