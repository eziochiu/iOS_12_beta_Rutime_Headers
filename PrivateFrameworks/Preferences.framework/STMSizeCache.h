/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface STMSizeCache : NSObject {
    unsigned long long  _cacheEventID;
    <STMSizeCacheDelegate> * _delegate;
    NSMutableDictionary * _itemsByPath;
    NSLock * _itemsLock;
    struct __CFString { } * _prefsKey;
    NSOperationQueue * _sizingQueue;
    long long  _totalSize;
}

@property (nonatomic) unsigned long long cacheEventID;
@property <STMSizeCacheDelegate> *delegate;
@property (readonly) unsigned long long itemCount;
@property (readonly) NSDictionary *itemSizes;
@property (nonatomic, retain) NSArray *items;
@property (retain) NSLock *itemsLock;
@property long long totalSize;
@property (readonly) long long totalSizeOfItems;

- (void).cxx_destruct;
- (void)_flushCache:(id)arg1;
- (void)_sizeEntry:(id)arg1;
- (void)_sizePath:(id)arg1;
- (unsigned long long)cacheEventID;
- (id)createCacheEntryForPath:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)flushCacheToPref;
- (id)initWithPrefsKey:(id)arg1;
- (unsigned long long)itemCount;
- (id)itemSizes;
- (id)items;
- (id)itemsContainedBy:(id)arg1;
- (id)itemsContaining:(id)arg1;
- (id)itemsLock;
- (void)loadCacheFromPref;
- (void)notifyItemsChanged;
- (void)notifySizesChanged;
- (void)removeItem:(id)arg1;
- (void)setCacheEventID:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setItemsLock:(id)arg1;
- (void)setTotalSize:(long long)arg1;
- (void)sizeAllItems;
- (void)sizeItem:(id)arg1;
- (void)sizeItems:(id)arg1;
- (id)sizeOfItem:(id)arg1;
- (long long)totalSize;
- (long long)totalSizeOfItems;
- (void)updateTotalSize;

@end
