/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface _HMFNetAddressIPV6 : HMFNetAddressInternal {
    struct sockaddr_in6 { unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; struct in6_addr { union { unsigned char x_1_2_1[16]; unsigned short x_1_2_2[8]; unsigned int x_1_2_3[4]; } x_5_1_1; } x5; unsigned int x6; } * _internal;
}

@property (nonatomic, readonly) struct sockaddr_in6 { unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; struct in6_addr { union { unsigned char x_1_2_1[16]; unsigned short x_1_2_2[8]; unsigned int x_1_2_3[4]; } x_5_1_1; } x5; unsigned int x6; }*internal;

- (unsigned long long)addressFamily;
- (id)addressString;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (struct sockaddr_in6 { unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; struct in6_addr { union { unsigned char x_1_2_1[16]; unsigned short x_1_2_2[8]; unsigned int x_1_2_3[4]; } x_5_1_1; } x5; unsigned int x6; }*)internal;
- (bool)isEqual:(id)arg1;

@end
