/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditPFDataConverter : NSObject <PLPhotoEditDataExporter, PLPhotoEditDataImporter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_filtersForLegacyAutoEnhanceSettingsDictionary:(id)arg1;
+ (id)_formatVersion;
+ (id)_knownFormatIdentifiers;
+ (id)_knownFormatVersions;
+ (void)_sanitizeDictionary:(id)arg1;
+ (id)_settingsDictionaryForLegacyAutoEnhanceFilters:(id)arg1;
+ (long long)_supportLevelForSettings:(id)arg1 typesForKnownKeys:(id)arg2 requiredKeys:(id)arg3;
+ (id)_supportedAdjustments;
+ (id)_validStatisticsValueTypes;
+ (bool)_validateValueTypesForKeys:(id)arg1 requiredKeys:(id)arg2 inDictionary:(id)arg3 error:(id*)arg4;
+ (bool)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
+ (id)dataFromPhotoEditModel:(id)arg1 outFormatIdentifier:(id*)arg2 outFormatVersion:(id*)arg3 exportProperties:(id)arg4;
+ (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
+ (bool)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 importProperties:(id)arg5;
+ (bool)validateAdjustmentsEnvelope:(id)arg1;

@end
