/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHBaseStyle : TSSStyle <TSCHStyleActAlike>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allSpecificsForGeneric:(int)arg1;
+ (id)defaultPropertyMap;
+ (id)g_genericToSpecificPropertySetMap;
+ (id)g_gilliganPropertyStringFromProperty:(int)arg1;
+ (id)g_objectTypeForSpecific:(int)arg1;
+ (id)g_specificPropertyToOperationNameBimap;
+ (id)g_specificToGenericPropertyMap;
+ (void)g_splitProperty:(int)arg1 outStyleOwner:(id*)arg2 outSpecifier:(id*)arg3 outKeyName:(id*)arg4;
+ (int)g_tangierPropertyFromGilliganPropertyString:(id)arg1;
+ (id)paragraphStyleIndexProperties;

- (id)allSpecificsForGeneric:(int)arg1;
- (id)boxedDefaultValueForProperty:(int)arg1;
- (id)customFormatKeys;
- (float)defaultFloatValueForProperty:(int)arg1;
- (int)defaultIntValueForProperty:(int)arg1;
- (id)defaultValueForProperty:(int)arg1;
- (void)enumerateFormatObjectsUsingBlock:(id /* block */)arg1;
- (id)formatObjectPropertySet;
- (id)g_gilliganPropertyStringFromProperty:(int)arg1;
- (id)g_objectTypeForSpecific:(int)arg1;
- (id)g_specificPropertyToOperationNameBimap;
- (id)g_specificToGenericPropertyMap;
- (void)g_splitProperty:(int)arg1 outStyleOwner:(id*)arg2 outSpecifier:(id*)arg3 outKeyName:(id*)arg4;
- (int)g_tangierPropertyFromGilliganPropertyString:(id)arg1;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)properties;
- (void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg1;
- (id)shortDescription;
- (void)transformFormatObjectsUsingBlock:(id /* block */)arg1;
- (void)updateAfterPasteForDocumentRoot:(id)arg1 pasteboardCustomFormatList:(id)arg2;
- (void)updateForCollaborationForProperties:(id)arg1 documentRoot:(id)arg2;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1;

@end
