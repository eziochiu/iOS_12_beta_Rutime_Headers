/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDCRSActivationTimerExpired : NSObject <NFAWDEventProtocol> {
    unsigned int  _status;
    unsigned int  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int status;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int version;

- (void)setStatus:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (unsigned int)version;

@end
