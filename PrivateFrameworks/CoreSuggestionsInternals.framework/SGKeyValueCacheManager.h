/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGKeyValueCacheManager : NSObject {
    NSString * _basePath;
    NSMutableArray * _cacheFiles;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

- (void).cxx_destruct;
- (id)cacheOfType:(unsigned long long)arg1;
- (id)cacheOfType:(unsigned long long)arg1 forceReadFromDisk:(bool)arg2;
- (id)init;
- (id)initInMemory;
- (id)initWithBasePath:(id)arg1;
- (void)replaceCacheOfType:(unsigned long long)arg1 block:(id /* block */)arg2;

@end
