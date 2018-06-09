/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSStunCandidate : NSObject {
    bool  _active;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _address;
    double  _extIPDetectionStartTime;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _external;
    int  _index;
    unsigned int  _mtu;
    struct { 
        int length; 
        unsigned char data[12]; 
    }  _prefix;
    unsigned long long  _priority;
    unsigned long long  _radioAccessTechnology;
    long long  _transport;
    unsigned long long  _type;
}

@property (nonatomic) bool active;
@property (nonatomic, readonly) const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*address;
@property (nonatomic) double extIPDetectionStartTime;
@property (nonatomic) struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*external;
@property (nonatomic, readonly) int index;
@property (nonatomic) unsigned int mtu;
@property (nonatomic) struct { int x1; unsigned char x2[12]; }*prefix;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic) unsigned long long radioAccessTechnology;
@property (nonatomic, readonly) long long transport;
@property (nonatomic, readonly) unsigned long long type;

+ (id)candidateWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned long long)arg3 mtu:(unsigned int)arg4 index:(int)arg5 address:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg6 external:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg7;

- (bool)active;
- (const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)address;
- (void)dealloc;
- (id)description;
- (double)extIPDetectionStartTime;
- (struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)external;
- (bool)hasNATIPv4Address;
- (bool)hasNATIPv4External;
- (int)index;
- (id)initWithType:(unsigned long long)arg1 transport:(long long)arg2 radioAccessTechnology:(unsigned long long)arg3 mtu:(unsigned int)arg4 index:(int)arg5 address:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg6 external:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg7;
- (bool)isCellularStunCandidate;
- (bool)isCompatibleWithStunCandidate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLinkLocalStunCandidate;
- (bool)isRelayStunCandidate;
- (bool)isServerReflexiveStunCandidate;
- (unsigned int)mtu;
- (struct { int x1; unsigned char x2[12]; }*)prefix;
- (unsigned long long)priority;
- (unsigned long long)radioAccessTechnology;
- (void)setActive:(bool)arg1;
- (void)setExtIPDetectionStartTime:(double)arg1;
- (void)setExternal:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (void)setMtu:(unsigned int)arg1;
- (void)setPrefix:(struct { int x1; unsigned char x2[12]; }*)arg1;
- (void)setRadioAccessTechnology:(unsigned long long)arg1;
- (long long)transport;
- (unsigned long long)type;
- (void)updateTransport:(long long)arg1;

@end
