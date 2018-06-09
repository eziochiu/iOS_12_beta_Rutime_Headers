/* made by EzioChiu.
 */

@protocol VCRateControlAlgorithm <NSObject>

@required

- (unsigned int)actualBitrate;
- (void)configure:(struct VCRateControlAlgorithmConfig { unsigned int *x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; int x24; int x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; bool x37; bool x38; bool x39; int x40; double x41; double x42; double x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; })arg1 restartRequired:(bool)arg2;
- (void)doRateControlWithBasebandStatistics:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; } x_3_1_3; struct { unsigned int x_4_2_1; bool x_4_2_2; bool x_4_2_3; bool x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; double x_4_2_7; unsigned int x_4_2_8; } x_3_1_4; struct { unsigned char x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; unsigned int x_5_2_8; unsigned int x_5_2_9; unsigned int x_5_2_10; double x_5_2_11; double x_5_2_12; double x_5_2_13; unsigned int x_5_2_14; unsigned int x_5_2_15; unsigned int x_5_2_16; } x_3_1_5; } x3; })arg1;
- (void)doRateControlWithStatistics:(struct { int x1; double x2; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; double x_1_2_6; double x_1_2_7; double x_1_2_8; double x_1_2_9; BOOL x_1_2_10[64]; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; } x_3_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; unsigned int x_3_2_4; unsigned int x_3_2_5; } x_3_1_3; struct { unsigned int x_4_2_1; bool x_4_2_2; bool x_4_2_3; bool x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; double x_4_2_7; unsigned int x_4_2_8; } x_3_1_4; struct { unsigned char x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; unsigned int x_5_2_6; unsigned int x_5_2_7; unsigned int x_5_2_8; unsigned int x_5_2_9; unsigned int x_5_2_10; double x_5_2_11; double x_5_2_12; double x_5_2_13; unsigned int x_5_2_14; unsigned int x_5_2_15; unsigned int x_5_2_16; } x_3_1_5; } x3; })arg1;
- (void)enableBasebandDump:(void*)arg1;
- (void)enableLogDump:(void*)arg1 enablePeriodicLogging:(bool)arg2;
- (bool)isCongested;
- (bool)isNewRateSentOut;
- (bool)isPaused;
- (unsigned int)localBandwidthEstimation;
- (VCRateControlMediaController *)mediaController;
- (unsigned int)mostBurstLoss;
- (double)owrd;
- (double)packetLossRate;
- (unsigned int)rateChangeCounter;
- (double)roundTripTime;
- (void)setLocalBandwidthEstimation:(unsigned int)arg1;
- (void)setMediaController:(VCRateControlMediaController *)arg1;
- (void)setPaused:(bool)arg1;
- (unsigned int)targetBitrate;

@end
