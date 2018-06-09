/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDCardIngestionSessionStateChangeEvent : NSObject <NFAWDEventProtocol> {
    unsigned int  _cardValidationStatus;
    AWDNFCCardIngestionSessionStateChangeEvent * _metric;
    unsigned int  _sessionStatus;
    unsigned int  _spStatusCode;
    unsigned int  _state;
    unsigned int  _technology;
}

@property (nonatomic) unsigned int cardValidationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCCardIngestionSessionStateChangeEvent *metric;
@property (nonatomic) unsigned int sessionStatus;
@property (nonatomic) unsigned int spStatusCode;
@property (nonatomic) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int technology;

- (unsigned int)cardValidationStatus;
- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (unsigned int)sessionStatus;
- (void)setCardValidationStatus:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)setSessionStatus:(unsigned int)arg1;
- (void)setSpStatusCode:(unsigned int)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setTechnology:(unsigned int)arg1;
- (unsigned int)spStatusCode;
- (unsigned int)state;
- (unsigned int)technology;
- (unsigned long long)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end
