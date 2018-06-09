/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLCacheConfiguration : NSObject <NSCopying> {
    unsigned long long  _diskCapacity;
    unsigned long long  _memoryCapacity;
    NSString * _persistentIdentifier;
}

@property (nonatomic) unsigned long long diskCapacity;
@property (nonatomic) unsigned long long memoryCapacity;
@property (nonatomic, copy) NSString *persistentIdentifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)diskCapacity;
- (unsigned long long)memoryCapacity;
- (id)persistentIdentifier;
- (void)setDiskCapacity:(unsigned long long)arg1;
- (void)setMemoryCapacity:(unsigned long long)arg1;
- (void)setPersistentIdentifier:(id)arg1;

@end
