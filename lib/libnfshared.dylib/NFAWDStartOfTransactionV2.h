/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDStartOfTransactionV2 : NSObject <NFAWDEventProtocol> {
    unsigned int  _command;
    unsigned int  _commandParam1;
    unsigned int  _commandResult;
    unsigned int  _expressType;
    bool  _isLongTransaction;
    AWDNFCHCIStartOfTransactionV2Event * _metric;
    unsigned int  _version;
}

@property (nonatomic) unsigned int command;
@property (nonatomic) unsigned int commandParam1;
@property (nonatomic) unsigned int commandResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int expressType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLongTransaction;
@property (nonatomic, retain) AWDNFCHCIStartOfTransactionV2Event *metric;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int version;

- (unsigned int)command;
- (unsigned int)commandParam1;
- (unsigned int)commandResult;
- (void)dealloc;
- (unsigned int)expressType;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (bool)isLongTransaction;
- (id)metric;
- (void)setCommand:(unsigned int)arg1;
- (void)setCommandParam1:(unsigned int)arg1;
- (void)setCommandResult:(unsigned int)arg1;
- (void)setExpressType:(unsigned int)arg1;
- (void)setIsLongTransaction:(bool)arg1;
- (void)setMetric:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (unsigned int)version;

@end
