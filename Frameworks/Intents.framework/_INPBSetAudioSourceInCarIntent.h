/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetAudioSourceInCarIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSetAudioSourceInCarIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    int  _audioSource;
    struct { 
        unsigned int audioSource : 1; 
        unsigned int relativeAudioSourceReference : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _relativeAudioSourceReference;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) int audioSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAudioSource;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasRelativeAudioSourceReference;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int relativeAudioSourceReference;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsAudioSource:(id)arg1;
- (int)StringAsRelativeAudioSourceReference:(id)arg1;
- (id)associatedCodableAttribute;
- (int)audioSource;
- (id)audioSourceAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasAudioSource;
- (bool)hasIntentMetadata;
- (bool)hasRelativeAudioSourceReference;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)relativeAudioSourceReference;
- (id)relativeAudioSourceReferenceAsString:(int)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setAudioSource:(int)arg1;
- (void)setHasAudioSource:(bool)arg1;
- (void)setHasRelativeAudioSourceReference:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setRelativeAudioSourceReference:(int)arg1;
- (void)writeTo:(id)arg1;

@end
