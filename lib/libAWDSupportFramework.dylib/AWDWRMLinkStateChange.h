/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWRMLinkStateChange : PBCodable <NSCopying> {
    int  _btRssi;
    NSString * _bundleID;
    unsigned int  _ccAssertion;
    unsigned int  _enableCMAS;
    unsigned int  _enableTelephony;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int btRssi : 1; 
        unsigned int ccAssertion : 1; 
        unsigned int enableCMAS : 1; 
        unsigned int enableTelephony : 1; 
        unsigned int isTriggeredByProximityChange : 1; 
        unsigned int newLinkState : 1; 
        unsigned int oldLinkState : 1; 
        unsigned int siriApp : 1; 
        unsigned int wifiProximity : 1; 
        unsigned int wifiRssi : 1; 
    }  _has;
    unsigned int  _isTriggeredByProximityChange;
    unsigned int  _newLinkState;
    unsigned int  _oldLinkState;
    unsigned int  _siriApp;
    unsigned long long  _timestamp;
    unsigned int  _wifiProximity;
    int  _wifiRssi;
}

@property (nonatomic) int btRssi;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) unsigned int ccAssertion;
@property (nonatomic) unsigned int enableCMAS;
@property (nonatomic) unsigned int enableTelephony;
@property (nonatomic) bool hasBtRssi;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasCcAssertion;
@property (nonatomic) bool hasEnableCMAS;
@property (nonatomic) bool hasEnableTelephony;
@property (nonatomic) bool hasIsTriggeredByProximityChange;
@property (nonatomic) bool hasNewLinkState;
@property (nonatomic) bool hasOldLinkState;
@property (nonatomic) bool hasSiriApp;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWifiProximity;
@property (nonatomic) bool hasWifiRssi;
@property (nonatomic) unsigned int isTriggeredByProximityChange;
@property (nonatomic) unsigned int newLinkState;
@property (nonatomic) unsigned int oldLinkState;
@property (nonatomic) unsigned int siriApp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int wifiProximity;
@property (nonatomic) int wifiRssi;

- (int)btRssi;
- (id)bundleID;
- (unsigned int)ccAssertion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)enableCMAS;
- (unsigned int)enableTelephony;
- (bool)hasBtRssi;
- (bool)hasBundleID;
- (bool)hasCcAssertion;
- (bool)hasEnableCMAS;
- (bool)hasEnableTelephony;
- (bool)hasIsTriggeredByProximityChange;
- (bool)hasNewLinkState;
- (bool)hasOldLinkState;
- (bool)hasSiriApp;
- (bool)hasTimestamp;
- (bool)hasWifiProximity;
- (bool)hasWifiRssi;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)isTriggeredByProximityChange;
- (void)mergeFrom:(id)arg1;
- (unsigned int)newLinkState;
- (unsigned int)oldLinkState;
- (bool)readFrom:(id)arg1;
- (void)setBtRssi:(int)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCcAssertion:(unsigned int)arg1;
- (void)setEnableCMAS:(unsigned int)arg1;
- (void)setEnableTelephony:(unsigned int)arg1;
- (void)setHasBtRssi:(bool)arg1;
- (void)setHasCcAssertion:(bool)arg1;
- (void)setHasEnableCMAS:(bool)arg1;
- (void)setHasEnableTelephony:(bool)arg1;
- (void)setHasIsTriggeredByProximityChange:(bool)arg1;
- (void)setHasNewLinkState:(bool)arg1;
- (void)setHasOldLinkState:(bool)arg1;
- (void)setHasSiriApp:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWifiProximity:(bool)arg1;
- (void)setHasWifiRssi:(bool)arg1;
- (void)setIsTriggeredByProximityChange:(unsigned int)arg1;
- (void)setNewLinkState:(unsigned int)arg1;
- (void)setOldLinkState:(unsigned int)arg1;
- (void)setSiriApp:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWifiProximity:(unsigned int)arg1;
- (void)setWifiRssi:(int)arg1;
- (unsigned int)siriApp;
- (unsigned long long)timestamp;
- (unsigned int)wifiProximity;
- (int)wifiRssi;
- (void)writeTo:(id)arg1;

@end
