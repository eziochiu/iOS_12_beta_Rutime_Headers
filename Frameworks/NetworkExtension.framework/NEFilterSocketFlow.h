/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterSocketFlow : NEFilterFlow <NSCopying, NSSecureCoding> {
    NSUUID * _euuid;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _lastLocalAddress;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _lastRemoteAddress;
    NWEndpoint * _localEndpoint;
    NWEndpoint * _remoteEndpoint;
    int  _socketFamily;
    unsigned long long  _socketID;
    int  _socketProtocol;
    int  _socketType;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSUUID *euuid;
@property (copy) NWEndpoint *localEndpoint;
@property (copy) NWEndpoint *remoteEndpoint;
@property int socketFamily;
@property unsigned long long socketID;
@property int socketProtocol;
@property int socketType;
@property (nonatomic, copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)euuid;
- (id)initWithCoder:(id)arg1;
- (id)initWithSocketFamily:(int)arg1 socketType:(int)arg2 socketProtocol:(int)arg3 pid:(int)arg4 epid:(int)arg5 uuid:(unsigned char)arg6 euuid:(unsigned char)arg7 socketID:(unsigned long long)arg8;
- (void)lastLocalAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (void)lastRemoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (id)localEndpoint;
- (id)remoteEndpoint;
- (void)setEuuid:(id)arg1;
- (void)setLocalEndpoint:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1;
- (void)setSocketFamily:(int)arg1;
- (void)setSocketID:(unsigned long long)arg1;
- (void)setSocketProtocol:(int)arg1;
- (void)setSocketType:(int)arg1;
- (void)setUuid:(id)arg1;
- (int)socketFamily;
- (unsigned long long)socketID;
- (int)socketProtocol;
- (int)socketType;
- (id)uuid;

@end
