/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartAudioCallIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBStartAudioCallIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    int  _audioRoute;
    NSArray * _contacts;
    int  _destinationType;
    struct { 
        unsigned int audioRoute : 1; 
        unsigned int destinationType : 1; 
        unsigned int preferredCallProvider : 1; 
        unsigned int ttyType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _preferredCallProvider;
    NSArray * _targetContacts;
    int  _ttyType;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) int audioRoute;
@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic, readonly) unsigned long long contactsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int destinationType;
@property (nonatomic) bool hasAudioRoute;
@property (nonatomic) bool hasDestinationType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasPreferredCallProvider;
@property (nonatomic) bool hasTtyType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int preferredCallProvider;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *targetContacts;
@property (nonatomic, readonly) unsigned long long targetContactsCount;
@property (nonatomic) int ttyType;

+ (Class)contactType;
+ (Class)targetContactsType;

- (void).cxx_destruct;
- (int)StringAsAudioRoute:(id)arg1;
- (int)StringAsDestinationType:(id)arg1;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (int)StringAsTTYType:(id)arg1;
- (void)addContact:(id)arg1;
- (void)addTargetContacts:(id)arg1;
- (id)associatedCodableAttribute;
- (int)audioRoute;
- (id)audioRouteAsString:(int)arg1;
- (void)clearContacts;
- (void)clearTargetContacts;
- (id)contactAtIndex:(unsigned long long)arg1;
- (id)contacts;
- (unsigned long long)contactsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)destinationType;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasAudioRoute;
- (bool)hasDestinationType;
- (bool)hasIntentMetadata;
- (bool)hasPreferredCallProvider;
- (bool)hasTtyType;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (int)preferredCallProvider;
- (id)preferredCallProviderAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setAudioRoute:(int)arg1;
- (void)setContacts:(id)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasPreferredCallProvider:(bool)arg1;
- (void)setHasTtyType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPreferredCallProvider:(int)arg1;
- (void)setTargetContacts:(id)arg1;
- (void)setTtyType:(int)arg1;
- (id)targetContacts;
- (id)targetContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetContactsCount;
- (int)ttyType;
- (id)ttyTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
