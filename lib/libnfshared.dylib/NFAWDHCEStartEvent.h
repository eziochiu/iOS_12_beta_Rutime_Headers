/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDHCEStartEvent : NSObject <NFAWDEventProtocol> {
    unsigned int  _messageSize;
    unsigned int  _messageType;
    AWDNFCHCEStartEvent * _metric;
    unsigned int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int messageSize;
@property (nonatomic) unsigned int messageType;
@property (nonatomic, retain) AWDNFCHCEStartEvent *metric;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int type;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (unsigned int)messageSize;
- (unsigned int)messageType;
- (id)metric;
- (void)setMessageSize:(unsigned int)arg1;
- (void)setMessageType:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end