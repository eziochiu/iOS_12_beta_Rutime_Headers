/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUAdContextDefinition : NSObject <NSCopying> {
    NSMutableSet * _mutablePropertyDefinitions;
    NSMutableDictionary * _nestedContextDefinitions;
}

@property (nonatomic, readonly) NSMutableSet *mutablePropertyDefinitions;
@property (nonatomic, readonly) NSMutableDictionary *nestedContextDefinitions;
@property (nonatomic, readonly) NSSet *propertyDefinitions;

+ (id)definition;

- (void).cxx_destruct;
- (void)addPropertyDefinition:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isPropertyDefinitionValid:(id)arg1;
- (id)mutablePropertyDefinitions;
- (id)nestedContextDefinitions;
- (id)propertyDefinitions;

@end
