/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFRSAKeyPair : _SFKeyPair {
    id  _rsaKeyPairInternal;
}

- (void).cxx_destruct;
- (id)initRandomKeyPairWithSpecifier:(id)arg1;
- (id)initRandomKeyPairWithSpecifier:(id)arg1 privateKeyDomain:(struct NSString { Class x1; }*)arg2;

@end
