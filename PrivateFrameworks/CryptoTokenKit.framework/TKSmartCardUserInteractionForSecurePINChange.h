/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardUserInteractionForSecurePINChange : TKSmartCardUserInteractionForPINOperation <NSSecureCoding> {
    NSData * _APDU;
    unsigned long long  _PINConfirmation;
    TKSmartCardPINFormat * _PINFormat;
    long long  _currentPINByteOffset;
    long long  _newPINByteOffset;
    TKSmartCardSlot * _slot;
}

@property (retain) NSData *APDU;
@property unsigned long long PINConfirmation;
@property (retain) TKSmartCardPINFormat *PINFormat;
@property long long currentPINByteOffset;
@property long long newPINByteOffset;
@property TKSmartCardSlot *slot;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)APDU;
- (unsigned long long)PINConfirmation;
- (id)PINFormat;
- (long long)currentPINByteOffset;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)newPINByteOffset;
- (void)runWithReply:(id /* block */)arg1;
- (void)setAPDU:(id)arg1;
- (void)setCurrentPINByteOffset:(long long)arg1;
- (void)setNewPINByteOffset:(long long)arg1;
- (void)setPINConfirmation:(unsigned long long)arg1;
- (void)setPINFormat:(id)arg1;
- (void)setSlot:(id)arg1;
- (void)setSlot:(id)arg1 PINFormat:(id)arg2 APDU:(id)arg3 currentPINByteOffset:(long long)arg4 newPINByteOffset:(long long)arg5;
- (id)slot;

@end
