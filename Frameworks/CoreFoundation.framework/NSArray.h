/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSArray : NSObject <AFSecurityDigestibleChunksProviding, ASDNotificationType, ATXScoreLogSerializable, CKLParsedObject, CKRecordValue, CSCoderEncoder, CUByteCodable, FCOrderedCollectionAdditions, HFPrettyDescription, HFPropertyListConvertible, HFStateDumpSerializable, HMFObject, INCacheableContainer, INImageProxyInjecting, INIntentResolutionResultDataProviding, INKeyImageProducing, MPSectionedIdentifierListIdentifierPair, NSCopying, NSFastEnumeration, NSMutableCopying, NSSecureCoding, PQLBindable, REDonatedActionIdentifierProviding>

@property (nonatomic, readonly) IMMessageItem *__imLastMessageItem;
@property (readonly) INImage *_keyImage;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly) NSDictionary *bw_builtInMicRouteDictionary;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IMMessage *firstMessage;
@property (nonatomic, readonly) IMMessageItem *firstMessageItem;
@property (nonatomic, readonly) AXEventPathInfoRepresentation *firstPath;
@property (readonly) unsigned long long hash;
@property (getter=hmf_isEmpty, readonly) bool hmf_empty;
@property (nonatomic, readonly) bool isQueryResultSetInvalidated;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) IMMessage *lastFinishedMessage;
@property (nonatomic, readonly) IMMessage *lastIncomingFinishedMessage;
@property (nonatomic, readonly) IMMessage *lastIncomingMessage;
@property (nonatomic, readonly) IMMessage *lastMessage;
@property (nonatomic, readonly) IMMessageItem *lastMessageItem;
@property (nonatomic, readonly) NSArray *mf_tail;
@property (nonatomic, readonly) unsigned long long prevailingLocalSecretType;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) NSString *sectionIdentifier;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)array;
+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithArray:(id)arg1 copyItems:(bool)arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)arrayWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)arrayWithObject:(id)arg1;
+ (id)arrayWithObjects:(id)arg1;
+ (id)arrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithOrderedSet:(id)arg1;
+ (id)arrayWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)arrayWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)arrayWithSet:(id)arg1;
+ (id)arrayWithSet:(id)arg1 copyItems:(bool)arg2;
+ (id)newArrayWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (unsigned long long)_cfTypeID;
- (id)_initByAdoptingBuffer:(id*)arg1 count:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (id)allObjects;
- (id)arrayByAddingObject:(id)arg1;
- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (id)arrayByApplyingSelector:(SEL)arg1;
- (id)arrayByExcludingObjectsInArray:(id)arg1;
- (id)arrayByExcludingToObjectsInArray:(id)arg1;
- (id)componentsJoinedByString:(id)arg1;
- (bool)containsObject:(id)arg1;
- (bool)containsObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)containsObjectIdenticalTo:(id)arg1;
- (bool)containsObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForObject:(id)arg1;
- (unsigned long long)countForObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)firstObject;
- (id)firstObjectCommonWithArray:(id)arg1;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingComparator:(id /* block */)arg4;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)indexOfObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)indexesOfObject:(id)arg1;
- (id)indexesOfObject:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)indexesOfObjectIdenticalTo:(id)arg1;
- (id)indexesOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)indexesOfObjectsPassingTest:(id /* block */)arg1;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(bool)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)initWithSet:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToArray:(id)arg1;
- (bool)isNSArray__;
- (id)lastObject;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)objectEnumerator;
- (id)objectPassingTest:(id /* block */)arg1;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)objectsPassingTest:(id /* block */)arg1;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)reverseObjectEnumerator;
- (id)reversedArray;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingComparator:(id /* block */)arg3;
- (id)sortedArrayUsingComparator:(id /* block */)arg1;
- (id)sortedArrayUsingFunction:(int (*)arg1 context:(void*)arg2;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

- (id)abs_arrayByMappingTransform:(id /* block */)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKComponentsAndSubcomponentsJoinedByString:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)arrayByFilteringLaunchProhibitedAppsFrom:(id)arg1;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

- (void)encodeWithCSCoder:(id)arg1;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (id)arrayByMergingWithArray:(id)arg1;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)fp_sortDescriptorByDisplayName;
+ (id)fp_sortDescriptorByHierarchyPath;
+ (id)fp_sortDescriptorByModifiedDateDescending;

- (id /* block */)fp_comparator;
- (long long)fp_compareItem:(id)arg1 toItem:(id)arg2;
- (id)fp_itemIDs;
- (id)fp_itemIdentifiers;
- (id)fp_map:(id /* block */)arg1;
- (id)fp_pickItemsFromArray:(id)arg1 correspondingToIndexesOfItemsInArray:(id)arg2;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)arrayWithContentsOfFile:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1;
+ (id)arrayWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)newWithContentsOf:(id)arg1 immutable:(bool)arg2;

- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableOrderedSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)_setValue:(id)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3;
- (id)_stringToWrite;
- (id)_sumForKeyPath:(id)arg1;
- (id)_unionOfArraysForKeyPath:(id)arg1;
- (id)_unionOfObjectsForKeyPath:(id)arg1;
- (id)_unionOfSetsForKeyPath:(id)arg1;
- (bool)_validateValue:(inout id*)arg1 forKeyPath:(id)arg2 ofObjectAtIndex:(unsigned long long)arg3 error:(out id*)arg4;
- (id)_valueForKeyPath:(id)arg1 ofObjectAtIndex:(unsigned long long)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)addObserver:(id)arg1 toObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void*)arg5;
- (Class)classForCoder;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)filteredArrayUsingPredicate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)pathsMatchingExtensions:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3;
- (void)removeObserver:(id)arg1 fromObjectsAtIndexes:(id)arg2 forKeyPath:(id)arg3 context:(void*)arg4;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)sortedArrayHint;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)sortedArrayUsingFunction:(int (*)arg1 context:(void*)arg2 hint:(id)arg3;
- (id)sortedArrayUsingSelector:(SEL)arg1 hint:(id)arg2;
- (id)stringsByAppendingPathComponent:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit

- (id)shuffledArray;
- (id)shuffledArrayWithRandomSource:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_permutationHelperForArray:(id)arg1 number:(long long)arg2 permutationHandler:(id /* block */)arg3;

- (bool)hk_allElementsUnique;
- (id)hk_averageUsingEvaluationBlock:(id /* block */)arg1;
- (bool)hk_containsObjectsInArray:(id)arg1;
- (void)hk_enumeratePermutationsWithBlock:(id /* block */)arg1;
- (id)hk_filter:(id /* block */)arg1;
- (id)hk_firstObjectPassingTest:(id /* block */)arg1;
- (id)hk_firstObjectWithMaximumValueUsingEvaluationBlock:(id /* block */)arg1;
- (id)hk_firstObjectWithMinimumValueUsingEvaluationBlock:(id /* block */)arg1;
- (id)hk_firstSortedObjectWithComparison:(id /* block */)arg1;
- (id)hk_foldRightFrom:(id)arg1 with:(id /* block */)arg2;
- (id)hk_map:(id /* block */)arg1;
- (id)hk_map:(id /* block */)arg1 error:(out id*)arg2;
- (id)hk_mapToDictionary:(id /* block */)arg1;
- (id)hk_mapToSet:(id /* block */)arg1;
- (id)hk_orPredicateWithPredicateBlock:(id /* block */)arg1;
- (void)hk_partitionArrayWithPartitionSetupBlock:(id /* block */)arg1 partitionMembershipCheckBlock:(id /* block */)arg2 partitionExtendBlock:(id /* block */)arg3 partitionFinalizeBlock:(id /* block */)arg4;
- (double)hk_sumUsingEvaulationBlock:(id /* block */)arg1;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_escapedComponentsJoinedByString:(id)arg1 forLocale:(id)arg2;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_intents_cacheableObjects;
- (id)_intents_localizedCopyForLanguage:(id)arg1;
- (id)_intents_readableDescriptionForLanguage:(id)arg1;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_keyImage;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_arrayByRemovingObject:(id)arg1;
- (id)_mapkit_componentsJoinedInCommaDelimitedList;
- (unsigned long long)_mapkit_indexForObject:(id)arg1 usingSortFunction:(int (*)arg2 context:(void*)arg3;
- (id)_mapkit_joinedAddressComponents;
- (void)_mapkit_orientableAnnotationViewsFixed:(id*)arg1 notFixed:(id*)arg2;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (bool)MPIsEmpty;
- (bool)isQueryResultSetInvalidated;
- (id)itemIdentifier;
- (id)sectionIdentifier;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_commaSeparatedRecipientListWithWidth:(double)arg1 forFont:(id)arg2;
- (id)mf_commaSeparatedRecipientListWithWidth:(double)arg1 forFont:(id)arg2 usingSelector:(SEL)arg3;
- (unsigned long long)mf_indexOfRecipientWithEmailAddress:(id)arg1;

// Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity

- (id)copyDeep_MC;

// Image: /System/Library/Frameworks/PDFKit.framework/PDFKit

+ (id)PDFKitAnnotationKeys;
+ (id)PDFKitAnnotationKeysIgnored;
+ (id)PDFKitAppearanceDictionaryArray;
+ (id)PDFKitBorderStyleArray;
+ (id)PDFKitFieldTypeArray;
+ (id)PDFKitHighlightingModeArray;
+ (id)PDFKitSubtypeArray;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)pu_enumerateObjectsFromIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)pu_localizedComposedStringThatFitsWidth:(double)arg1 withMeasuringLabel:(id)arg2;
- (id)pu_localizedComposedStringWithCount:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; bool x10; }*)arg4;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)SCN_arrayWithSimdMatrix4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

