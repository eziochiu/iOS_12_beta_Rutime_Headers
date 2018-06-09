/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPsecNexus : NEInternetNexus

- (id)initWithName:(id)arg1 delegate:(id)arg2 shouldCreateKernelChannel:(bool)arg3;
- (bool)setDefaultInputHandler:(struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; }*)arg1;
- (void)setRemotePacketProxy:(id)arg1;

@end