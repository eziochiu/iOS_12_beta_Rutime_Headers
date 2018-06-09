/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDEndOfTransaction : NSObject <NFAWDEventProtocol> {
    unsigned long long  _amount;
    unsigned int  _avgRSSIValue;
    unsigned int  _command;
    unsigned int  _currencyCode;
    unsigned int  _expressType;
    unsigned long long  _iad;
    unsigned int  _informative;
    unsigned int  _maxRSSIValue;
    AWDNFCHCIEndOfTransactionEvent * _metric;
    unsigned int  _minRSSIValue;
    unsigned int  _mobileCVMResult;
    unsigned int  _msc;
    unsigned int  _status;
    unsigned int  _totalRSSISamples;
    unsigned int  _transactionStatus;
    unsigned int  _version;
}

@property (nonatomic, retain) NSData *aid;
@property (nonatomic) unsigned long long amount;
@property (nonatomic) unsigned int avgRSSIValue;
@property (nonatomic, retain) NSData *cdi;
@property (nonatomic) unsigned int command;
@property (nonatomic) unsigned int currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int expressType;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iad;
@property (nonatomic) unsigned int informative;
@property (nonatomic, retain) NSData *maid;
@property (nonatomic) unsigned int maxRSSIValue;
@property (nonatomic, retain) NSData *mcii;
@property (nonatomic, retain) AWDNFCHCIEndOfTransactionEvent *metric;
@property (nonatomic) unsigned int minRSSIValue;
@property (nonatomic) unsigned int mobileCVMResult;
@property (nonatomic) unsigned int msc;
@property (nonatomic) unsigned int status;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int totalRSSISamples;
@property (nonatomic, retain) NSData *transactionId;
@property (nonatomic) unsigned int transactionStatus;
@property (nonatomic) unsigned int transactionType;
@property (nonatomic) unsigned int version;

- (id)aid;
- (unsigned long long)amount;
- (unsigned int)avgRSSIValue;
- (id)cdi;
- (unsigned int)command;
- (unsigned int)currencyCode;
- (void)dealloc;
- (unsigned int)expressType;
- (id)getMetric;
- (unsigned int)getMetricId;
- (unsigned long long)iad;
- (unsigned int)informative;
- (id)init;
- (id)maid;
- (unsigned int)maxRSSIValue;
- (id)mcii;
- (id)metric;
- (unsigned int)minRSSIValue;
- (unsigned int)mobileCVMResult;
- (unsigned int)msc;
- (void)setAid:(id)arg1;
- (void)setAmount:(unsigned long long)arg1;
- (void)setAvgRSSIValue:(unsigned int)arg1;
- (void)setCdi:(id)arg1;
- (void)setCommand:(unsigned int)arg1;
- (void)setCurrencyCode:(unsigned int)arg1;
- (void)setExpressType:(unsigned int)arg1;
- (void)setIad:(unsigned long long)arg1;
- (void)setInformative:(unsigned int)arg1;
- (void)setMaid:(id)arg1;
- (void)setMaxRSSIValue:(unsigned int)arg1;
- (void)setMcii:(id)arg1;
- (void)setMetric:(id)arg1;
- (void)setMinRSSIValue:(unsigned int)arg1;
- (void)setMobileCVMResult:(unsigned int)arg1;
- (void)setMsc:(unsigned int)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTotalRSSISamples:(unsigned int)arg1;
- (void)setTransactionId:(id)arg1;
- (void)setTransactionStatus:(unsigned int)arg1;
- (void)setTransactionType:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned int)totalRSSISamples;
- (id)transactionId;
- (unsigned int)transactionStatus;
- (unsigned int)transactionType;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (unsigned int)version;

@end
