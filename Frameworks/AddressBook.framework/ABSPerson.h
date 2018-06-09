/* made by EzioChiu
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABSPerson : NSObject <ABSRecord> {
    ABSAddressBook * _addressBook;
    CNMutableContact * _cnImpl;
    NSMutableSet * _nonNilSetProperties;
    NSString * _revertedRecordIdentifier;
    ABSSource * _source;
}

@property (nonatomic, readonly) NSString *CNIdentifierString;
@property (nonatomic) ABSAddressBook *addressBook;
@property (nonatomic, retain) CNMutableContact *cnImpl;
@property (nonatomic, readonly) NSString *compositeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int id;
@property (nonatomic, retain) NSMutableSet *nonNilSetProperties;
@property (nonatomic, retain) NSString *revertedRecordIdentifier;
@property (nonatomic) ABSSource *source;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int type;

+ (unsigned int)compositeNameFormat;
+ (unsigned int)compositeNameFormatForPerson:(id)arg1;
+ (id)copyCompositeNameDelimiterForPerson:(id)arg1;
+ (id)createPeopleInSource:(id)arg1 withVCardRepresentation:(id)arg2;
+ (id)defaultKeysToFetch;
+ (id)localizedNameForProperty:(int)arg1;
+ (id)nameForProperty:(int)arg1;
+ (id)propertyKeyForPropertyID:(int)arg1;
+ (void)setCompositeNameFormat:(unsigned int)arg1;
+ (unsigned int)sortOrdering;
+ (unsigned int)typeForProperty:(int)arg1;
+ (id)vCardRepresentationForPeople:(id)arg1;

- (void).cxx_destruct;
- (id)CNIdentifierString;
- (unsigned long long)_cfTypeID;
- (id)addressBook;
- (id)cnImpl;
- (long long)comparePersonByName:(id)arg1 sortOrdering:(unsigned int)arg2;
- (bool)completeCNImplIfNeededWithKeysToFetch:(id)arg1;
- (id)compositeName;
- (unsigned int)compositeNameFormat;
- (id)copyCompositeNameDelimiter;
- (id)copyImageData;
- (id)copyImageDataWithFormat:(int)arg1;
- (const void*)copyValueForProperty:(int)arg1;
- (bool)hasImageData;
- (int)id;
- (id)init;
- (id)initWithMutableContact:(id)arg1;
- (id)initWithMutableContact:(id)arg1 source:(id)arg2;
- (id)initWithSource:(id)arg1;
- (id)linkedPeople;
- (id)nonNilSetProperties;
- (bool)removeImageDataWithError:(id*)arg1;
- (bool)removeProperty:(int)arg1 withError:(id*)arg2;
- (void)replaceRecordStorageWithCNObject:(id)arg1;
- (id)revertedRecordIdentifier;
- (void)setAddressBook:(id)arg1;
- (void)setCnImpl:(id)arg1;
- (bool)setImageData:(id)arg1 withError:(id*)arg2;
- (void)setNonNilSetProperties:(id)arg1;
- (void)setRevertedRecordIdentifier:(id)arg1;
- (void)setSource:(id)arg1;
- (bool)setValue:(void*)arg1 forProperty:(int)arg2 withError:(struct __CFError {}**)arg3;
- (id)source;
- (unsigned int)type;

@end
