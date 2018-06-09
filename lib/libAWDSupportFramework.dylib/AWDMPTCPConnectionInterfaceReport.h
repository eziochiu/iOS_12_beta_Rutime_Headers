/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMPTCPConnectionInterfaceReport : PBCodable <NSCopying> {
    long long  _dataInKB;
    long long  _dataOutKB;
    struct { 
        unsigned int dataInKB : 1; 
        unsigned int dataOutKB : 1; 
        unsigned int timestamp : 1; 
        unsigned int secondaryFlowFailureCount : 1; 
        unsigned int secondaryFlowSuccessCount : 1; 
        unsigned int postConnectTcpFallbackCount : 1; 
    }  _has;
    NSString * _interfaceName;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _postConnectSubflowFailureErrors;
    bool  _postConnectTcpFallbackCount;
    int  _secondaryFlowFailureCount;
    int  _secondaryFlowSuccessCount;
    unsigned long long  _timestamp;
}

@property (nonatomic) long long dataInKB;
@property (nonatomic) long long dataOutKB;
@property (nonatomic) bool hasDataInKB;
@property (nonatomic) bool hasDataOutKB;
@property (nonatomic, readonly) bool hasInterfaceName;
@property (nonatomic) bool hasPostConnectTcpFallbackCount;
@property (nonatomic) bool hasSecondaryFlowFailureCount;
@property (nonatomic) bool hasSecondaryFlowSuccessCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *interfaceName;
@property (nonatomic, readonly) int*postConnectSubflowFailureErrors;
@property (nonatomic, readonly) unsigned long long postConnectSubflowFailureErrorsCount;
@property (nonatomic) bool postConnectTcpFallbackCount;
@property (nonatomic) int secondaryFlowFailureCount;
@property (nonatomic) int secondaryFlowSuccessCount;
@property (nonatomic) unsigned long long timestamp;

- (void)addPostConnectSubflowFailureErrors:(int)arg1;
- (void)clearPostConnectSubflowFailureErrors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataInKB;
- (long long)dataOutKB;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataInKB;
- (bool)hasDataOutKB;
- (bool)hasInterfaceName;
- (bool)hasPostConnectTcpFallbackCount;
- (bool)hasSecondaryFlowFailureCount;
- (bool)hasSecondaryFlowSuccessCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)interfaceName;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int*)postConnectSubflowFailureErrors;
- (int)postConnectSubflowFailureErrorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)postConnectSubflowFailureErrorsCount;
- (bool)postConnectTcpFallbackCount;
- (bool)readFrom:(id)arg1;
- (int)secondaryFlowFailureCount;
- (int)secondaryFlowSuccessCount;
- (void)setDataInKB:(long long)arg1;
- (void)setDataOutKB:(long long)arg1;
- (void)setHasDataInKB:(bool)arg1;
- (void)setHasDataOutKB:(bool)arg1;
- (void)setHasPostConnectTcpFallbackCount:(bool)arg1;
- (void)setHasSecondaryFlowFailureCount:(bool)arg1;
- (void)setHasSecondaryFlowSuccessCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setPostConnectSubflowFailureErrors:(int*)arg1 count:(unsigned long long)arg2;
- (void)setPostConnectTcpFallbackCount:(bool)arg1;
- (void)setSecondaryFlowFailureCount:(int)arg1;
- (void)setSecondaryFlowSuccessCount:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
