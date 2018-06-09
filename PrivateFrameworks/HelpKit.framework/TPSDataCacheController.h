/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface TPSDataCacheController : NSObject {
    bool  _backgroundOriginUpdate;
    NSString * _cacheDirectory;
    unsigned long long  _cacheSize;
    NSMutableArray * _dataCacheArray;
    bool  _dataCacheDirty;
    NSMutableDictionary * _dataCacheMap;
    long long  _dataType;
    float  _defaultPriority;
    NSString * _identifier;
    NSString * _languageCode;
    unsigned long long  _maxDataCacheSize;
    NSMutableArray * _originFetchItems;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic) bool backgroundOriginUpdate;
@property (nonatomic, retain) NSString *cacheDirectory;
@property (nonatomic) unsigned long long cacheSize;
@property (nonatomic, retain) NSMutableArray *dataCacheArray;
@property (nonatomic) float defaultPriority;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSMutableArray *originFetchItems;

+ (void)setAppGroupIdentifier:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addDataCache:(id)arg1;
- (bool)backgroundOriginUpdate;
- (id)cacheDirectory;
- (id)cacheFileURLForDataCache:(id)arg1;
- (id)cacheFileURLForIdentifier:(id)arg1;
- (unsigned long long)cacheSize;
- (bool)cacheValidForIdentifier:(id)arg1 path:(id)arg2;
- (void)cancelAllOriginSessionItems;
- (void)commonInit;
- (void)createCacheDirectory;
- (id)dataCacheArray;
- (id)dataCacheForIdentifier:(id)arg1;
- (id)dataCacheForPath:(id)arg1;
- (void)dealloc;
- (float)defaultPriority;
- (id)formattedDataForPath:(id)arg1 identifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)formattedDataForRequest:(id)arg1 identifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)formattedDataWithData:(id)arg1;
- (id)formattedDataWithFileURL:(id)arg1;
- (void)formattedDataWithFileURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1 directoryName:(id)arg2 maxCacheSize:(unsigned long long)arg3 URLSessionDataType:(long long)arg4;
- (bool)isURLValid:(id)arg1;
- (id)languageCode;
- (id)newDataCache;
- (id)originFetchItems;
- (void)reloadDataCache;
- (void)removeAllDataCache;
- (void)removeCacheForIdentifier:(id)arg1;
- (void)removeDataCache:(id)arg1;
- (void)removeDataCache:(id)arg1 updateCache:(bool)arg2;
- (id)saveData:(id)arg1 identifier:(id)arg2 lastModified:(id)arg3 dataCache:(id)arg4;
- (id)saveFileURL:(id)arg1 fileSize:(unsigned long long)arg2 data:(id)arg3 lastModified:(id)arg4 dataCache:(id)arg5;
- (id)saveFileURL:(id)arg1 identifier:(id)arg2 fileSize:(unsigned long long)arg3 data:(id)arg4 lastModified:(id)arg5 dataCache:(id)arg6;
- (id)saveFileURL:(id)arg1 identifier:(id)arg2 fileSize:(unsigned long long)arg3 lastModified:(id)arg4 dataCache:(id)arg5;
- (void)setBackgroundOriginUpdate:(bool)arg1;
- (void)setCacheDirectory:(id)arg1;
- (void)setCacheSize:(unsigned long long)arg1;
- (void)setDataCacheArray:(id)arg1;
- (void)setDefaultPriority:(float)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setOriginFetchItems:(id)arg1;
- (void)syncCacheImmediately;
- (void)updateCache;
- (void)updateCacheDelay;

@end