- (id)SCNMutableDeepCopy;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })SCN_simdMatrix4Value;

// Image: /System/Library/Frameworks/Social.framework/Social

- (unsigned long long)countObjectsPassingTest:(id /* block */)arg1;
- (unsigned long long)countObjectsPassingTest:(id /* block */)arg1;
- (id)firstObjectPassingTest:(id /* block */)arg1;
- (id)firstObjectPassingTest:(id /* block */)arg1;
- (id)objectsPassingTest:(id /* block */)arg1;
- (id)objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (void)un_each:(id /* block */)arg1;
- (id)un_filter:(id /* block */)arg1;
- (id)un_map:(id /* block */)arg1;
- (id)un_nonEmptyCopy;
- (id)un_safeArrayContainingClass:(Class)arg1;
- (id)un_safeArrayContainingClasses:(id)arg1;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (id)vs_componentsJoinedByAttributedString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities

- (id)ax_filteredArrayUsingBlock:(id /* block */)arg1;
- (id)ax_flatMappedArrayUsingBlock:(id /* block */)arg1;
- (id)ax_mappedArrayUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport

- (id)programThatMatchesProgram:(id)arg1;
- (void)setProgram:(id)arg1 withOtherSidePrograms:(id)arg2 selected:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/TTYUtilities.framework/TTYUtilities

- (id)programThatMatchesProgram:(id)arg1;
- (void)setProgram:(id)arg1 withOtherSidePrograms:(id)arg2 selected:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (id)axArrayByIgnoringNilElementsWithCount:(unsigned long long)arg1;
+ (id)axArrayWithPossiblyNilArrays:(unsigned long long)arg1;

- (id)axFilterObjectsUsingBlock:(id /* block */)arg1;
- (bool)axIsEqualToOrderedArray:(id)arg1 withPredicate:(id /* block */)arg2;
- (id)axMapObjectsUsingBlock:(id /* block */)arg1;
- (id)axSafeObjectAtIndex:(unsigned long long)arg1;
- (id)axUniqueArrayWithPredicate:(id /* block */)arg1;
- (id)firstPath;

// Image: /System/Library/PrivateFrameworks/AccessoryCommunications.framework/AccessoryCommunications

- (id)truncatedArray:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

- (id)arrayCappedToMaxItems:(unsigned long long)arg1;
- (id)arrayForJSON;
- (id)jsonString;
- (id)jsonStringWithPrettyPrint:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice

- (id)assetForIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)atx_writeToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_arrayByRemovingObject:(id)arg1;
- (id)aa_firstObjectPassingTest:(id /* block */)arg1;
- (bool)aa_isSubsetOfArray:(id)arg1;
- (id)aa_map:(id /* block */)arg1;
- (id)aa_mapNullable:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

- (id)aaui_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (id)ams_filterUsingTest:(id /* block */)arg1;
- (id)ams_firstObjectPassingTest:(id /* block */)arg1;
- (id)ams_mapWithTransform:(id /* block */)arg1;
- (id)ams_nonEmptyComponentsJoinedByString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)af_arrayByMappingWithBlock:(id /* block */)arg1;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)afui_arrayByMappingWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_arrayWithJSONResponseData:(id)arg1;
+ (id)ak_arrayWithResponseData:(id)arg1;

- (id)ak_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

- (id)avt_description;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)bs_containsObjectPassingTest:(id /* block */)arg1;
- (id)bs_differenceWithArray:(id)arg1;
- (void)bs_each:(id /* block */)arg1;
- (void)bs_enumerateObjectsOfClass:(Class)arg1 usingBlock:(id /* block */)arg2;
- (id)bs_filter:(id /* block */)arg1;
- (id)bs_first:(unsigned long long)arg1;
- (id)bs_firstObjectOfClass:(Class)arg1;
- (id)bs_firstObjectOfClassNamed:(id)arg1;
- (id)bs_firstObjectPassingTest:(id /* block */)arg1;
- (id)bs_flatten;
- (id)bs_flattenedDifferenceWithArray:(id)arg1;
- (id)bs_map:(id /* block */)arg1;
- (id)bs_mapNoNulls:(id /* block */)arg1;
- (id)bs_objectsOfClass:(Class)arg1;
- (id)bs_reverse;

// Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore

- (id)bds_arrayByRemovingNSNulls;
- (id)bds_arrayByRemovingNSNullsInvokingBlockForNulls:(id /* block */)arg1;
- (void)bds_chainSuccessAndErrorCompletionSelectorCallsForSelector:(SEL)arg1 completion:(id /* block */)arg2;
- (id)bds_dictionaryUsingPropertyAsKey:(id)arg1;
- (void)bds_traverseBatchesOfSize:(unsigned long long)arg1 block:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

+ (id)arrayWithArray:(id)arg1 prependPath:(id)arg2;

- (id)objectSentinelNull;
- (id)objectWithNSNulls:(id)arg1;
- (id)objectWithNoNSNulls:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (id)allObjectsWithClass:(Class)arg1;
- (bool)containsObjectIdenticalTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)arrayOfSetsBySplitting:(id)arg1 batchSize:(unsigned long long)arg2;

- (bool)CalContainsObjectIdenticalTo:(id)arg1;
- (id)CalMutableRecursiveCopy;
- (id)CalStringValueForKeyPaths:(id)arg1;
- (id)CalStringValueForKeys:(id)arg1;
- (id)CalStringValueForKeys:(id)arg1 keyPaths:(id)arg2;
- (id)_CalArrayOfValueForKeyPaths:(id)arg1;
- (id)_CalArrayOfValueForKeys:(id)arg1;
- (id)_CalStringForArrayOfValues:(id)arg1;
- (id)allObjectsWithClass:(Class)arg1;
- (id)filteredArrayUsingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (id)mutableDeepCopy;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

- (id)cps_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)_deepCopy;

// Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial

