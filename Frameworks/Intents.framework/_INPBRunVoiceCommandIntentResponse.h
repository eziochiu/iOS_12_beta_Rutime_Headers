/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRunVoiceCommandIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBRunVoiceCommandIntentResponse> {
    NSString * _appBundleId;
    INCodableAttribute * _associatedCodableAttribute;
    bool  _customResponsesDisabled;
    struct { 
        unsigned int customResponsesDisabled : 1; 
        unsigned int intentCategory : 1; 
        unsigned int toggleState : 1; 
    }  _has;
    int  _intentCategory;
    NSString * _localizedAppName;
    _INPBDictionary * _parameters;
    NSString * _responseTemplate;
    int  _toggleState;
    _INPBArchivedObject * _underlyingIntent;
    _INPBArchivedObject * _underlyingIntentResponse;
    NSString * _verb;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) bool customResponsesDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAppBundleId;
@property (nonatomic) bool hasCustomResponsesDisabled;
@property (nonatomic) bool hasIntentCategory;
@property (nonatomic, readonly) bool hasLocalizedAppName;
@property (nonatomic, readonly) bool hasParameters;
@property (nonatomic, readonly) bool hasResponseTemplate;
@property (nonatomic) bool hasToggleState;
@property (nonatomic, readonly) bool hasUnderlyingIntent;
@property (nonatomic, readonly) bool hasUnderlyingIntentResponse;
@property (nonatomic, readonly) bool hasVerb;
@property (readonly) unsigned long long hash;
@property (nonatomic) int intentCategory;
@property (nonatomic, copy) NSString *localizedAppName;
@property (nonatomic, retain) _INPBDictionary *parameters;
@property (nonatomic, copy) NSString *responseTemplate;
@property (readonly) Class superclass;
@property (nonatomic) int toggleState;
@property (nonatomic, retain) _INPBArchivedObject *underlyingIntent;
@property (nonatomic, retain) _INPBArchivedObject *underlyingIntentResponse;
@property (nonatomic, copy) NSString *verb;

- (void).cxx_destruct;
- (int)StringAsIntentCategory:(id)arg1;
- (int)StringAsToggleState:(id)arg1;
- (id)appBundleId;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)customResponsesDisabled;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleId;
- (bool)hasCustomResponsesDisabled;
- (bool)hasIntentCategory;
- (bool)hasLocalizedAppName;
- (bool)hasParameters;
- (bool)hasResponseTemplate;
- (bool)hasToggleState;
- (bool)hasUnderlyingIntent;
- (bool)hasUnderlyingIntentResponse;
- (bool)hasVerb;
- (unsigned long long)hash;
- (int)intentCategory;
- (id)intentCategoryAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedAppName;
- (id)parameters;
- (bool)readFrom:(id)arg1;
- (id)responseTemplate;
- (void)setAppBundleId:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCustomResponsesDisabled:(bool)arg1;
- (void)setHasCustomResponsesDisabled:(bool)arg1;
- (void)setHasIntentCategory:(bool)arg1;
- (void)setHasToggleState:(bool)arg1;
- (void)setIntentCategory:(int)arg1;
- (void)setLocalizedAppName:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setResponseTemplate:(id)arg1;
- (void)setToggleState:(int)arg1;
- (void)setUnderlyingIntent:(id)arg1;
- (void)setUnderlyingIntentResponse:(id)arg1;
- (void)setVerb:(id)arg1;
- (int)toggleState;
- (id)toggleStateAsString:(int)arg1;
- (id)underlyingIntent;
- (id)underlyingIntentResponse;
- (id)verb;
- (void)writeTo:(id)arg1;

@end
