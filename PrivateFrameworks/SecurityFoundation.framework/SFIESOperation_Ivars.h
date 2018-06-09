/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFIESOperation_Ivars : NSObject {
    long long  curve;
    _SFECDHOperation * diffieHellmanOperation;
    <SFDigestOperation> * digestOperation;
    SFSymmetricEncryptionOperation * encryptionOperation;
}

- (void).cxx_destruct;

@end
