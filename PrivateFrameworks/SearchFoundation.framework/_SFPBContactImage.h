/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBContactImage : PBCodable <NSSecureCoding, _SFPBContactImage> {
    NSString * _contactIdentifier;
    NSArray * _contactIdentifiers;
    bool  _threeDTouchEnabled;
}

@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSArray *contactIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) bool threeDTouchEnabled;

- (void).cxx_destruct;
- (void)addContactIdentifiers:(id)arg1;
- (void)clearContactIdentifiers;
- (id)contactIdentifier;
- (id)contactIdentifiers;
- (id)contactIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactIdentifiersCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setContactIdentifiers:(id)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (bool)threeDTouchEnabled;
- (void)writeTo:(id)arg1;

@end
