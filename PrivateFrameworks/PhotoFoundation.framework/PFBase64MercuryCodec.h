/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFBase64MercuryCodec : PFBase64Codec

+ (const char *)alphabet;
+ (bool)appendPadding;
+ (bool)checkTerminators:(long long)arg1 expected:(long long)arg2;
+ (const char *)decoder;
+ (unsigned long long)encodedUuidLength;

@end
