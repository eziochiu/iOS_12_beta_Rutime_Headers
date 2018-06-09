/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CacheDeleteVolume : NSObject {
    NSString * _fsType;
    unsigned long long  _initialFreespace;
    bool  _isRoot;
    NSString * _mountPoint;
}

@property (nonatomic, readonly) NSString *fsType;
@property (readonly) unsigned long long initialFreespace;
@property (readonly) bool isRoot;
@property (nonatomic, readonly) NSString *mountPoint;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSDictionary *thresholds;

+ (id)rootVolume;
+ (long long)stateForPath:(id)arg1;
+ (id)validateVolumeAtPath:(id)arg1;
+ (id)volumeWithMountpoint:(id)arg1;
+ (id)volumeWithPath:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)amountPurged;
- (id)description;
- (unsigned long long)freespace;
- (id)fsType;
- (unsigned long long)hash;
- (id)initWithPath:(id)arg1;
- (unsigned long long)initialFreespace;
- (bool)isEqual:(id)arg1;
- (bool)isEqualTo:(id)arg1;
- (bool)isRoot;
- (id)mountPoint;
- (unsigned long long)size;
- (long long)state;
- (id)thresholds;
- (bool)validate;

@end
