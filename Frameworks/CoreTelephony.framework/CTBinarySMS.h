/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTBinarySMS : NSObject {
    CTXPCServiceSubscriptionContext * _context;
    NSString * _destinationAddress;
    int  _dstPort;
    NSData * _payload;
    int  _portAddressingScheme;
    NSString * _smscAddress;
    int  _srcPort;
}

@property (nonatomic, copy) CTXPCServiceSubscriptionContext *context;
@property (nonatomic, copy) NSString *destinationAddress;
@property (nonatomic) int dstPort;
@property (nonatomic, copy) NSData *payload;
@property (nonatomic) int portAddressingScheme;
@property (nonatomic, copy) NSString *smscAddress;
@property (nonatomic) int srcPort;

- (id)context;
- (void)dealloc;
- (id)destinationAddress;
- (int)dstPort;
- (id)init;
- (bool)isValid;
- (id)payload;
- (int)portAddressingScheme;
- (void)setContext:(id)arg1;
- (void)setDestinationAddress:(id)arg1;
- (void)setDstPort:(int)arg1;
- (void)setPayload:(id)arg1;
- (void)setPortAddressingScheme:(int)arg1;
- (void)setSmscAddress:(id)arg1;
- (void)setSrcPort:(int)arg1;
- (id)smscAddress;
- (int)srcPort;

@end
