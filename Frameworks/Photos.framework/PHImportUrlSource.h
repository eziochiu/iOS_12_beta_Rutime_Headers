/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportUrlSource : PHImportSource {
    NSObject<OS_dispatch_queue> * _activeAssetDataRequestQueue;
    NSArray * _baseNames;
    NSObject<OS_dispatch_semaphore> * _concurrentAssetDataRequestSemaphore;
    bool  _isReadonlyVolume;
    NSMutableDictionary * _pathsByFileBaseName;
    NSObject<OS_dispatch_queue> * _pathsByFileBaseNameAccess;
    NSObject<OS_dispatch_queue> * _pendingAssetDataRequestQueue;
    NSString * _prefix;
    NSArray * _urls;
}

@property (nonatomic, retain) NSArray *baseNames;
@property (nonatomic) bool isReadonlyVolume;
@property (nonatomic, retain) NSMutableDictionary *pathsByFileBaseName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pathsByFileBaseNameAccess;
@property (nonatomic, retain) NSString *prefix;
@property (nonatomic, retain) NSArray *urls;

+ (bool)treatAsReadonlyVolume:(id)arg1;

- (void).cxx_destruct;
- (id)baseNames;
- (void)beginWork;
- (void)dealloc;
- (void)dispatchAssetDataRequestAsync:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)endWork;
- (id)initWithUrls:(id)arg1;
- (bool)isAvailable;
- (bool)isReadonlyVolume;
- (id)name;
- (id)pathsByFileBaseName;
- (id)pathsByFileBaseNameAccess;
- (id)prefix;
- (id)processItem:(id)arg1 applyingBlock:(id /* block */)arg2;
- (id)productKind;
- (void)setBaseNames:(id)arg1;
- (void)setIsReadonlyVolume:(bool)arg1;
- (void)setPathsByFileBaseName:(id)arg1;
- (void)setPathsByFileBaseNameAccess:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setUrls:(id)arg1;
- (id)urls;

@end
