/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSAddressBookMatch : WBSFormAutoFillItem {
    NSString * _identifier;
    NSString * _key;
    NSString * _label;
    NSString * _property;
    NSString * _uniqueID;
    id  _value;
}

@property (nonatomic, copy) NSDate *dateValue;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, copy) NSString *property;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)addressBookMatchWithDictionaryRepresentation:(id)arg1;

- (void).cxx_destruct;
- (void)_setValue:(id)arg1;
- (id)completion;
- (id)dateValue;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4;
- (id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 label:(id)arg5;
- (id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 label:(id)arg5 uniqueID:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)label;
- (id)property;
- (void)setDateValue:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)uniqueID;

@end
