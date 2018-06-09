/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSPropertyDescriptionProxy : NSObject <NSSecureCoding> {
    NSEntityDescription * _entityDescription;
    unsigned int  _entitysReferenceIDForProperty;
    id  _sourceBuffer;
    NSPropertyDescription * _underlyingProperty;
}

+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)supportsSecureCoding;

- (void)_createCachesAndOptimizeState;
- (unsigned int)_entitysReferenceID;
- (void)_setEntity:(id)arg1;
- (void)_setEntityAndMaintainIndices:(id)arg1;
- (void)_setEntitysReferenceID:(unsigned int)arg1;
- (id)_underlyingProperty;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (Class)class;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entity;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyDescription:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
