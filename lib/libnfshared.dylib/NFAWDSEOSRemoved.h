/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDSEOSRemoved : NSObject <NFAWDEventProtocol> {
    unsigned int  _hardwareType;
    bool  _hasCardEmulationStarted;
    AWDNFCSEOSRemovedEvent * _metric;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int hardwareType;
@property (nonatomic) bool hasCardEmulationStarted;
@property (nonatomic) bool hasExpressTransactionStarted;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCSEOSRemovedEvent *metric;
@property (nonatomic) unsigned int reason;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (unsigned int)hardwareType;
- (bool)hasCardEmulationStarted;
- (bool)hasCardemulationStarted;
- (bool)hasExpressTransactionStarted;
- (id)init;
- (id)metric;
- (unsigned int)reason;
- (void)setHardwareType:(unsigned int)arg1;
- (void)setHasCardEmulationStarted:(bool)arg1;
- (void)setHasCardemulationStarted:(bool)arg1;
- (void)setHasExpressTransactionStarted:(bool)arg1;
- (void)setMetric:(id)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)updateExceptionUUID:(id)arg1;

@end
