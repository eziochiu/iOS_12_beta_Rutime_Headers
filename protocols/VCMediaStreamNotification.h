/* made by EzioChiu.
 */

@protocol VCMediaStreamNotification <NSObject>

@required

- (void)didReceiveRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x_1_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; } x_1_1_2; } x1; unsigned char x2; struct tagRTCPPACKET {} *x3[10]; unsigned char x4[1472]; unsigned int x5; unsigned char x6[1472]; }*)arg1;
- (void)mediaStream:(VCMediaStream *)arg1 didReceiveNewMasterKeyIndex:(VCMasterKeyIndex *)arg2;

@end
