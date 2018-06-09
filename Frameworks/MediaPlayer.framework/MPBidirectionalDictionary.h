/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableDictionary * _keyToObjectDictionary;
    NSMutableDictionary * _objectToKeyDictionary;
}

+ (id)bidirectionalDictionary;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyForObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForKey:(id)arg1;

@end
