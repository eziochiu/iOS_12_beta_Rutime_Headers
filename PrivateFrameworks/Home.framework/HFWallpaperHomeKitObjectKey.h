/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFWallpaperHomeKitObjectKey : NSObject {
    unsigned long long  _type;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

+ (id)stringFromHomeKitObjectType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithHomeKitObject:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 uniqueIdentifier:(id)arg2;
- (unsigned long long)type;
- (id)uniqueIdentifier;

@end
