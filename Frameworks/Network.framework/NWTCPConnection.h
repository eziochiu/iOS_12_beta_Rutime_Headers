/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWTCPConnection : NSObject <NWPrettyDescription> {
    <NWTCPConnectionAuthenticationDelegate> * _delegate;
    NWEndpoint * _endpoint;
    bool  _hasBetterPath;
    NSObject<OS_nw_connection> * _internalConnection;
    NSError * _internalError;
    NWParameters * _parameters;
    long long  _state;
    bool  _viable;
}

@property (nonatomic, readonly) NSDictionary *TCPInfo;
@property (nonatomic, readonly) bool TFOSucceeded;
@property (nonatomic, readonly) NWPath *connectedPath;
@property <NWTCPConnectionAuthenticationDelegate> *delegate;
@property (nonatomic, retain) NWEndpoint *endpoint;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) bool hasBetterPath;
@property (retain) NSObject<OS_nw_connection> *internalConnection;
@property (retain) NSError *internalError;
@property (nonatomic, readonly) bool isMultipath;
@property (nonatomic, readonly) NWEndpoint *localAddress;
@property (nonatomic, readonly) NSData *metadata;
@property (nonatomic, readonly) unsigned long long multipathConnectedSubflowCount;
@property (nonatomic, readonly) int multipathPrimarySubflowInterfaceIndex;
@property (nonatomic, readonly) unsigned long long multipathSubflowCount;
@property (nonatomic, readonly) NSDictionary *multipathSubflowSwitchCounts;
@property (nonatomic, readonly) NWParameters *parameters;
@property (nonatomic, readonly, copy) NSString *privateDescription;
@property (nonatomic, readonly) NWEndpoint *remoteAddress;
@property (nonatomic) long long state;
@property (nonatomic, readonly) NSData *txtRecord;
@property (getter=isViable, nonatomic) bool viable;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)stringFromNWTCPConnectionState:(long long)arg1;

- (void).cxx_destruct;
- (id)TCPInfo;
- (bool)TFOSucceeded;
- (void)cancel;
- (id)connectedPath;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)endpoint;
- (id)error;
- (bool)fillOutTCPConnectionInfo:(struct tcp_connection_info { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 17; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned long long x39; }*)arg1;
- (void)handleIdentityRequestWithMetadata:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handlePeerCertificateTrustEvaluationWithMetadata:(id)arg1 trust:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasBetterPath;
- (id)initWithAcceptedInternalConnection:(id)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithUpgradeForConnection:(id)arg1;
- (id)internalConnection;
- (id)internalError;
- (bool)isMultipath;
- (bool)isViable;
- (id)localAddress;
- (id)metadata;
- (unsigned long long)multipathConnectedSubflowCount;
- (int)multipathPrimarySubflowInterfaceIndex;
- (unsigned long long)multipathSubflowCount;
- (id)multipathSubflowSwitchCounts;
- (id)parameters;
- (id)privateDescription;
- (void)readLength:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)remoteAddress;
- (void)setDelegate:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setHasBetterPath:(bool)arg1;
- (void)setInternalConnection:(id)arg1;
- (void)setInternalError:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setViable:(bool)arg1;
- (void)setupEventHandler;
- (bool)startInternal;
- (long long)state;
- (id)txtRecord;
- (void)write:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeClose;

@end
