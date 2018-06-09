/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface STMAppSizer : STMSizer {
    NSDictionary * _appPathsByDataPath;
    STMAppDynamicSizeCache * _dynamicSizes;
    NSArray * _proxies;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _proxyLock;
    STMAppPurgeableSizeCache * _purgeableSizes;
}

@property (nonatomic, retain) NSArray *appProxies;

+ (id)sharedSizer;

- (void).cxx_destruct;
- (id)appProxies;
- (id)dynamicSizeForApp:(id)arg1;
- (id)initWithPrefsKey:(id)arg1;
- (void)pathChanged:(id)arg1 flags:(unsigned int)arg2 event:(unsigned long long)arg3;
- (id)purgeableSizeForApp:(id)arg1;
- (void)setAppProxies:(id)arg1;
- (id)staticSizeForApp:(id)arg1;
- (long long)totalSizeOfItems;

@end
