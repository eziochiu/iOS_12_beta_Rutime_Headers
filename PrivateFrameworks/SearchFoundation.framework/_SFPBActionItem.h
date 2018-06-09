/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBActionItem : PBCodable <NSSecureCoding, _SFPBActionItem> {
    NSString * _applicationBundleIdentifier;
    _SFPBImage * _baseIcon;
    NSString * _contactIdentifier;
    NSString * _email;
    _SFPBImage * _icon;
    bool  _isITunes;
    bool  _isOverlay;
    NSString * _label;
    NSString * _labelForLocalMedia;
    NSString * _labelITunes;
    _SFPBGraphicalFloat * _latitude;
    NSString * _localMediaIdentifier;
    _SFPBLatLng * _location;
    _SFPBGraphicalFloat * _longitude;
    NSData * _mapsData;
    NSString * _messageIdentifier;
    _SFPBURL * _messageURL;
    NSString * _offerType;
    NSString * _phoneNumber;
    NSString * _provider;
    _SFPBPunchout * _punchout;
    bool  _requiresLocalMedia;
    NSArray * _storeIdentifiers;
    NSString * _type;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, retain) _SFPBImage *baseIcon;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *email;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBImage *icon;
@property (nonatomic) bool isITunes;
@property (nonatomic) bool isOverlay;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *labelForLocalMedia;
@property (nonatomic, copy) NSString *labelITunes;
@property (nonatomic, retain) _SFPBGraphicalFloat *latitude;
@property (nonatomic, copy) NSString *localMediaIdentifier;
@property (nonatomic, retain) _SFPBLatLng *location;
@property (nonatomic, retain) _SFPBGraphicalFloat *longitude;
@property (nonatomic, copy) NSData *mapsData;
@property (nonatomic, copy) NSString *messageIdentifier;
@property (nonatomic, retain) _SFPBURL *messageURL;
@property (nonatomic, copy) NSString *offerType;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *provider;
@property (nonatomic, retain) _SFPBPunchout *punchout;
@property (nonatomic) bool requiresLocalMedia;
@property (nonatomic, copy) NSArray *storeIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addStoreIdentifiers:(id)arg1;
- (id)applicationBundleIdentifier;
- (id)baseIcon;
- (void)clearStoreIdentifiers;
- (id)contactIdentifier;
- (id)dictionaryRepresentation;
- (id)email;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isITunes;
- (bool)isOverlay;
- (id)jsonData;
- (id)label;
- (id)labelForLocalMedia;
- (id)labelITunes;
- (id)latitude;
- (id)localMediaIdentifier;
- (id)location;
- (id)longitude;
- (id)mapsData;
- (id)messageIdentifier;
- (id)messageURL;
- (id)offerType;
- (id)phoneNumber;
- (id)provider;
- (id)punchout;
- (bool)readFrom:(id)arg1;
- (bool)requiresLocalMedia;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setBaseIcon:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIsITunes:(bool)arg1;
- (void)setIsOverlay:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelForLocalMedia:(id)arg1;
- (void)setLabelITunes:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLocalMediaIdentifier:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setMessageURL:(id)arg1;
- (void)setOfferType:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setRequiresLocalMedia:(bool)arg1;
- (void)setStoreIdentifiers:(id)arg1;
- (void)setType:(id)arg1;
- (id)storeIdentifiers;
- (id)storeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)storeIdentifiersCount;
- (id)type;
- (void)writeTo:(id)arg1;

@end