+ (id)bw_selectedInputsArrayForBuiltInMicRouteDictionary:(id)arg1 dataSource:(id)arg2 polarPattern:(unsigned int)arg3;

- (id)bw_builtInMicRouteDictionary;
- (id)pickableRouteWithUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI

- (id)firstObjectPassingTest:(id /* block */)arg1;
- (bool)hasObjectPassingTest:(id /* block */)arg1;
- (id)map:(id /* block */)arg1;
- (id)max:(id /* block */)arg1;
- (id)objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_IMChatItemsAtIndexes:(id)arg1;
- (id)__ck_chatItemWithGUID:(id)arg1;
- (id)__ck_commaJoinedValueForKey:(id)arg1;
- (unsigned long long)__ck_indexOfChatItemWithGUID:(id)arg1;
- (unsigned long long)__ck_indexOfMediaObject:(id)arg1;
- (unsigned long long)__ck_indexOfParentChatItemWithMesssageGUID:(id)arg1 associatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)__ck_indexOfTransfer:(id)arg1;
- (id)__ck_indexSetForIndexPathItemsInSection:(long long)arg1;
- (id)__ck_indexSetForIndexPathRowsInSection:(long long)arg1;
- (id)__ck_indexesOfPartsOfMessage:(id)arg1;
- (id)__ck_indexesOfPartsOfMessages:(id)arg1;
- (id)__ck_indexesOfPartsOfNonAttachmentMessages:(id)arg1;
- (id)__ck_indexesOfUnplayedAudioMessages;
- (id)__ck_messageForChatItemAtIndex:(unsigned long long)arg1;
- (id)__ck_parentChatItemWithMesssageGUID:(id)arg1 associatedMessageRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)__ck_proxyWithBundleIdentifier:(id)arg1;
- (id)__ck_shuffledArray;
- (void)__ck_unloadSizesAtIndexes:(id)arg1;
- (void)__ck_unloadTranscriptTextAtIndexes:(id)arg1;
- (bool)ck_containsObjectIdenticalTo:(id)arg1;
- (id)composeRecipientAddresses;
- (id)composeRecipientHandles;
- (id)composeRecipientNormalizedAddresses;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (id)crk_arrayByRemovingObject:(id)arg1;
- (bool)crk_isSortedByComparator:(id /* block */)arg1;
- (id)crk_mapUsingBlock:(id /* block */)arg1;
- (id)crk_sortedArrayForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingComparator:(id /* block */)arg2;
- (id)crk_sortedSubarrayWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 comparator:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)CKSortedForUpload;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)cplDeepCopy;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities

- (id)cutFirstObject;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (id)CNFRegArrayPassingTest:(id /* block */)arg1;
- (id)CNFRegArrayPassingTests:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

+ (id)_cn_arrayWithObject:(id)arg1 count:(unsigned long long)arg2;

- (bool)_cn_all:(id /* block */)arg1;
- (bool)_cn_any:(id /* block */)arg1;
- (id)_cn_arrayByRotatingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 by:(long long)arg2;
- (id)_cn_balancedSlicesWithMaximumCount:(unsigned long long)arg1;
- (id)_cn_distinctObjects;
- (void)_cn_each:(id /* block */)arg1;
- (void)_cn_each:(id /* block */)arg1 until:(id /* block */)arg2;
- (void)_cn_each:(id /* block */)arg1 untilCancelled:(id)arg2;
- (void)_cn_each_reverse:(id /* block */)arg1;
- (id)_cn_filter:(id /* block */)arg1;
- (id)_cn_firstObjectPassingTest:(id /* block */)arg1;
- (id)_cn_flatMap:(id /* block */)arg1;
- (id)_cn_flatten;
- (id)_cn_groupBy:(id /* block */)arg1;
- (id)_cn_indexBy:(id /* block */)arg1;
- (unsigned long long)_cn_indexOfFirstObjectPassingTest:(id /* block */)arg1;
- (id)_cn_indicesForObjects:(id)arg1;
- (bool)_cn_isIdenticalToArray:(id)arg1;
- (bool)_cn_isNonEmpty;
- (id)_cn_join:(id)arg1;
- (id)_cn_joinWithBlock:(id /* block */)arg1;
- (id)_cn_map:(id /* block */)arg1;
- (bool)_cn_none:(id /* block */)arg1;
- (id)_cn_partition:(id /* block */)arg1;
- (id)_cn_reduce:(id /* block */)arg1;
- (id)_cn_reduce:(id /* block */)arg1 initialValue:(id)arg2;
- (id)_cn_reversed;
- (id)_cn_safeSortedArrayUsingComparator:(id /* block */)arg1;
- (id)_cn_skip:(unsigned long long)arg1;
- (id)_cn_skipLast:(unsigned long long)arg1;
- (id)_cn_slicesWithMaximumCount:(unsigned long long)arg1;
- (id)_cn_sortedArrayUsingAuxiliarySortOrder:(id)arg1 transform:(id /* block */)arg2;
- (id)_cn_tail;
- (id)_cn_take:(unsigned long long)arg1;
- (id)_cn_zip:(id)arg1;
- (void)_cn_zip:(id)arg1 withBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

- (unsigned long long)prevailingLocalSecretType;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

+ (id)_arrayWithIntArg:(int)arg1 additionalArgs:(char *)arg2;
+ (id)cdvArrayWithIntegers:(int)arg1;

// Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp

- (id)fl_map:(id /* block */)arg1;
- (id)fl_multiMap:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting

- (id)ch_descriptionWithSeparator:(id)arg1 filterBlock:(id /* block */)arg2;
- (id)ch_mappedArrayWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

- (id)MSDSPAssetCollectionWithMasterFileHash:(id)arg1;
- (id)MSDeepCopy;
- (id)MSDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MSMutableDeepCopy;
- (id)MSMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (id)parsec_filterObjectsUsingBlock:(id /* block */)arg1;
- (id)parsec_mapAndFilterObjectsUsingBlock:(id /* block */)arg1;
- (id)parsec_mapAndFilterObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)parsec_mapObjectsUsingBlock:(id /* block */)arg1;
- (id)parsec_numberAtIndex:(unsigned long long)arg1;
- (id)sf_asCardSections:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (unsigned long long)cr_binaryInsertionIndexOfObject:(id)arg1 usingComparator:(id /* block */)arg2 match:(bool*)arg3;
- (id)cr_firstObjectPassingTest:(id /* block */)arg1;
- (id)cr_insertionSortedArrayUsingComparator:(id /* block */)arg1;
- (id)cr_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)_cs_initWithXPCObject:(id)arg1;
- (id)_cs_xpcObject;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

- (void)enumerateChunksOfSize:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

+ (id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;

- (const char *)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2;
- (id)encodedDataAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress

- (bool)DACPLogArrayBeginsWithArray:(id)arg1;
- (id)DACPLogSubarrayFromIndexToEndOfArray:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon

- (id)findWithBlock:(id /* block */)arg1;
- (id)mapWithBlock:(id /* block */)arg1;
- (id)rejectItemsPassingTest:(id /* block */)arg1;
- (id)selectItemsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI

- (id)_filteredArrayOfObjectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

- (id)_fides_objectByReplacingValue:(id)arg1 withValue:(id)arg2;
- (id)_fides_shuffledArray;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

- (id)dc_arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;
- (bool)dc_containsObjectPassingTest:(id /* block */)arg1;
- (bool)dc_indexIsValid:(long long)arg1;
- (unsigned long long)dc_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long*)arg2 usingComparator:(id /* block */)arg3;
- (id)dc_objectAfter:(id)arg1;
- (id)dc_objectAfter:(id)arg1 wrap:(bool)arg2;
- (id)dc_objectBefore:(id)arg1;
- (id)dc_objectBefore:(id)arg1 wrap:(bool)arg2;
- (id)dc_objectPassingTest:(id /* block */)arg1;
- (id)dc_objectsOfClass:(Class)arg1;
- (id)dc_objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore

