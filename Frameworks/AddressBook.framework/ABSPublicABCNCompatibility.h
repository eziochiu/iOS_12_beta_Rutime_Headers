/* made by EzioChiu
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABSPublicABCNCompatibility : NSObject

+ (id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2;
+ (id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(bool)arg3;
+ (id)contactPropertyKeyFromPublicABPropertyID:(int)arg1;
+ (id)contactStoreForPublicAddressBook:(void*)arg1;
+ (id)createAddressBookForConversion;
+ (id)labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3 contactStore:(id)arg4;
+ (bool)overwritePublicABPerson:(void*)arg1 withContact:(id)arg2;
+ (void*)publicABPersonFromContact:(id)arg1 contactStore:(id)arg2 publicAddressBook:(const void**)arg3;
+ (int)publicABPropertyIDFromContactPropertyKey:(id)arg1;
+ (int)publicMultiValueIdentifierFromLabeledValue:(id)arg1 contactStore:(id)arg2;
+ (bool)updateNewPublicABPerson:(void*)arg1 withSavedContact:(id)arg2 inAddressBook:(void*)arg3;

@end
