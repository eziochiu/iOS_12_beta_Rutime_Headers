/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSpotlightItemUtils : NSObject

+ (id)_contactsForEmailAddresses:(id)arg1 names:(id)arg2;
+ (id)_contactsForPersons:(id)arg1;
+ (id)_locationMetadataForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)_metadataForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)collectionEventForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (bool)contentTypeTree:(id)arg1 conformsToUTIType:(id)arg2;
+ (bool)contentTypeTree:(id)arg1 conformsToUTITypes:(id)arg2;
+ (id)contextDictionaryForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)expectedSupportedUTIs;
+ (id)expectedUTIsForMechanism:(long long)arg1;
+ (long long)getInteractionMechanismForContentUTI:(id)arg1 typeTree:(id)arg2;
+ (id)interactionForSearchableItem:(id)arg1;
+ (id)interactionUUIDForSearchableItemWithUID:(id)arg1 bundleID:(id)arg2;
+ (bool)isLocationBasedItem:(id)arg1;
+ (id)knowledgeEventsForSearchableItem:(id)arg1 userAction:(id)arg2;
+ (id)mechanismUtiMap;
+ (id)policies;
+ (id)querySpotlightItemsWithStartDate:(id)arg1 endDate:(id)arg2 getMail:(bool)arg3 getMessages:(bool)arg4;
+ (id)safariUTIs;
+ (bool)shouldFilterEmailAddress:(id)arg1;
+ (bool)uncachedUtType:(id)arg1 conformsTo:(id)arg2;
+ (bool)utType:(id)arg1 conformsTo:(id)arg2;
+ (id)utiConformCache;

@end