- (id)_doc_componentsJoinedByAnd;
- (id)_doc_componentsJoinedByOr;
- (id)_doc_componentsWrappedInQuotes;
- (id)_doc_filter:(id /* block */)arg1;
- (id)_doc_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler

+ (id)array:(id)arg1 withItemsIn:(id)arg2;
+ (id)arrayWithIntersectionOf:(id)arg1 and:(id)arg2;
+ (id)arrayWithUnionOf:(id)arg1 and:(id)arg2;

- (bool)anyItemsIntersectArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)fm_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(id /* block */)arg2;
+ (id)fm_arrayWithSafeObject:(id)arg1;

- (bool)fm_all:(id /* block */)arg1;
- (bool)fm_any:(id /* block */)arg1;
- (id)fm_arrayByFlattening;
- (id)fm_arrayWithResultsOfBlock:(id /* block */)arg1;
- (id)fm_dictionaryWithKeyGenerator:(id /* block */)arg1;
- (void)fm_each:(id /* block */)arg1;
- (id)fm_filter:(id /* block */)arg1;
- (id)fm_firstObjectPassingTest:(id /* block */)arg1;
- (id)fm_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices

- (id)_FTFilteredArrayForAPS;
- (id)_IDsFromURIs;
- (id)_URIsFromIDs;

// Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI

- (id)fa_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness

+ (id)fi_arrayByEnumeratingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;

- (id)fi_filteredArrayUsingBlock:(id /* block */)arg1;
- (id)fi_flatMapUsingBlock:(id /* block */)arg1;
- (id)fi_mapUsingBlock:(id /* block */)arg1;
- (id)fi_reduceWithReduction:(id)arg1 block:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkArrayWithIndexSet:(id)arg1;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkDistinctValuesForKeyPath:(id)arg1;
- (id)_gkFilterWithBlock:(id /* block */)arg1;
- (id)_gkFirstObject;
- (id)_gkFoldWithInitialValue:(id)arg1 block:(id /* block */)arg2;
- (id)_gkGuestPlayersFromPlayers;
- (id)_gkIncompletePlayersFromPlayerIDs;
- (id)_gkInternalsFromPlayers;
- (id)_gkMapConcurrentlyWithBlock:(id /* block */)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1;
- (id)_gkMapDictionaryWithKeyPath:(id)arg1 valueKeyPath:(id)arg2;
- (id)_gkMapWithBlock:(id /* block */)arg1;
- (id)_gkNonGuestPlayersFromPlayers;
- (id)_gkOrderedSet;
- (id)_gkPlayersFromInternals;
- (id)_gkPlayersIDsFromPlayers;
- (id)_gkSubarraysByKeyWithBlock:(id /* block */)arg1;
- (void)_gkValidatePlayersForReturnFromAPI;
- (id)_gkValuesForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI

- (id)_gkBubbleOfType:(long long)arg1;
- (id)_gkCommaSeparatedRecipientListWithWidth:(float)arg1 forTextStyle:(id)arg2;
- (id)_gkCommaSeparatedRecipientListWithWidth:(float)arg1 forTextStyle:(id)arg2 usingSelector:(SEL)arg3;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (id)_geo_bestLocalizedString;
- (id)_geo_bestLocalizedStringLocaleValue;
- (id)_geo_bestLocalizedStringValue;
- (id)_geo_firstPhotoOfAtLeastSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)shortDescription;

- (id)describeElements:(id /* block */)arg1;
- (bool)hmf_isEmpty;
- (bool)hmf_objectsAreKindOfClass:(Class)arg1;
- (id)privateDescription;
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(bool)arg2 blacklistedKeys:(id)arg3;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_arrayWithNumbersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 stride:(unsigned long long)arg2;

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

// Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing

- (id)subarraysOfSize:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore

- (id)componentsJoinedIntoListWithMaxItems:(int)arg1;

// Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore

- (id)__im_assistant_arrayByApplyingBlockWithIndex:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void)__enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)__imItems;
- (id)__imLastMessageItem;
- (id)__itemForChatItemAtIndex:(unsigned long long)arg1;
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)equivalentToRecipients:(id)arg1;
- (id)firstMessage;
- (id)firstMessageItem;
- (id)indexesOfPartsOfMessage:(id)arg1;
- (id)indexesOfPartsOfMessageItem:(id)arg1;
- (id)lastFinishedMessage;
- (id)lastIncomingFinishedMessage;
- (id)lastIncomingMessage;
- (id)lastMessage;
- (id)lastMessageItem;
- (id)messageForChatItemAtIndex:(unsigned long long)arg1;
- (id)messages;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)__IMStripPotentialTokenURIs;
- (id)__imArrayByApplyingBlock:(id /* block */)arg1;
- (id)__imArrayByApplyingBlock:(id /* block */)arg1 filter:(id /* block */)arg2;
- (id)__imArrayByFilteringWithBlock:(id /* block */)arg1;
- (id)__imDeepCopy;
- (id)__imFirstObject;
- (void)__imForEach:(id /* block */)arg1;
- (bool)__imIsMutable;
- (id)__imSetFromArray;
- (id)_copyForEnumerating;
- (bool)_hasSameMembers:(id)arg1;
- (bool)containsObject:(id)arg1 matchingComparison:(SEL)arg2;
- (bool)containsObjectIdenticalTo:(id)arg1;
- (void)differencesFromArray:(id)arg1 removedIndexes:(id*)arg2 insertedIndexes:(id*)arg3;
- (void)differencesFromArray:(id)arg1 usingComparator:(id /* block */)arg2 removedIndexes:(id*)arg3 insertedIndexes:(id*)arg4;
- (long long)indexOfObject:(id)arg1 matchingComparison:(SEL)arg2;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

- (id)xct_objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (id)__im_canonicalIDSIDsFromAddresses;
- (bool)isArchivable_im;

// Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture

