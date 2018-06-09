/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSStoreMappingGenerator : NSObject

+ (id)defaultMappingGenerator;
+ (void)invalidate;

- (id)externalNameForEntityName:(id)arg1;
- (id)externalNameForPropertyName:(id)arg1;
- (id)internalNameForEntityName:(id)arg1 version:(int)arg2;
- (id)internalNameForPropertyName:(id)arg1 version:(int)arg2;
- (id)joinsForRelationship:(id)arg1;
- (id)mappingForAttribute:(id)arg1 forConfigurationWithName:(id)arg2;
- (id)mappingForEntity:(id)arg1 forConfigurationWithName:(id)arg2;
- (id)mappingForRelationship:(id)arg1 forConfigurationWithName:(id)arg2;
- (id)mappingsDictForConfigurationWithName:(id)arg1 inModel:(id)arg2;
- (id)mappingsForConfigurationWithName:(id)arg1 inModel:(id)arg2;
- (id)primaryKeyForEntity:(id)arg1;

@end
