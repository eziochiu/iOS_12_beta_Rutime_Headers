/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _appRules;
    NSPConfiguration * _defaults;
    long long  _diskVersion;
    NSDictionary * _edgeSets;
    NSNumber * _enabled;
    bool  _ignoreInvalidCerts;
    unsigned int  _lastFailureReason;
    NSNumber * _persistMetrics;
    NSDate * _resurrectionDate;
    NSNumber * _timestamp;
    NSNumber * _version;
    NSNumber * _waldoEnabled;
    NSString * _waldoHost;
    NSString * _waldoLeafOID;
    NSString * _waldoPath;
    NSNumber * _waldoPort;
    NSNumber * _waldoRequestTimeout;
    NSNumber * _waldoRevocationFailClosed;
    NSURLSession * _waldoSession;
}

@property (copy) NSArray *appRules;
@property (readonly) NSDate *dayPassExpirationDate;
@property (retain) NSPConfiguration *defaults;
@property (readonly) long long diskVersion;
@property (readonly) NSDate *earliestEnableCheckDate;
@property (retain) NSDictionary *edgeSets;
@property (copy) NSNumber *enabled;
@property bool ignoreInvalidCerts;
@property (readonly) bool isDead;
@property unsigned int lastFailureReason;
@property (copy) NSNumber *persistMetrics;
@property (copy) NSDate *resurrectionDate;
@property (readonly) NSNumber *timestamp;
@property (readonly) NSNumber *version;
@property (copy) NSNumber *waldoEnabled;
@property (copy) NSString *waldoHost;
@property (copy) NSString *waldoLeafOID;
@property (copy) NSString *waldoPath;
@property (copy) NSNumber *waldoPort;
@property (copy) NSNumber *waldoRequestTimeout;
@property (copy) NSNumber *waldoRevocationFailClosed;
@property (retain) NSURLSession *waldoSession;

+ (id)defaultConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appRules;
- (id)copyAgentResultsForAppRule:(id)arg1;
- (id)copyTLVData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createWaldoURLWithDomain:(id)arg1 timestamp:(id)arg2;
- (id)dayPassExpirationDate;
- (id)defaults;
- (long long)diskVersion;
- (id)earliestEnableCheckDate;
- (id)edgeSets;
- (id)enabled;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateEdgeSetsWithBlock:(id /* block */)arg1;
- (bool)evaluateEnableRatios;
- (id)getCurrentOnRampForAppRule:(id)arg1;
- (id)getEdgeSetForAppRule:(id)arg1;
- (id)getEdgeSetForSigningIdentifier:(id)arg1;
- (bool)ignoreInvalidCerts;
- (id)initFromKeychain;
- (id)initFromTLVs:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 fromDictionary:(id)arg2 waldoSource:(long long)arg3;
- (bool)isDead;
- (unsigned int)lastFailureReason;
- (id)loadBuiltinAppRulesFromDisk;
- (void)merge:(id)arg1;
- (id)persistMetrics;
- (void)removeFromKeychain;
- (bool)resetStaleEdgeSets;
- (id)resurrectionDate;
- (void)saveToKeychain;
- (void)setAppRules:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setEdgeSets:(id)arg1;
- (void)setEnabled:(id)arg1;
- (void)setIgnoreInvalidCerts:(bool)arg1;
- (void)setLastFailureReason:(unsigned int)arg1;
- (void)setPersistMetrics:(id)arg1;
- (void)setResurrectionDate:(id)arg1;
- (void)setWaldoEnabled:(id)arg1;
- (void)setWaldoHost:(id)arg1;
- (void)setWaldoLeafOID:(id)arg1;
- (void)setWaldoPath:(id)arg1;
- (void)setWaldoPort:(id)arg1;
- (void)setWaldoRequestTimeout:(id)arg1;
- (void)setWaldoRevocationFailClosed:(id)arg1;
- (void)setWaldoSession:(id)arg1;
- (void)setup;
- (void)teardown;
- (id)timestamp;
- (void)updateNetworkAgents;
- (id)version;
- (id)waldoEnabled;
- (id)waldoHost;
- (id)waldoLeafOID;
- (id)waldoPath;
- (id)waldoPort;
- (id)waldoRequestTimeout;
- (id)waldoRevocationFailClosed;
- (id)waldoSession;

@end