- (id)copyGroupIntoDictionary:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (bool)mf_all:(id /* block */)arg1;
- (bool)mf_any:(id /* block */)arg1;
- (unsigned long long)mf_countObjectsPassingTest:(id /* block */)arg1;
- (id)mf_dictionaryWithMessagesSortedByStore;
- (id)mf_diffWithArray:(id)arg1;
- (id)mf_displayEmailAddressList;
- (void)mf_enumerateObjectsInBatchesOfSize:(unsigned long long)arg1 block:(id /* block */)arg2;
- (id)mf_filter:(id /* block */)arg1;
- (id)mf_firstObjectPassingTest:(id /* block */)arg1;
- (id)mf_flatMap:(id /* block */)arg1;
- (id)mf_flatten;
- (id)mf_foldLeftWithStart:(id)arg1 reduce:(id /* block */)arg2;
- (id)mf_groupBy:(id /* block */)arg1;
- (unsigned long long)mf_indexOfObject:(id)arg1 usingComparator:(id /* block */)arg2;
- (unsigned long long)mf_indexOfObject:(id)arg1 usingSortFunction:(int (*)arg2 context:(void*)arg3;
- (unsigned long long)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingComparator:(id /* block */)arg2;
- (unsigned long long)mf_indexWhereObjectWouldBeInserted:(id)arg1 usingSortFunction:(int (*)arg2 context:(void*)arg3;
- (id)mf_indicesOfStringsWithPrefix:(id)arg1;
- (id)mf_map:(id /* block */)arg1;
- (id)mf_mapSelector:(SEL)arg1;
- (id)mf_objectEquivalentTo:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)mf_objectEquivalentTo:(id)arg1 usingSortFunction:(int (*)arg2 context:(void*)arg3;
- (id)mf_objectsPassingTest:(id /* block */)arg1;
- (id)mf_partition:(id /* block */)arg1;
- (id)mf_permutations;
- (id)mf_prefix:(unsigned long long)arg1;
- (id)mf_reduce:(id /* block */)arg1;
- (id)mf_subarraysOfSize:(unsigned long long)arg1;
- (id)mf_tail;
- (id)mf_uncommentedAddressList;
- (id)mf_uniquifyWithComparator:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (id)_maps_arrayWithObjectsConformingToProtocols:(id)arg1;
- (unsigned long long)_maps_indexOfObjectCorrespondingToIdentifiableObject:(id)arg1;
- (id)_maps_indexesOfObjectsCorrespondingToIdentifiableObjects:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI

- (id)muDeepMutableCopy;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (bool)mr_isEqualToOutputDevicesArray:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (bool)boolAtIndex:(int)arg1;
- (bool)boolAtIndex:(int)arg1 defaultValue:(bool)arg2;
- (double)doubleAtIndex:(int)arg1;
- (double)doubleAtIndex:(int)arg1 defaultValue:(double)arg2;
- (float)floatAtIndex:(int)arg1;
- (float)floatAtIndex:(int)arg1 defaultValue:(float)arg2;
- (int)intAtIndex:(int)arg1;
- (int)intAtIndex:(int)arg1 defaultValue:(int)arg2;
- (id)mutableDeepCopy;
- (unsigned long long)numberOfObjectsWithKindOfClass:(Class)arg1;
- (id)objectAtIndex:(int)arg1 defaultValue:(id)arg2;
- (id)objectAtIndexVEiOSNoThrow:(long long)arg1;
- (id)objectOrNullAtIndex:(int)arg1;
- (id)objectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)randomObject;
- (id)randomObjectWithSeed:(unsigned int*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectAtIndex:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectAtIndex:(int)arg1 defaultValue:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)secondObject;
- (id)thirdObject;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (void)mf_enumerateByStoreUsingBlock:(id /* block */)arg1;
- (unsigned long long)mf_indexOfMailboxDictionaryWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

- (id)nnmk_description;
- (id)nnmk_filter:(id /* block */)arg1;
- (id)nnmk_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkComprehension:(id /* block */)arg1;
- (id)npkFindFirstObjectMatchingCondition:(id /* block */)arg1;
- (id)npkSafeObjectAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)_navigation_firstObjectPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)na_arrayByRepeatingWithCount:(unsigned long long)arg1 generatorBlock:(id /* block */)arg2;
+ (id)na_arrayWithSafeObject:(id)arg1;

- (bool)na_all:(id /* block */)arg1;
- (bool)na_any:(id /* block */)arg1;
- (id)na_arrayByFlattening;
- (id)na_arrayWithResultsOfBlock:(id /* block */)arg1;
- (id)na_dictionaryByBucketingObjectsUsingKeyGenerator:(id /* block */)arg1;
- (id)na_dictionaryWithKeyGenerator:(id /* block */)arg1;
- (void)na_each:(id /* block */)arg1;
- (id)na_filter:(id /* block */)arg1;
- (id)na_firstObjectPassingTest:(id /* block */)arg1;
- (id)na_flatMap:(id /* block */)arg1;
- (id)na_map:(id /* block */)arg1;
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id*)arg2;
- (id)nu_unwrapJSValue;
- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_array:(id /* block */)arg1;
+ (id)fc_arrayByAddingObjectsFromArray:(id)arg1 toArray:(id)arg2;
+ (id)fc_arrayByAddingObjectsFromArray:(id)arg1 toArray:(id)arg2 inRelativeOrder:(unsigned long long)arg3;
+ (id)fc_arrayByAddingUniqueObjectsFromArray:(id)arg1 toArray:(id)arg2;
+ (id)fc_generatedArrayWithCount:(unsigned long long)arg1 generator:(id /* block */)arg2;
+ (void)fc_walkArray:(id)arg1 andArray:(id)arg2 withBlock:(id /* block */)arg3;

- (bool)fc_allObjectsPassTest:(id /* block */)arg1;
- (id)fc_arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)fc_arrayByCollectingObjectsWithBlock:(id /* block */)arg1;
- (id)fc_arrayByFlattening;
- (id)fc_arrayByMergingAdjacentObjectsWithMergePolicy:(id /* block */)arg1 mergeBlock:(id /* block */)arg2;
- (id)fc_arrayByRemovingFirstObject;
- (id)fc_arrayByRemovingObject:(id)arg1;
- (id)fc_arrayByRemovingObjectIdenticalTo:(id)arg1;
- (id)fc_arrayByRemovingObjectsAtIndexes:(id)arg1;
- (id)fc_arrayByRemovingObjectsInArray:(id)arg1;
- (id)fc_arrayByRemovingObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)fc_arrayByRemovingObjectsPassingTest:(id /* block */)arg1;
- (id)fc_arrayByReplacingObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)fc_arrayByReplacingObjectIdenticalTo:(id)arg1 withObject:(id)arg2;
- (id)fc_arrayByReplacingObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withObject:(id)arg2;
- (id)fc_arrayByReversingObjects;
- (id)fc_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_arrayByTransformingWithBlockWithIndex:(id /* block */)arg1;
- (id)fc_arrayOfObjectsFailingTest:(id /* block */)arg1;
- (id)fc_arrayOfObjectsPassingTest:(id /* block */)arg1;
- (id)fc_arraysByExcisingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)fc_arraysByPartitioningOnObjectsPassingTest:(id /* block */)arg1;
- (id)fc_arraysByPartitioningWithBudget:(id)arg1 indicesOfOverBudgetObjects:(id*)arg2 appraiser:(id /* block */)arg3 accumulator:(id /* block */)arg4 comparator:(id /* block */)arg5;
- (bool)fc_containsObjectPassingTest:(id /* block */)arg1;
- (bool)fc_containsObjectsAtBack:(id)arg1;
- (bool)fc_containsObjectsAtFront:(id)arg1;
- (bool)fc_containsObjectsWithValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)fc_countOfObjectsPassingTest:(id /* block */)arg1;
- (id)fc_dictionaryOfSortedObjectsWithKeyBlock:(id /* block */)arg1;
- (id)fc_dictionaryOfTransformedSortedObjectsWithKeyBlock:(id /* block */)arg1 valueBlock:(id /* block */)arg2;
- (id)fc_dictionaryWithKeyBlock:(id /* block */)arg1;
- (id)fc_dictionaryWithKeyBlock:(id /* block */)arg1 valueBlock:(id /* block */)arg2;
- (id)fc_dictionaryWithKeySelector:(SEL)arg1;
- (id)fc_dictionaryWithKeySelector:(SEL)arg1 valueSelector:(SEL)arg2;
- (id)fc_dictionaryWithValueBlock:(id /* block */)arg1;
- (id)fc_diffAgainstSortedOrderedCollection:(id)arg1 usingComparator:(id /* block */)arg2;
- (void)fc_enumerateIslandsOfCommonValuesForKeyBlock:(id /* block */)arg1 withBlock:(id /* block */)arg2;
- (void)fc_enumerateObjectsFromIndex:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)fc_enumerateObjectsInReverse:(bool)arg1 usingSkipAheadBlock:(id /* block */)arg2;
- (void)fc_enumerateObjectsPairwiseUsingBlock:(id /* block */)arg1;
- (void)fc_enumerateSideBySideWithArray:(id)arg1 reverse:(bool)arg2 block:(id /* block */)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fc_expandIndex:(unsigned long long)arg1 toIncludeAdjacentObjectsPassingTest:(id /* block */)arg2;
- (id)fc_firstObjectFromIndex:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)fc_firstObjectPassingTest:(id /* block */)arg1;
- (id)fc_firstObjectWithValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)fc_indexOfFirstObjectWithValue:(id)arg1 forKey:(id)arg2;
- (id)fc_indexesOfObjectsIdenticalTo:(id)arg1;
- (bool)fc_isEqualToArray:(id)arg1;
- (bool)fc_isEqualToArray:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)fc_isSortedUsingComparator:(id /* block */)arg1;
- (id)fc_onlyObject;
- (id)fc_orderedSetByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_randomObject;
- (id)fc_randomlyMergeWithArray:(id)arg1;
- (double)fc_reduceArrayWithDouble:(double)arg1 block:(id /* block */)arg2;
- (id)fc_reduceArrayWithInitial:(id)arg1 block:(id /* block */)arg2;
- (id)fc_rotateElementsFromTheIndexOfSelectedItem:(unsigned long long)arg1;
- (id)fc_safeObjectAtIndex:(unsigned long long)arg1;
- (id)fc_safeSubarrayWithCountFromBack:(unsigned long long)arg1;
- (id)fc_safeSubarrayWithCountFromFront:(unsigned long long)arg1;
- (id)fc_setByTransformingWithBlock:(id /* block */)arg1;
- (id)fc_setOfObjectsPassingTest:(id /* block */)arg1;
- (id)fc_sortedArrayStartingWithElementsSatisfying:(id /* block */)arg1 sortedBy:(id /* block */)arg2;
- (void)fc_splitArrayWithTest:(id /* block */)arg1 result:(id /* block */)arg2;
- (id)fc_subarrayFromCount:(unsigned long long)arg1;
- (id)fc_subarrayFromIndex:(unsigned long long)arg1 inclusive:(bool)arg2;
- (id)fc_subarrayFromIndex:(unsigned long long)arg1 withMaxCount:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)fc_subarrayInOrder:(unsigned long long)arg1 relativeToIndex:(unsigned long long)arg2 inclusive:(bool)arg3;
- (id)fc_subarrayInOrder:(unsigned long long)arg1 relativeToIndex:(unsigned long long)arg2 withMaxCount:(unsigned long long)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (id)fc_subarrayToIndex:(unsigned long long)arg1 withMaxCount:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)fc_subarrayUpToCountInclusive:(unsigned long long)arg1;
- (id)fc_subarrayUpToIndex:(unsigned long long)arg1 inclusive:(bool)arg2;
- (void)fc_subarrayWithCount:(unsigned long long)arg1 result:(id /* block */)arg2;
- (id)fc_subarrayWithMaxCount:(unsigned long long)arg1;
- (id)fc_subarrayWithPercentFromBeginning:(double)arg1;
- (id)fc_subarrayWithPercentToEnd:(double)arg1;
- (id)fc_uniqueByValueBlock:(id /* block */)arg1;
- (unsigned long long)fc_uniqueCount;
- (void)fc_visitSubarraysWithMaxCount:(unsigned long long)arg1 block:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)arrayByGroupingIntoArraysWithMaxCount:(unsigned long long)arg1;
- (bool)containsObjectPassingTest:(id /* block */)arg1;
- (bool)ic_indexIsValid:(long long)arg1;
- (unsigned long long)ic_indexOfSortedObject:(id)arg1 insertionIndex:(out unsigned long long*)arg2 usingComparator:(id /* block */)arg3;
- (id)objectAfter:(id)arg1;
- (id)objectAfter:(id)arg1 wrap:(bool)arg2;
- (id)objectBefore:(id)arg1;
- (id)objectBefore:(id)arg1 wrap:(bool)arg2;
- (id)objectPassingTest:(id /* block */)arg1;
- (id)objectsOfClass:(Class)arg1;
- (id)objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)dictionaryByHashingContentWithFunction:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_arrayByUnioningArray:(id)arg1 withArray:(id)arg2;
+ (id)tsu_arrayWithCGFloats:(double*)arg1 count:(unsigned long long)arg2;
+ (id)tsu_arrayWithInts:(int*)arg1 count:(unsigned long long)arg2;
+ (id)tsu_arrayWithNonNilObject:(id)arg1;
+ (id)tsu_arrayWithUIntegers:(unsigned long long*)arg1 count:(unsigned long long)arg2;

- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)tsu_anyObject;
- (id)tsu_arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)tsu_arrayByFlattening;
- (id)tsu_arrayByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_arrayByReversingOrder;
- (id)tsu_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)tsu_arrayOfObjectsPassingTest:(id /* block */)arg1;
- (id)tsu_arrayWithObjectsInSet:(id)arg1;
- (bool)tsu_containsObjectPassingTest:(id /* block */)arg1;
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_firstObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)tsu_indexOfSmallestObject;
- (id)tsu_indexesOfObjects:(id)arg1;
- (id)tsu_initWithCGFloats:(double*)arg1 count:(unsigned long long)arg2;
- (id)tsu_initWithInts:(int*)arg1 count:(unsigned long long)arg2;
- (id)tsu_initWithUIntegers:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)tsu_intersectionWithArray:(id)arg1;
- (bool)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_objectPriorToObject:(id)arg1;
- (id)tsu_onlyObject;
- (id)tsu_rangeCheckedObjectAtIndex:(unsigned long long)arg1;
- (id)tsu_uniqueObjects;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)paymentBillingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentContactInvalidErrorWithContactField:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentShippingAddressInvalidErrorWithKey:(id)arg1 localizedDescription:(id)arg2;
+ (id)paymentShippingAddressUnserviceableErrorWithLocalizedDescription:(id)arg1;
+ (id)pk_FilteredBillingErrorsForContactFields:(id)arg1 errors:(id)arg2;
+ (id)pk_FilteredCardErrors:(id)arg1;
+ (id)pk_FilteredShippingErrorsForContactFields:(id)arg1 errors:(id)arg2;

- (id)pk_arrayByApplyingBlock:(id /* block */)arg1;
- (id)pk_arrayByRemovingObject:(id)arg1;
- (id)pk_arrayByRemovingObjectsInArray:(id)arg1;
- (bool)pk_containsObjectPassingTest:(id /* block */)arg1;
- (id)pk_objectsPassingTest:(id /* block */)arg1;
- (id)pk_shuffledArray;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

- (id)pr_objectPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

- (id)anyObject;
- (id)flattenWithSeparator:(id)arg1;
- (id)indentBy:(unsigned long long)arg1 withSeparator:(id)arg2;
- (id)map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

- (void)persistenceDelegate_enumerateInChunksOfSize:(unsigned long long)arg1 withOverageAllowance:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport

- (bool)b_boolAtIndex:(unsigned long long)arg1;
- (bool)bl_boolAtIndex:(unsigned long long)arg1 defaultValue:(bool)arg2;
- (bool)bl_containsObjectIdenticalTo:(id)arg1;
- (double)bl_doubleAtIndex:(unsigned long long)arg1;
- (double)bl_doubleAtIndex:(unsigned long long)arg1 defaultValue:(double)arg2;
- (id)bl_firstObjectWithStringValue:(id)arg1 forKey:(id)arg2;
- (float)bl_floatAtIndex:(unsigned long long)arg1;
- (float)bl_floatAtIndex:(unsigned long long)arg1 defaultValue:(float)arg2;
- (long long)bl_intAtIndex:(unsigned long long)arg1;
- (long long)bl_intAtIndex:(unsigned long long)arg1 defaultValue:(long long)arg2;
- (id)bl_nextToLastObject;
- (id)bl_objectAtIndex:(unsigned long long)arg1 defaultValue:(id)arg2;
- (id)bl_objectAtIndexNoThrow:(long long)arg1;
- (id)bl_objectOrNullAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bl_rectAtIndex:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bl_rectAtIndex:(unsigned long long)arg1 defaultValue:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)bl_secondObject;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (bool)_pl_any:(id /* block */)arg1;
- (id)_pl_filter:(id /* block */)arg1;
- (id)_pl_firstObjectPassingTest:(id /* block */)arg1;
- (id)_pl_flatMap:(id /* block */)arg1;
- (id)_pl_groupBy:(id /* block */)arg1;
- (id)_pl_indexBy:(id /* block */)arg1;
- (id)_pl_map:(id /* block */)arg1;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)pl_arrayOfUniqueObjectsNotInOrderedSet:(id)arg1;
- (unsigned long long)pl_countOfObjectsPassingTest:(id /* block */)arg1;
- (unsigned long long)pl_indexOfFirstObjectInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 passingTest:(id /* block */)arg2;
- (unsigned long long)pl_indexOfFirstObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)pl_indexOfLastObjectInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 passingTest:(id /* block */)arg2;
- (unsigned long long)pl_indexOfLastObjectPassingTest:(id /* block */)arg1;
- (id)pl_shortDescription;

// Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision

- (id)fetchedObjects;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

+ (id)arrayWithValues:(id)arg1 inBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

+ (void)pk_updateSpecifiers:(id)arg1 withIconsFromCache:(id)arg2;
+ (void)pk_updateSpecifiers:(id)arg1 withIconsFromCache:(id)arg2 isInterfaceRTL:(bool)arg3;

- (id)arrayByPerformingSpecifierUpdatesUsingBlock:(id /* block */)arg1;
- (unsigned long long)indexOfSpecifierWithID:(id)arg1;
- (id)specifierForID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI

- (bool)containsString:(id)arg1;
- (id)firstObjectPassingTest:(id /* block */)arg1;
- (id)objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

- (id)rc_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)rc_arrayByTransformingWithBlockWithIndex:(id /* block */)arg1;
- (bool)rc_containsObjectPassingTest:(id /* block */)arg1;
- (id)rc_firstObjectPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

- (id)_sa_mappedArrayWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_arrayFromDictionaryOfObjectsByIndex:(id)arg1;
+ (id)safari_arrayWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;

- (id)_safari_computeLengthsOfLongestSubsequencesCommonWithArray:(id)arg1;
- (id)_safari_generateDiffWithLongestCommonSubsequenceLengths:(id)arg1 array:(id)arg2 indexIntoSelf:(unsigned long long)arg3 indexIntoArray:(unsigned long long)arg4;
- (id)safari_URLAtIndex:(unsigned long long)arg1;
- (id)safari_arrayAtIndex:(unsigned long long)arg1;
- (bool)safari_containsObjectPassingTest:(id /* block */)arg1;
- (id)safari_dictionaryAtIndex:(unsigned long long)arg1;
- (id)safari_diffWithArray:(id)arg1;
- (id)safari_filterObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_firstObjectPassingTest:(id /* block */)arg1;
- (id)safari_groupUsingBlock:(id /* block */)arg1;
- (id)safari_mapAndFilterObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_mapAndFilterObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)safari_mapObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_maximumUsingComparator:(id /* block */)arg1;
- (id)safari_minimumUsingComparator:(id /* block */)arg1;
- (id)safari_numberAtIndex:(unsigned long long)arg1;
- (id)safari_reduceObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_reduceObjectsWithInitialValue:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)safari_setByApplyingBlock:(id /* block */)arg1;
- (id)safari_stringAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id)safari_translateToArrayOfParsecModelsOfClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (id)scrc_deepMutableCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/Search.framework/Search

- (id)sp_copyForFeedback;
- (id)sp_mapNonEmpty:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant

- (id)by_actionsByRemovingAction:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing

- (void)sf_differencesFromArray:(id)arg1 removedIndexes:(id*)arg2 insertedIndexes:(id*)arg3;
- (void)sf_differencesFromArray:(id)arg1 usingComparator:(id /* block */)arg2 removedIndexes:(id*)arg3 insertedIndexes:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (bool)containsAnyObjects:(id)arg1;
- (bool)containsObjects:(id)arg1;
- (id)indexesOfObjects:(id)arg1;
- (id)objectPassingTest:(id /* block */)arg1;
- (id)objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

- (id)mapNonEmpty:(id /* block */)arg1;
- (id)prs_arrayAtIndex:(unsigned long long)arg1;
- (id)prs_dictionaryAtIndex:(unsigned long long)arg1;
- (id)prs_filterObjectsUsingBlock:(id /* block */)arg1;
- (id)prs_mapAndFilterObjectsUsingBlock:(id /* block */)arg1;
- (id)prs_mapObjectsUsingBlock:(id /* block */)arg1;
- (id)prs_numberAtIndex:(unsigned long long)arg1;
- (id)prs_stringAtIndex:(unsigned long long)arg1;
- (id)stringRepresentation;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

- (bool)sck_containsObjectPassingTest:(id /* block */)arg1;
- (id)sck_dictionaryWithKeyBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (bool)_ss_any:(id /* block */)arg1;
- (id)_ss_arrayByRemovingObjectsPassingTest:(id /* block */)arg1;
- (id)_ss_filterUsingTest:(id /* block */)arg1;
- (id)_ss_firstObjectPassingTest:(id /* block */)arg1;
- (id)_ss_index:(id /* block */)arg1;
- (id)_ss_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (int)propertyAtIndex:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)arrayWithCGFloats:(double*)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithInts:(int*)arg1 count:(unsigned long long)arg2;

- (void)appendJsonStringToString:(id)arg1;
- (id)initWithCGFloats:(double*)arg1 count:(unsigned long long)arg2;
- (id)initWithInts:(int*)arg1 count:(unsigned long long)arg2;
- (id)tsu_arrayByFlattening;
- (id)tsu_arrayByMakingObjectsPerformSelector:(SEL)arg1;
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_arrayByRemovingObjectsInArray:(id)arg1;
- (id)tsu_arrayByReversingOrder;
- (id)tsu_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)tsu_arrayOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (id)tsu_arrayOfObjectsPassingTest:(id /* block */)arg1;
- (id)tsu_arrayWithObjectsInSet:(id)arg1;
- (bool)tsu_containsObjectIdenticalTo:(id)arg1;
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_firstObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)tsu_indexOfSmallestObject;
- (id)tsu_indexesOfObjects:(id)arg1;
- (id)tsu_intersectionWithArray:(id)arg1;
- (void)tsu_makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)tsu_makeObjectsPerformSelectorIfImplemented:(SEL)arg1;
- (void)tsu_makeObjectsPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (id)tsu_map:(id /* block */)arg1;
- (id)tsu_mutableArrayByMakingObjectsPerformSelector:(SEL)arg1;
- (id)tsu_objectAfterObjectIdenticalTo:(id)arg1;
- (id)tsu_objectBeforeObjectIdenticalTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_arrayByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tv_randomizedArray;

// Image: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC

- (id)firstObjectPassingTest:(id /* block */)arg1;
- (bool)hasObjectPassingTest:(id /* block */)arg1;
- (id)map:(id /* block */)arg1;
- (id)max:(id /* block */)arg1;
- (id)objectsPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

- (id)_arrayByFilteringCandidatesForNonExtendedView;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

- (id)deletionRangesWithElementsToKeep:(id)arg1;
- (id)mecabraCandidateSurfaces;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)accessibilityElements;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_filteredArrayOfObjectsPassingTest:(id /* block */)arg1;
- (id)_initWithObjectsFromArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct CGSize { double x1; double x2; })_legacy_drawComponentsJoinedByString:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; }*)arg2 forWidth:(double)arg3 withFont:(id)arg4 lineBreakMode:(long long)arg5;
- (void)_makeObjectsPerformSelector:(SEL)arg1 object:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)_ui_firstObject;
- (id)_ui_onlyObject;
- (id)ui_arrayByRemovingLastObjectEqualTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (bool)uns_containsSimilarRecord:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

