/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_newMetadataModelV1;
+ (id)_newMetadataModelV2;
+ (id)_newMetadataModelV3;
+ (id)_newMetadataModelV4;
+ (void)addAttributes:(id)arg1 toPropertiesOfEntity:(id)arg2;
+ (void)addRelationships:(id)arg1 toPropertiesOfEntity:(id)arg2;
+ (unsigned long long)ancillaryEntityCount;
+ (unsigned long long)ancillaryEntityOffset;
+ (id)ancillaryModelNamespace;
+ (void)applyMigrationStatementsForStore:(id)arg1 usingConnection:(id)arg2;
+ (void)applyPurgeStatementsForStore:(id)arg1 usingConnection:(id)arg2;
+ (bool)cachedVersionHashesMatchCurrent:(id)arg1;
+ (bool)doesMetadataModel:(id)arg1 matchConnection:(id)arg2 hasOldMetadataTables:(bool*)arg3;
+ (id)identifyModelForStoreWithConnection:(id)arg1 hasOldMetadataTables:(bool*)arg2;
+ (id)newMetadataModelForFrameworkVersion:(id)arg1;

@end
