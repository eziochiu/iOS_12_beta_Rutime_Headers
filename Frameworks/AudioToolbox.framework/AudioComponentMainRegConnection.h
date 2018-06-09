/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol> {
    struct ConnectionInfo { 
        NSXPCConnection *mConnection; 
        int mExtUsePermission; 
        int mSDKLinkVersion; 
    }  mConnInfo;
    struct AudioComponentRegistrarImpl { bool x1; bool x2; bool x3; bool x4; id x5; float x6; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x7; in BOOL x8; void*x9; int x10; out in void*x11; void x12; out int x13; double x14; void*x15; union { BOOL x_16_1_1; out in short x_16_1_2; void*x_16_1_3; void*x_16_1_4; void*x_16_1_5; double x_16_1_6; int x_16_1_7; out unsigned char x_16_1_8; out void*x_16_1_9; void*x_16_1_10; out in void*x_16_1_11; in void*x_16_1_12; oneway void*x_16_1_13; BOOL x_16_1_14; void*x_16_1_15; out const void*x_16_1_16; void*x_16_1_17; void*x_16_1_18; void*x_16_1_19; void*x_16_1_20; double x_16_1_21; int x_16_1_22; out unsigned char x_16_1_23; out void*x_16_1_24; void*x_16_1_25; out in void*x_16_1_26; in void*x_16_1_27; oneway void*x_16_1_28; BOOL x_16_1_29; void*x_16_1_30; out const void*x_16_1_31; void*x_16_1_32; } x16; void*x17; void*x18; struct type { unsigned char x_19_1_1[24]; } x19; struct __base<void (const AudioComponentVector &, AudioComponentVector &)> {} *x20; } * mImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)getComponentList:(id)arg1 linkedSDKVersion:(int)arg2 includeExtensions:(bool)arg3 reply:(id /* block */)arg4;
- (id)initWithRegistrar:(struct AudioComponentRegistrarImpl { bool x1; bool x2; bool x3; bool x4; id x5; float x6; /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x7; in BOOL x8; void*x9; int x10; out in void*x11; void x12; out int x13; double x14; void*x15; union { BOOL x_16_1_1; out in short x_16_1_2; void*x_16_1_3; void*x_16_1_4; void*x_16_1_5; double x_16_1_6; int x_16_1_7; out unsigned char x_16_1_8; out void*x_16_1_9; void*x_16_1_10; out in void*x_16_1_11; in void*x_16_1_12; oneway void*x_16_1_13; BOOL x_16_1_14; void*x_16_1_15; out const void*x_16_1_16; void*x_16_1_17; void*x_16_1_18; void*x_16_1_19; void*x_16_1_20; double x_16_1_21; int x_16_1_22; out unsigned char x_16_1_23; out void*x_16_1_24; void*x_16_1_25; out in void*x_16_1_26; in void*x_16_1_27; oneway void*x_16_1_28; BOOL x_16_1_29; void*x_16_1_30; out const void*x_16_1_31; void*x_16_1_32; } x16; void*x17; void*x18; struct type { unsigned char x_19_1_1[24]; } x19; struct __base<void (const AudioComponentVector &, AudioComponentVector &)> {} *x20; }*)arg1 connection:(id)arg2;

@end