- (id)vcp_adjustmentsResource;
- (id)vcp_avAsset:(bool)arg1;
- (float)vcp_getFpsRate;
- (bool)vcp_hasLocalAdjustments;
- (bool)vcp_hasLocalMovie:(bool)arg1;
- (bool)vcp_hasLocalPhoto:(bool)arg1;
- (bool)vcp_hasLocalSlowmo;
- (bool)vcp_isOriginalLocal;
- (id)vcp_localMovieResourcesSorted:(bool)arg1;
- (id)vcp_localPhotoResourcesSorted:(bool)arg1;
- (id)vcp_originalResource;
- (id)vcp_originalVideoResource;
- (id)vcp_resourceWithType:(unsigned long long)arg1;
- (id)vcp_thumbnailResource;

// Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras

- (bool)ikAssetArraysEqual:(id)arg1;
- (id)ikAssetAttributes;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

- (id)vui_arrayByApplyingChangeSet:(id)arg1 destinationObjects:(id)arg2;
- (id)vui_arrayByApplyingChangeSet:(id)arg1 destinationObjects:(id)arg2 updateObjectBlock:(id /* block */)arg3;
- (id)vui_arrayByApplyingChangeSet:(id)arg1 destinationObjectsBlock:(id /* block */)arg2;
- (id)vui_arrayByApplyingChangeSet:(id)arg1 destinationObjectsBlock:(id /* block */)arg2 updateObjectBlock:(id /* block */)arg3;
- (id)vui_deepCopy;

// Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices

- (id)_nextKeywordUsingCursors:(struct __CFDictionary { }*)arg1;
- (id)_scrambledKeywordsAndAddToSet:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)mappedWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

- (id)wlk_arrayDifference:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_web_lowercaseStrings;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

- (id)_matchingItem:(Class)arg1;
- (id)dnsSettings;
- (id)ipv4Settings;
- (id)ipv6Settings;
- (id)proxySettings;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

- (id)arrayAfterFilteringOutEmptyStrings;
- (id)stringFromContentsOfArray;
- (id)stringFromContentsOfArrayWithDelimiter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (bool)ICSContainsArray:(id)arg1;
- (void)_ICSParametersAppendingToString:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_ICSStringsForPropertyValuesWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsu_arrayByUnioningArray:(id)arg1 withArray:(id)arg2;
+ (id)tsu_arrayWithCGFloats:(const double*)arg1 count:(unsigned long long)arg2;
+ (id)tsu_arrayWithInts:(const int*)arg1 count:(unsigned long long)arg2;
+ (id)tsu_arrayWithNonNilObject:(id)arg1;
+ (id)tsu_arrayWithUIntegers:(const unsigned long long*)arg1 count:(unsigned long long)arg2;

- (bool)kn_isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)tsch_initTSCHChartGridValuesArrayWithProtobufGridRowArray:(const struct RepeatedPtrField<TSCH::GridRow> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsch_initTSCHChartGridValuesWithProtobufGridRow:(const struct GridRow { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCH::GridValue> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;
- (id)tsch_initWithSwapTupleArray:(const struct RepeatedPtrField<TSCH::StyleSwapUndoTupleArchive> { void **x1; int x2; int x3; int x4; }*)arg1 unarchiver:(id)arg2;
- (id)tsch_initWithSwapTuples:(const struct StyleSwapUndoTuplesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCH::StyleSwapUndoTupleArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 unarchiver:(id)arg2;
- (id)tsch_initWithSwapTuplesArray:(const struct RepeatedPtrField<TSCH::StyleSwapUndoTuplesArchive> { void **x1; int x2; int x3; int x4; }*)arg1 unarchiver:(id)arg2;
- (void)tsch_saveTSCHChartGridValuesArrayToProtobufGridRowArray:(struct RepeatedPtrField<TSCH::GridRow> { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)tsch_saveTSCHChartGridValuesToProtobufGridRow:(struct GridRow { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCH::GridValue> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;
- (void)tsch_saveToSwapTupleArray:(struct RepeatedPtrField<TSCH::StyleSwapUndoTupleArchive> { void **x1; int x2; int x3; int x4; }*)arg1 archiver:(id)arg2;
- (void)tsch_saveToSwapTuples:(struct StyleSwapUndoTuplesArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCH::StyleSwapUndoTupleArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 archiver:(id)arg2;
- (void)tsch_saveToSwapTuplesArray:(struct RepeatedPtrField<TSCH::StyleSwapUndoTuplesArchive> { void **x1; int x2; int x3; int x4; }*)arg1 archiver:(id)arg2;
- (id)tsd_initWithExteriorTextWrapArray:(const struct RepeatedPtrField<TSD::ExteriorTextWrapArchive> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsd_initWithGeometryArray:(const struct RepeatedPtrField<TSD::GeometryArchive> { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)tsd_saveToExteriorTextWrapArray:(struct RepeatedPtrField<TSD::ExteriorTextWrapArchive> { void **x1; int x2; int x3; int x4; }*)arg1 archiver:(id)arg2;
- (void)tsd_saveToGeometryArray:(struct RepeatedPtrField<TSD::GeometryArchive> { void **x1; int x2; int x3; int x4; }*)arg1 archiver:(id)arg2;
- (void)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)tsp_deepCopyWithContext:(id)arg1 options:(id)arg2 objectMap:(id*)arg3 error:(id*)arg4;
- (id)tsp_initWithColorArray:(const struct RepeatedPtrField<TSP::Color> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsp_initWithNSRangeArray:(const struct RepeatedPtrField<TSP::Range> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsp_initWithProtobufStringArray:(const struct RepeatedPtrField<std::__1::basic_string<char> > { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsp_initWithProtobufUUIDArray:(const struct RepeatedPtrField<TSP::UUID> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsp_initWithUInt32Array:(const struct RepeatedField<unsigned int> { unsigned int *x1; int x2; int x3; }*)arg1;
- (void)tsp_saveToColorArray:(struct RepeatedPtrField<TSP::Color> { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)tsp_saveToNSRangeArray:(struct RepeatedPtrField<TSP::Range> { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)tsp_saveToProtobufStringArray:(struct RepeatedPtrField<std::__1::basic_string<char> > { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)tsp_saveToProtobufUUIDArray:(struct RepeatedPtrField<TSP::UUID> { void **x1; int x2; int x3; int x4; }*)arg1;
- (void)tsp_saveToUInt32Array:(struct RepeatedField<unsigned int> { unsigned int *x1; int x2; int x3; }*)arg1;
- (int)tss_propertyAtIndex:(unsigned int)arg1;
- (id)tsu_anyObject;
- (id)tsu_arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)tsu_arrayByFlattening;
- (id)tsu_arrayByMappingObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_arrayByRemovingFirstObject;
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_arrayByReversingOrder;
- (id)tsu_arrayByTransformingWithBlock:(id /* block */)arg1;
- (id)tsu_arrayOfObjectsPassingTest:(id /* block */)arg1;
- (id)tsu_arrayWithObjectsInSet:(id)arg1;
- (bool)tsu_containsObjectPassingTest:(id /* block */)arg1;
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(id /* block */)arg1;
- (id)tsu_firstObjectPassingTest:(id /* block */)arg1;
- (unsigned long long)tsu_indexOfSmallestObject;
- (id)tsu_indexesOfObjects:(id)arg1;
- (id)tsu_initWithCGFloats:(const double*)arg1 count:(unsigned long long)arg2;
- (id)tsu_initWithInts:(const int*)arg1 count:(unsigned long long)arg2;
- (id)tsu_initWithUIntegers:(const unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)tsu_intersectionWithArray:(id)arg1;
- (bool)tsu_isHomogeneousForClass:(Class)arg1;
- (id)tsu_localizedList;
- (id)tsu_objectPriorToObject:(id)arg1;
- (id)tsu_onlyObject;
- (id)tsu_rangeCheckedObjectAtIndex:(unsigned long long)arg1;
- (id)tsu_uniqueObjects;

// Image: /usr/lib/libprequelite.dylib

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
