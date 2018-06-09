/* made by EzioChiu
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABSSource : NSObject <ABSRecord> {
    CNAccount * _account;
    ABSAddressBook * _addressBook;
    CNMutableContainer * _cnImpl;
    int  _revertedRecordID;
    ABSSource * _source;
}

@property (nonatomic, readonly) NSString *CNIdentifierString;
@property (nonatomic, readonly) CNAccount *account;
@property (nonatomic) ABSAddressBook *addressBook;
@property (nonatomic, retain) CNMutableContainer *cnImpl;
@property (nonatomic, readonly) NSString *compositeName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int id;
@property (nonatomic) int revertedRecordID;
@property (nonatomic) ABSSource *source;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int type;

- (void).cxx_destruct;
- (id)CNIdentifierString;
- (unsigned long long)_cfTypeID;
- (id)account;
- (id)addressBook;
- (id)cnImpl;
- (id)compositeName;
- (const void*)copyValueForProperty:(int)arg1;
- (id)getAccount;
- (int)id;
- (id)initWithMutableContainer:(id)arg1;
- (bool)removeProperty:(int)arg1 withError:(id*)arg2;
- (void)replaceRecordStorageWithCNObject:(id)arg1;
- (int)revertedRecordID;
- (void)setAddressBook:(id)arg1;
- (void)setCnImpl:(id)arg1;
- (void)setRevertedRecordID:(int)arg1;
- (void)setSource:(id)arg1;
- (bool)setValue:(void*)arg1 forProperty:(int)arg2 withError:(struct __CFError {}**)arg3;
- (id)source;
- (unsigned int)type;
- (void)updateAllValuesWithValuesFromContainer:(id)arg1;

@end
