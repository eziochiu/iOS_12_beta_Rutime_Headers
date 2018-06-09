/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPersistentCache : NSObject {
    NSString * _cacheName;
    NSFileManager * _fm;
    NSString * _identifier;
    NSString * _path;
    bool  _safeKeys;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)safeKeyForKey:(id)arg1;

- (bool)_isFileNotFound:(id)arg1;
- (id)_pathForKey:(id)arg1;
- (bool)clear;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithIdentifier:(id)arg1 cacheName:(id)arg2;
- (bool)removeDataForKey:(id)arg1;
- (bool)setData:(id)arg1 forKey:(id)arg2;
- (void)setFilenameSafeKeys:(bool)arg1;

@end
