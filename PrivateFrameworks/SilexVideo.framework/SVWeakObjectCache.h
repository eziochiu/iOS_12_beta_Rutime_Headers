/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVWeakObjectCache : NSObject <NSCopying> {
    NSMutableDictionary * _cache;
}

@property (nonatomic, readonly) NSArray *allObjects;
@property (nonatomic, readonly) NSMutableDictionary *cache;

- (void).cxx_destruct;
- (id)allObjects;
- (id)cache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForIdentifier:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
