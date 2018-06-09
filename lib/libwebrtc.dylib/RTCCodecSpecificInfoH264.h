/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface RTCCodecSpecificInfoH264 : NSObject <RTCCodecSpecificInfo> {
    unsigned long long  _packetizationMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long packetizationMode;
@property (readonly) Class superclass;

- (struct CodecSpecificInfo { int x1; char *x2; union CodecSpecificInfoUnion { struct CodecSpecificInfoGeneric { unsigned char x_1_2_1; } x_3_1_1; struct CodecSpecificInfoVP8 { short x_2_2_1; bool x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; bool x_2_2_5; int x_2_2_6; BOOL x_2_2_7; } x_3_1_2; struct CodecSpecificInfoVP9 { short x_3_2_1; bool x_3_2_2; bool x_3_2_3; bool x_3_2_4; int x_3_2_5; unsigned char x_3_2_6; unsigned char x_3_2_7; bool x_3_2_8; bool x_3_2_9; unsigned char x_3_2_10; unsigned long long x_3_2_11; bool x_3_2_12; unsigned short x_3_2_13[8]; unsigned short x_3_2_14[8]; struct GofInfoVP9 { unsigned long long x_15_3_1; unsigned char x_15_3_2[255]; bool x_15_3_3[255]; unsigned char x_15_3_4[255]; unsigned char x_15_3_5[255][3]; unsigned short x_15_3_6; } x_3_2_15; unsigned char x_3_2_16; unsigned char x_3_2_17[3]; } x_3_1_3; struct CodecSpecificInfoH264 { int x_4_2_1; } x_3_1_4; struct CodecSpecificInfoStereo { int x_5_2_1; struct StereoIndices { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned short x_2_3_3; } x_5_2_2; } x_3_1_5; } x3; })nativeCodecSpecificInfo;
- (unsigned long long)packetizationMode;
- (void)setPacketizationMode:(unsigned long long)arg1;

@end
