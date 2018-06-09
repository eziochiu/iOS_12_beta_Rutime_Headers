/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterNewFlowVerdict : NEFilterVerdict <NSCopying, NSSecureCoding> {
    bool  _filterInbound;
    bool  _filterOutbound;
    unsigned long long  _peekInboundBytes;
    unsigned long long  _peekOutboundBytes;
}

@property bool filterInbound;
@property bool filterOutbound;
@property unsigned long long peekInboundBytes;
@property unsigned long long peekOutboundBytes;

+ (id)URLAppendStringVerdictWithMapKey:(id)arg1;
+ (id)allowVerdict;
+ (id)dropVerdict;
+ (id)filterDataVerdictWithFilterInbound:(bool)arg1 peekInboundBytes:(unsigned long long)arg2 filterOutbound:(bool)arg3 peekOutboundBytes:(unsigned long long)arg4;
+ (id)needRulesVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)filterInbound;
- (bool)filterOutbound;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)peekInboundBytes;
- (unsigned long long)peekOutboundBytes;
- (void)setFilterInbound:(bool)arg1;
- (void)setFilterOutbound:(bool)arg1;
- (void)setPeekInboundBytes:(unsigned long long)arg1;
- (void)setPeekOutboundBytes:(unsigned long long)arg1;

@end