/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWSTCPSnapshot : NWSProtocolSnapshot {
    NSString * _congestionAlgorithm;
    struct nstat_tcp_descriptor { 
        unsigned long long upid; 
        unsigned long long eupid; 
        unsigned long long start_timestamp; 
        unsigned long long timestamp; 
        struct activity_bitmap { 
            unsigned long long start; 
            unsigned long long bitmap[2]; 
        } activity_bitmap; 
        unsigned int ifindex; 
        unsigned int state; 
        unsigned int sndbufsize; 
        unsigned int sndbufused; 
        unsigned int rcvbufsize; 
        unsigned int rcvbufused; 
        unsigned int txunacked; 
        unsigned int txwindow; 
        unsigned int txcwindow; 
        unsigned int traffic_class; 
        unsigned int traffic_mgt_flags; 
        unsigned int pid; 
        unsigned int epid; 
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
        } local; 
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
        } remote; 
        BOOL cc_algo[16]; 
        BOOL pname[64]; 
        unsigned char uuid[16]; 
        unsigned char euuid[16]; 
        unsigned char vuuid[16]; 
        union { 
            struct tcp_conn_status { 
                unsigned int probe_activated : 1; 
                unsigned int write_probe_failed : 1; 
                unsigned int read_probe_failed : 1; 
                unsigned int conn_probe_failed : 1; 
            } connstatus; 
            unsigned char __pad_connstatus[4]; 
        } ; 
        unsigned short ifnet_properties; 
        unsigned char reserved[6]; 
    }  _descriptor;
    NSString * _euuid;
    NSData * _localAddress;
    NSString * _processName;
    unsigned int  _provider;
    NSData * _remoteAddress;
    NSString * _uuid;
    NSString * _vuuid;
}

@property (readonly) NSString *TCPState;
@property (readonly) NSString *congestionAlgorithm;
@property (readonly) bool connProbeFailed;
@property (readonly) unsigned int connectAttempts;
@property (readonly) unsigned int connectSuccesses;
@property (readonly) bool probeActivated;
@property (readonly) bool readProbeFailed;
@property (readonly) double rttAverage;
@property (readonly) double rttMinimum;
@property (readonly) double rttVariation;
@property (readonly) unsigned int rxDuplicateBytes;
@property (readonly) unsigned int rxOutOfOrderBytes;
@property (readonly) unsigned int sendBufferSize;
@property (readonly) unsigned int sendBufferUsed;
@property (readonly) unsigned int trafficManagementFlags;
@property (readonly) unsigned int txCongestionWindow;
@property (readonly) unsigned int txRetransmittedBytes;
@property (readonly) unsigned int txUnacked;
@property (readonly) unsigned int txWindow;
@property (readonly) bool writeProbeFailed;

- (void).cxx_destruct;
- (id)TCPState;
- (id)congestionAlgorithm;
- (bool)connProbeFailed;
- (unsigned int)connectAttempts;
- (unsigned int)connectSuccesses;
- (unsigned int)connstatusConnProbeFailed;
- (unsigned int)connstatusProbeActivated;
- (unsigned int)connstatusReadProbeFailed;
- (unsigned int)connstatusWriteProbeFailed;
- (bool)countsIncludeHeaderOverhead;
- (id)description;
- (int)epid;
- (unsigned long long)eupid;
- (id)euuid;
- (double)flowDuration;
- (unsigned long long)flowStartContinuousTime;
- (id)flowStartTimestamp;
- (id)initWithCounts:(const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; }*)arg1 TCPDescriptor:(struct nstat_tcp_descriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct activity_bitmap { unsigned long long x_5_1_1; unsigned long long x_5_1_2[2]; } x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_19_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_19_1_2; } x19; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_20_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_20_1_2; } x20; }*)arg2 sourceIdent:(unsigned long long)arg3 seqno:(unsigned long long)arg4 provider:(unsigned int)arg5;
- (bool)interfaceAWDL;
- (bool)interfaceCellular;
- (bool)interfaceCellularViaFallback;
- (bool)interfaceExpensive;
- (unsigned int)interfaceIndex;
- (bool)interfaceLoopback;
- (bool)interfaceUnknown;
- (bool)interfaceWifi;
- (bool)interfaceWired;
- (id)localAddress;
- (unsigned long long)networkActivityMapPart1;
- (unsigned long long)networkActivityMapPart2;
- (unsigned long long)networkActivityMapStartTime;
- (bool)probeActivated;
- (int)processID;
- (id)processName;
- (id)provider;
- (bool)readProbeFailed;
- (unsigned int)receiveBufferSize;
- (unsigned int)receiveBufferUsed;
- (id)remoteAddress;
- (double)rttAverage;
- (double)rttMinimum;
- (double)rttVariation;
- (unsigned int)rxDuplicateBytes;
- (unsigned int)rxOutOfOrderBytes;
- (unsigned int)sendBufferSize;
- (unsigned int)sendBufferUsed;
- (id)traditionalDictionary;
- (unsigned int)trafficClass;
- (unsigned int)trafficManagementFlags;
- (unsigned int)txCongestionWindow;
- (unsigned int)txRetransmittedBytes;
- (unsigned int)txUnacked;
- (unsigned int)txWindow;
- (unsigned long long)uniqueProcessID;
- (id)uuid;
- (id)vuuid;
- (bool)writeProbeFailed;

@end
