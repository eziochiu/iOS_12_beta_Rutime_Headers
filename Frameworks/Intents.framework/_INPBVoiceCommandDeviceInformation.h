/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBVoiceCommandDeviceInformation : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBVoiceCommandDeviceInformation> {
    INCodableAttribute * _associatedCodableAttribute;
    int  _deviceIdiom;
    struct { 
        unsigned int deviceIdiom : 1; 
        unsigned int isHomePodInUltimateMode : 1; 
    }  _has;
    bool  _isHomePodInUltimateMode;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceIdiom;
@property (nonatomic) bool hasDeviceIdiom;
@property (nonatomic) bool hasIsHomePodInUltimateMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isHomePodInUltimateMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsDeviceIdiom:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deviceIdiom;
- (id)deviceIdiomAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasDeviceIdiom;
- (bool)hasIsHomePodInUltimateMode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isHomePodInUltimateMode;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setDeviceIdiom:(int)arg1;
- (void)setHasDeviceIdiom:(bool)arg1;
- (void)setHasIsHomePodInUltimateMode:(bool)arg1;
- (void)setIsHomePodInUltimateMode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
