/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCategorySampleEntity : HDSampleEntity

+ (bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;

@end
