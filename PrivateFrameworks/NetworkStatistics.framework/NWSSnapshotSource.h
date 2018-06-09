/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWSSnapshotSource : NSObject {
    int  _sockFd;
}

+ (id)routeSnapshotForIPv4Host:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1 viaInterfaceIndex:(int)arg2;
+ (id)routeSnapshotForIPv6Host:(struct sockaddr_in6 { unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; struct in6_addr { union { unsigned char x_1_2_1[16]; unsigned short x_1_2_2[8]; unsigned int x_1_2_3[4]; } x_5_1_1; } x5; unsigned int x6; }*)arg1 viaInterfaceIndex:(int)arg2;

- (void)dealloc;
- (id)init;
- (long long)recv:(void*)arg1 length:(unsigned long long)arg2 err:(int*)arg3;
- (long long)send:(void*)arg1 length:(unsigned long long)arg2 err:(int*)arg3;

@end
