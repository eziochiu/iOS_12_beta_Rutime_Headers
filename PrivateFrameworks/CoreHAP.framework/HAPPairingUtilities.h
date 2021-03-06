/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPPairingUtilities : HMFObject

+ (id)createAddPairingRequetForPairingIdentity:(id)arg1 error:(id*)arg2;
+ (id)createListPairingsRequest:(id*)arg1;
+ (id)createRemovePairingRequetForPairingIdentity:(id)arg1 error:(id*)arg2;
+ (bool)parseAddPairingResponse:(id)arg1 error:(id*)arg2;
+ (id)parseListPairingsResponse:(id)arg1 error:(id*)arg2;
+ (bool)parseRemovePairingResponse:(id)arg1 error:(id*)arg2;

@end
