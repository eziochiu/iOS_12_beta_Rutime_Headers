/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface asn1IntegerToken : asn1Token {
    unsigned long long  mValue;
}

@property (readonly) unsigned long long value;

- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(bool)arg5;
- (id)description;
- (unsigned long long)value;

@end
