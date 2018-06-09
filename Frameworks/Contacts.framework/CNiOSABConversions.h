/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABConversions : NSObject

+ (id)accountFromABAccount:(void*)arg1;
+ (id)accountsFromABAccounts:(struct __CFArray { }*)arg1;
+ (id)arrayByMappingTransform:(id /* block */)arg1 onCFArray:(struct __CFArray { }*)arg2;
+ (id)contactFromABPerson:(void*)arg1 keysToConvert:(id)arg2 mutable:(bool)arg3;
+ (id)contactFromABPerson:(void*)arg1 uniqueKeysToConvert:(id)arg2 mutable:(bool)arg3;
+ (id)contactIdentifierFromABPerson:(void*)arg1;
+ (id)contactMatchInfoFromABMatchMetadataDictionary:(id)arg1;
+ (id)contactPropertiesByABPropertyID;
+ (id)containerFromABSource:(void*)arg1 remote:(bool)arg2 includeDisabledSources:(bool)arg3;
+ (id)containersFromABSources:(struct __CFArray { }*)arg1 remote:(bool)arg2 includeDisabledSources:(bool)arg3;
+ (id)dataFromABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (id)dateFromABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (id)groupFromABGroup:(void*)arg1;
+ (id)groupsFromABGroups:(struct __CFArray { }*)arg1;
+ (void)initialize;
+ (id)numberFromIntegerABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (id /* block */)personToContactTransformWithKeysToFetch:(id)arg1 mutable:(bool)arg2;
+ (const struct __CFSet { }*)requiredABPropertyIDSetForKeysToFetch:(id)arg1;
+ (id)stringFromABBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (void)updateContact:(id)arg1 fromABPerson:(void*)arg2 keysToConvert:(id)arg3 availableKeyDescriptor:(id*)arg4;

@end
