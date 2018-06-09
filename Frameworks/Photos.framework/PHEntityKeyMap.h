/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHEntityKeyMap : NSObject {
    struct NSDictionary { Class x1; } * _entityKeysByPropertyKey;
    struct NSDictionary { Class x1; } * _propertyKeysByEntityKey;
}

+ (void)assertPropertyKey:(id)arg1 doesNotExistForEntityKey:(id)arg2 inEntityKeysByProperty:(struct NSDictionary { Class x1; }*)arg3;
+ (struct NSDictionary { Class x1; }*)transposePropertyKeysByEntityKey:(struct NSDictionary { Class x1; }*)arg1;

- (void).cxx_destruct;
- (id)entityKeyForPropertyKey:(id)arg1;
- (id)initWithPropertyKeysByEntityKey:(struct NSDictionary { Class x1; }*)arg1;
- (id)propertyKeyForEntityKey:(id)arg1;

@end
