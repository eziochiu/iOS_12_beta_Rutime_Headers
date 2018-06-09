/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPStartDataPacket : NSObject {
    unsigned long long  _totalDataSize;
    unsigned int  _transactionID;
}

- (id)contentForTCP;
- (id)description;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)initWithTransactionID:(unsigned int)arg1 totalDataSize:(unsigned long long)arg2;
- (void)setTotalDataSize:(unsigned long long)arg1;
- (void)setTransactionID:(unsigned int)arg1;
- (unsigned long long)totalDataSize;
- (unsigned int)transactionID;

@end