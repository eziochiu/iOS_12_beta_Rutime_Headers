/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKRandomSource : NSObject <GKRandom, NSCopying, NSSecureCoding>

+ (id)sharedRandom;
+ (bool)supportsSecureCoding;
+ (id)systemRandom;

- (id)arrayByShufflingObjectsInArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)nextBool;
- (long long)nextInt;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (float)nextUniform;

@end
