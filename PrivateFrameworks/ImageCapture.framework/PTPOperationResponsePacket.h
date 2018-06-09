/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPOperationResponsePacket : NSObject {
    int  _numParameters;
    unsigned int  _parameters;
    unsigned short  _responseCode;
    unsigned int  _transactionID;
}

- (id)contentForTCP;
- (id)contentForUSB;
- (id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 numParameters:(unsigned int)arg3 parameters:(unsigned int*)arg4;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5 parameter4:(unsigned int)arg6;
- (id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5 parameter4:(unsigned int)arg6 parameter5:(unsigned int)arg7;
- (id)initWithTCPBuffer:(void*)arg1;
- (id)initWithUSBBuffer:(void*)arg1;
- (int)numParameters;
- (unsigned int)parameter1;
- (unsigned int)parameter2;
- (unsigned int)parameter3;
- (unsigned int)parameter4;
- (unsigned int)parameter5;
- (unsigned int)parameterAtIndex:(unsigned int)arg1;
- (unsigned short)responseCode;
- (void)setNumParameters:(unsigned int)arg1;
- (void)setParameter1:(unsigned int)arg1;
- (void)setParameter2:(unsigned int)arg1;
- (void)setParameter3:(unsigned int)arg1;
- (void)setParameter4:(unsigned int)arg1;
- (void)setParameter5:(unsigned int)arg1;
- (void)setPparameter:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setResponseCode:(unsigned short)arg1;
- (void)setTransactionID:(unsigned int)arg1;
- (unsigned int)transactionID;

@end
