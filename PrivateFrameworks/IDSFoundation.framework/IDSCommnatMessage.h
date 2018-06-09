/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCommnatMessage : NSObject {
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _external;
    struct sockaddr_storage { 
        unsigned char ss_len; 
        unsigned char ss_family; 
        BOOL __ss_pad1[6]; 
        long long __ss_align; 
        BOOL __ss_pad2[112]; 
    }  _local;
    unsigned int  _nonce;
    double  _startTime;
    unsigned long long  _status;
    unsigned long long  _type;
}

@property (nonatomic) unsigned int nonce;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long type;

- (const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)external;
- (id)initWithType:(unsigned long long)arg1 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2;
- (const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)local;
- (unsigned int)nonce;
- (bool)read:(char *)arg1 inputLength:(int)arg2;
- (void)setNonce:(unsigned int)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (double)startTime;
- (unsigned long long)status;
- (unsigned long long)type;
- (bool)write:(char *)arg1 outputLength:(int*)arg2;

@end
