/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXJSONObject : NSObject {
    id  _backingObject;
    NSDictionary * _jsonDictionary;
    NSMutableDictionary * _objectStorage;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSString * _specificationVersion;
}

@property (nonatomic, retain) id backingObject;
@property (nonatomic, retain) NSDictionary *jsonDictionary;
@property (nonatomic, retain) NSMutableDictionary *objectStorage;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic, readonly) NSString *specificationVersion;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
+ (Class)classOverrideAtInitialization:(Class)arg1 type:(id)arg2;
+ (void)initialize;
+ (void)initializeJSONObject;
+ (void)initializeObject;
+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;
+ (id /* block */)objectValueClassBlockForPropertyWithName:(id)arg1;
+ (id)propertyDefinitions;
+ (id)propertyHashTable;
+ (id)protocolPropertyDefinitions;
+ (id /* block */)purgeClassBlockForPropertyWithName:(id)arg1;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

- (void).cxx_destruct;
- (id)backingObject;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)explodedBackingObjects;
- (id)flatCopy;
- (bool)hasJSONStore;
- (id)initWithBackingObject:(id)arg1 andVersion:(id)arg2;
- (id)initWithJSONData:(id)arg1 andVersion:(id)arg2;
- (id)initWithJSONObject:(id)arg1 andVersion:(id)arg2;
- (id)jsonData;
- (id)jsonDictionary;
- (id)objectForLookupKey:(id)arg1;
- (id)objectStorage;
- (id)semaphore;
- (void)setBackingObject:(id)arg1;
- (void)setBackingObject:(id)arg1 forPropertiesOfClass:(Class)arg2;
- (void)setJsonDictionary:(id)arg1;
- (void)setObjectStorage:(id)arg1;
- (id)specificationVersion;
- (void)storeObject:(id)arg1 forLookupKey:(id)arg2;
- (void)storeValue:(id)arg1 forLookupKey:(id)arg2;
- (id)valueForLookupKey:(id)arg1;

@end
