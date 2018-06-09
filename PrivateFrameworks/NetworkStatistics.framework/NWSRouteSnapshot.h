/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWSRouteSnapshot : NWSSnapshot {
    struct nstat_route_descriptor { 
        unsigned long long id; 
        unsigned long long parent_id; 
        unsigned long long gateway_id; 
        union { 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } v4; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } v6; 
            struct sockaddr { 
                unsigned char sa_len; 
                unsigned char sa_family; 
                BOOL sa_data[14]; 
            } sa; 
        } dst; 
        union { 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } v4; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } v6; 
            struct sockaddr { 
                unsigned char sa_len; 
                unsigned char sa_family; 
                BOOL sa_data[14]; 
            } sa; 
        } mask; 
        union { 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } v4; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } v6; 
            struct sockaddr { 
                unsigned char sa_len; 
                unsigned char sa_family; 
                BOOL sa_data[14]; 
            } sa; 
        } gateway; 
        unsigned int ifindex; 
        unsigned int flags; 
        unsigned char reserved[4]; 
    }  _descriptor;
    NSData * _destination;
    NSData * _gateway;
    NSData * _mask;
}

@property (readonly) unsigned int connectAttempts;
@property (readonly) unsigned int connectSuccesses;
@property (readonly) NSData *destination;
@property (readonly) unsigned int flags;
@property (readonly) NSData *gateway;
@property (readonly) unsigned long long gatewayID;
@property (readonly) unsigned int interfaceIndex;
@property (readonly) NSData *mask;
@property (readonly) unsigned long long parentID;
@property (readonly) unsigned long long routeID;
@property (readonly) double rttAverage;
@property (readonly) double rttMinimum;
@property (readonly) double rttVariation;
@property (readonly) unsigned int rxDuplicateBytes;
@property (readonly) unsigned int rxOutOfOrderBytes;
@property (readonly) unsigned int txRetransmittedBytes;

- (void).cxx_destruct;
- (void)_initWithDescriptor:(struct nstat_route_descriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_4_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_4_1_2; struct sockaddr { unsigned char x_3_2_1; unsigned char x_3_2_2; BOOL x_3_2_3[14]; } x_4_1_3; } x4; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_5_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_5_1_2; struct sockaddr { unsigned char x_3_2_1; unsigned char x_3_2_2; BOOL x_3_2_3[14]; } x_5_1_3; } x5; }*)arg1;
- (unsigned int)connectAttempts;
- (unsigned int)connectSuccesses;
- (id)description;
- (id)destination;
- (unsigned int)flags;
- (id)gateway;
- (unsigned long long)gatewayID;
- (id)initWithCounts:(const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; }*)arg1 routeDescriptor:(struct nstat_route_descriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_4_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_4_1_2; struct sockaddr { unsigned char x_3_2_1; unsigned char x_3_2_2; BOOL x_3_2_3[14]; } x_4_1_3; } x4; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_5_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_5_1_2; struct sockaddr { unsigned char x_3_2_1; unsigned char x_3_2_2; BOOL x_3_2_3[14]; } x_5_1_3; } x5; }*)arg2 sourceIdent:(unsigned long long)arg3 seqno:(unsigned long long)arg4;
- (unsigned int)interfaceIndex;
- (id)mask;
- (unsigned long long)parentID;
- (unsigned long long)routeID;
- (double)rttAverage;
- (double)rttMinimum;
- (double)rttVariation;
- (unsigned int)rxDuplicateBytes;
- (unsigned int)rxOutOfOrderBytes;
- (id)traditionalDictionary;
- (unsigned int)txRetransmittedBytes;

@end
