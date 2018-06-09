/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSTCPLink : NSObject <IDSLink> {
    int  _addressFamily;
    <IDSLinkDelegate> * _alternateDelegate;
    NSString * _cbuuid;
    struct IDSTCPConnection_ { int x1; bool x2; unsigned int x3; int x4; struct IDSNetBuffer_ {} *x5; struct sockaddr_storage { unsigned char x_6_1_1; unsigned char x_6_1_2; BOOL x_6_1_3[6]; long long x_6_1_4; BOOL x_6_1_5[112]; } x6; struct sockaddr_storage { unsigned char x_7_1_1; unsigned char x_7_1_2; BOOL x_7_1_3[6]; long long x_7_1_4; BOOL x_7_1_5[112]; } x7; struct { /* ? */ } *x8; struct { /* ? */ } *x9; struct IDSTCPLinkCounter_ {} *x10; struct IDSTCPConnection_ {} *x11; id x12; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x13; } * _conns;
    struct IDSTCPLinkCounter_ { 
        unsigned long long _totalBytesSent; 
        unsigned long long _totalPacketsSent; 
        unsigned long long _totalBytesReceived; 
        unsigned long long _totalPacketsReceived; 
    }  _counters;
    <IDSLinkDelegate> * _delegate;
    NSString * _deviceUniqueID;
    id /* block */  _getPacketLength;
    bool  _isSSL;
    struct IDSTCPLinkCounter_ { 
        unsigned long long _totalBytesSent; 
        unsigned long long _totalPacketsSent; 
        unsigned long long _totalBytesReceived; 
        unsigned long long _totalPacketsReceived; 
    }  _previousCounters;
    double  _previousReportTime;
    unsigned long long  _state;
}

@property <IDSLinkDelegate> *alternateDelegate;
@property (retain) NSString *cbuuid;
@property (readonly, copy) NSString *debugDescription;
@property <IDSLinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceUniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long headerOverhead;
@property (nonatomic, readonly) bool isSSL;
@property (getter=linkTypeString, readonly) NSString *linkTypeString;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct IDSTCPConnection_ { int x1; bool x2; unsigned int x3; int x4; struct IDSNetBuffer_ {} *x5; struct sockaddr_storage { unsigned char x_6_1_1; unsigned char x_6_1_2; BOOL x_6_1_3[6]; long long x_6_1_4; BOOL x_6_1_5[112]; } x6; struct sockaddr_storage { unsigned char x_7_1_1; unsigned char x_7_1_2; BOOL x_7_1_3[6]; long long x_7_1_4; BOOL x_7_1_5[112]; } x7; struct { /* ? */ } *x8; struct { /* ? */ } *x9; struct IDSTCPLinkCounter_ {} *x10; struct IDSTCPConnection_ {} *x11; id x12; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x13; }*)_getIDSTCPConnection:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; unsigned char x21[0]; }*)arg1;
- (id)alternateDelegate;
- (id)cbuuid;
- (bool)connect:(int)arg1 localAddress:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg2 portRange:(unsigned short)arg3 remoteAddress:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg4 clientUUID:(unsigned char)arg5 completionHandler:(id /* block */)arg6;
- (id)copyLinkStatsDict;
- (void)dealloc;
- (id)delegate;
- (id)deviceUniqueID;
- (bool)disconnect:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1 remoteAddress:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg2;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(bool)arg2;
- (long long)getPacketLength:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; unsigned char x21[0]; }*)arg1 isChannelData:(bool*)arg2;
- (unsigned long long)headerOverhead;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 isSSL:(bool)arg3 getPacketLength:(id /* block */)arg4;
- (void)invalidate;
- (bool)isSSL;
- (id)linkTypeString;
- (void)processIncomingPacket:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; unsigned char x21[0]; }*)arg1;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; unsigned char x21[0]; }*)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (unsigned long long)sendPacketBufferArray:(struct { /* ? */ }**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (void)setAlternateDelegate:(id)arg1;
- (void)setCbuuid:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (unsigned long long)state;

@end
