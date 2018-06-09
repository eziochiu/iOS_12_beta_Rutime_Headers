/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTAudioCodecInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _amrMode;
    unsigned long long  _callId;
    long long  _codec;
    long long  _evsBandwidth;
    long long  _evsBitrate;
}

@property (nonatomic) unsigned long long amrMode;
@property (nonatomic) unsigned long long callId;
@property (nonatomic) long long codec;
@property (nonatomic) long long evsBandwidth;
@property (nonatomic) long long evsBitrate;

+ (bool)supportsSecureCoding;

- (unsigned long long)amrMode;
- (unsigned long long)callId;
- (long long)codec;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)evsBandwidth;
- (long long)evsBitrate;
- (id)init;
- (id)initWithCallId:(unsigned long long)arg1 codec:(long long)arg2 amrMode:(unsigned long long)arg3 evsBandwidth:(long long)arg4 evsBitrate:(long long)arg5;
- (id)initWithCoder:(id)arg1;
- (void)setAmrMode:(unsigned long long)arg1;
- (void)setCallId:(unsigned long long)arg1;
- (void)setCodec:(long long)arg1;
- (void)setEvsBandwidth:(long long)arg1;
- (void)setEvsBitrate:(long long)arg1;

@end
