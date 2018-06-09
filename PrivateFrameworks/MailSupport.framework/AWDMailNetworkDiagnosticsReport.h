/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailNetworkDiagnosticsReport : PBCodable <NSCopying> {
    bool  _cellData;
    NSString * _dataIndicator;
    int  _dataInterface;
    bool  _dnsEnabled;
    struct { 
        unsigned int numActiveCalls : 1; 
        unsigned int numBackgroundWifiClients : 1; 
        unsigned int timestamp : 1; 
        unsigned int dataInterface : 1; 
        unsigned int reachabilityFlags : 1; 
        unsigned int cellData : 1; 
        unsigned int dnsEnabled : 1; 
        unsigned int roamingAllowed : 1; 
        unsigned int wifiEnabled : 1; 
    }  _has;
    unsigned long long  _numActiveCalls;
    unsigned long long  _numBackgroundWifiClients;
    unsigned int  _reachabilityFlags;
    bool  _roamingAllowed;
    unsigned long long  _timestamp;
    bool  _wifiEnabled;
}

@property (nonatomic) bool cellData;
@property (nonatomic, retain) NSString *dataIndicator;
@property (nonatomic) int dataInterface;
@property (nonatomic) bool dnsEnabled;
@property (nonatomic) bool hasCellData;
@property (nonatomic, readonly) bool hasDataIndicator;
@property (nonatomic) bool hasDataInterface;
@property (nonatomic) bool hasDnsEnabled;
@property (nonatomic) bool hasNumActiveCalls;
@property (nonatomic) bool hasNumBackgroundWifiClients;
@property (nonatomic) bool hasReachabilityFlags;
@property (nonatomic) bool hasRoamingAllowed;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWifiEnabled;
@property (nonatomic) unsigned long long numActiveCalls;
@property (nonatomic) unsigned long long numBackgroundWifiClients;
@property (nonatomic) unsigned int reachabilityFlags;
@property (nonatomic) bool roamingAllowed;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool wifiEnabled;

- (void).cxx_destruct;
- (bool)cellData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataIndicator;
- (int)dataInterface;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)dnsEnabled;
- (bool)hasCellData;
- (bool)hasDataIndicator;
- (bool)hasDataInterface;
- (bool)hasDnsEnabled;
- (bool)hasNumActiveCalls;
- (bool)hasNumBackgroundWifiClients;
- (bool)hasReachabilityFlags;
- (bool)hasRoamingAllowed;
- (bool)hasTimestamp;
- (bool)hasWifiEnabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numActiveCalls;
- (unsigned long long)numBackgroundWifiClients;
- (unsigned int)reachabilityFlags;
- (bool)readFrom:(id)arg1;
- (bool)roamingAllowed;
- (void)setCellData:(bool)arg1;
- (void)setDataIndicator:(id)arg1;
- (void)setDataInterface:(int)arg1;
- (void)setDnsEnabled:(bool)arg1;
- (void)setHasCellData:(bool)arg1;
- (void)setHasDataInterface:(bool)arg1;
- (void)setHasDnsEnabled:(bool)arg1;
- (void)setHasNumActiveCalls:(bool)arg1;
- (void)setHasNumBackgroundWifiClients:(bool)arg1;
- (void)setHasReachabilityFlags:(bool)arg1;
- (void)setHasRoamingAllowed:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWifiEnabled:(bool)arg1;
- (void)setNumActiveCalls:(unsigned long long)arg1;
- (void)setNumBackgroundWifiClients:(unsigned long long)arg1;
- (void)setReachabilityFlags:(unsigned int)arg1;
- (void)setRoamingAllowed:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWifiEnabled:(bool)arg1;
- (unsigned long long)timestamp;
- (bool)wifiEnabled;
- (void)writeTo:(id)arg1;

@end
