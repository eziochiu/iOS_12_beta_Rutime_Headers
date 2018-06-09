/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiAssociation : PBCodable <NSCopying> {
    int  _band;
    NSData * _bssidOui;
    int  _channel;
    NSString * _countryCode;
    int  _deauthReason;
    NSData * _deauthSourceOui;
    unsigned int  _error;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int band : 1; 
        unsigned int channel : 1; 
        unsigned int deauthReason : 1; 
        unsigned int error : 1; 
        unsigned int noise : 1; 
        unsigned int phymode : 1; 
        unsigned int signal : 1; 
        unsigned int txrate : 1; 
    }  _has;
    int  _noise;
    unsigned int  _phymode;
    NSString * _security;
    int  _signal;
    unsigned long long  _timestamp;
    int  _txrate;
}

@property (nonatomic) int band;
@property (nonatomic, retain) NSData *bssidOui;
@property (nonatomic) int channel;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic) int deauthReason;
@property (nonatomic, retain) NSData *deauthSourceOui;
@property (nonatomic) unsigned int error;
@property (nonatomic) bool hasBand;
@property (nonatomic, readonly) bool hasBssidOui;
@property (nonatomic) bool hasChannel;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic) bool hasDeauthReason;
@property (nonatomic, readonly) bool hasDeauthSourceOui;
@property (nonatomic) bool hasError;
@property (nonatomic) bool hasNoise;
@property (nonatomic) bool hasPhymode;
@property (nonatomic, readonly) bool hasSecurity;
@property (nonatomic) bool hasSignal;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTxrate;
@property (nonatomic) int noise;
@property (nonatomic) unsigned int phymode;
@property (nonatomic, retain) NSString *security;
@property (nonatomic) int signal;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int txrate;

- (int)band;
- (id)bssidOui;
- (int)channel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (int)deauthReason;
- (id)deauthSourceOui;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)error;
- (bool)hasBand;
- (bool)hasBssidOui;
- (bool)hasChannel;
- (bool)hasCountryCode;
- (bool)hasDeauthReason;
- (bool)hasDeauthSourceOui;
- (bool)hasError;
- (bool)hasNoise;
- (bool)hasPhymode;
- (bool)hasSecurity;
- (bool)hasSignal;
- (bool)hasTimestamp;
- (bool)hasTxrate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)noise;
- (unsigned int)phymode;
- (bool)readFrom:(id)arg1;
- (id)security;
- (void)setBand:(int)arg1;
- (void)setBssidOui:(id)arg1;
- (void)setChannel:(int)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDeauthReason:(int)arg1;
- (void)setDeauthSourceOui:(id)arg1;
- (void)setError:(unsigned int)arg1;
- (void)setHasBand:(bool)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasDeauthReason:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasNoise:(bool)arg1;
- (void)setHasPhymode:(bool)arg1;
- (void)setHasSignal:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTxrate:(bool)arg1;
- (void)setNoise:(int)arg1;
- (void)setPhymode:(unsigned int)arg1;
- (void)setSecurity:(id)arg1;
- (void)setSignal:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTxrate:(int)arg1;
- (int)signal;
- (unsigned long long)timestamp;
- (int)txrate;
- (void)writeTo:(id)arg1;

@end
