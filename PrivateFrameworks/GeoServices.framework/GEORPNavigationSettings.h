/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPNavigationSettings : PBCodable <NSCopying> {
    bool  _beepBeforeInstruction;
    unsigned long long  _distanceUnits;
    struct { 
        unsigned int distanceUnits : 1; 
        unsigned int maxAlternateRouteCount : 1; 
        unsigned int voiceVolume : 1; 
        unsigned int userPreferredTransportType : 1; 
        unsigned int beepBeforeInstruction : 1; 
        unsigned int muteSpeechOverride : 1; 
        unsigned int pauseSpokenAudio : 1; 
        unsigned int shouldUseGuidanceEventManager : 1; 
        unsigned int speechEnabled : 1; 
    }  _has;
    unsigned long long  _maxAlternateRouteCount;
    bool  _muteSpeechOverride;
    bool  _pauseSpokenAudio;
    bool  _shouldUseGuidanceEventManager;
    bool  _speechEnabled;
    int  _userPreferredTransportType;
    NSString * _voiceLanguage;
    unsigned long long  _voiceVolume;
}

@property (nonatomic) bool beepBeforeInstruction;
@property (nonatomic) unsigned long long distanceUnits;
@property (nonatomic) bool hasBeepBeforeInstruction;
@property (nonatomic) bool hasDistanceUnits;
@property (nonatomic) bool hasMaxAlternateRouteCount;
@property (nonatomic) bool hasMuteSpeechOverride;
@property (nonatomic) bool hasPauseSpokenAudio;
@property (nonatomic) bool hasShouldUseGuidanceEventManager;
@property (nonatomic) bool hasSpeechEnabled;
@property (nonatomic) bool hasUserPreferredTransportType;
@property (nonatomic, readonly) bool hasVoiceLanguage;
@property (nonatomic) bool hasVoiceVolume;
@property (nonatomic) unsigned long long maxAlternateRouteCount;
@property (nonatomic) bool muteSpeechOverride;
@property (nonatomic) bool pauseSpokenAudio;
@property (nonatomic) bool shouldUseGuidanceEventManager;
@property (nonatomic) bool speechEnabled;
@property (nonatomic) int userPreferredTransportType;
@property (nonatomic, retain) NSString *voiceLanguage;
@property (nonatomic) unsigned long long voiceVolume;

- (void).cxx_destruct;
- (int)StringAsUserPreferredTransportType:(id)arg1;
- (bool)beepBeforeInstruction;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)distanceUnits;
- (bool)hasBeepBeforeInstruction;
- (bool)hasDistanceUnits;
- (bool)hasMaxAlternateRouteCount;
- (bool)hasMuteSpeechOverride;
- (bool)hasPauseSpokenAudio;
- (bool)hasShouldUseGuidanceEventManager;
- (bool)hasSpeechEnabled;
- (bool)hasUserPreferredTransportType;
- (bool)hasVoiceLanguage;
- (bool)hasVoiceVolume;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxAlternateRouteCount;
- (void)mergeFrom:(id)arg1;
- (bool)muteSpeechOverride;
- (bool)pauseSpokenAudio;
- (bool)readFrom:(id)arg1;
- (void)setBeepBeforeInstruction:(bool)arg1;
- (void)setDistanceUnits:(unsigned long long)arg1;
- (void)setHasBeepBeforeInstruction:(bool)arg1;
- (void)setHasDistanceUnits:(bool)arg1;
- (void)setHasMaxAlternateRouteCount:(bool)arg1;
- (void)setHasMuteSpeechOverride:(bool)arg1;
- (void)setHasPauseSpokenAudio:(bool)arg1;
- (void)setHasShouldUseGuidanceEventManager:(bool)arg1;
- (void)setHasSpeechEnabled:(bool)arg1;
- (void)setHasUserPreferredTransportType:(bool)arg1;
- (void)setHasVoiceVolume:(bool)arg1;
- (void)setMaxAlternateRouteCount:(unsigned long long)arg1;
- (void)setMuteSpeechOverride:(bool)arg1;
- (void)setPauseSpokenAudio:(bool)arg1;
- (void)setShouldUseGuidanceEventManager:(bool)arg1;
- (void)setSpeechEnabled:(bool)arg1;
- (void)setUserPreferredTransportType:(int)arg1;
- (void)setVoiceLanguage:(id)arg1;
- (void)setVoiceVolume:(unsigned long long)arg1;
- (bool)shouldUseGuidanceEventManager;
- (bool)speechEnabled;
- (int)userPreferredTransportType;
- (id)userPreferredTransportTypeAsString:(int)arg1;
- (id)voiceLanguage;
- (unsigned long long)voiceVolume;
- (void)writeTo:(id)arg1;

@end
