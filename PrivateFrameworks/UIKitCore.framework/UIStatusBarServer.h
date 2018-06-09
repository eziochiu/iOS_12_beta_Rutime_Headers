/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIStatusBarServer : NSObject {
    struct __CFRunLoopSource { } * _source;
    <UIStatusBarServerClient> * _statusBar;
}

@property (nonatomic, retain) <UIStatusBarServerClient> *statusBar;

+ (id)_cachedTimeStringFromData:(struct { bool x1[36]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; BOOL x7[100]; BOOL x8[100]; BOOL x9[2][100]; BOOL x10[1024]; unsigned int x11; int x12; int x13; unsigned int x14; int x15; unsigned int x16; BOOL x17[150]; int x18; int x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; BOOL x23[256]; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; BOOL x33[256]; BOOL x34[256]; BOOL x35[100]; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; double x39; unsigned int x40 : 1; }*)arg1;
+ (unsigned int)_publisherPort;
+ (unsigned int)_serverPort;
+ (void)addStatusBarItem:(int)arg1;
+ (void)addStyleOverrides:(int)arg1;
+ (id)getDoubleHeightStatusStringForStyle:(long long)arg1;
+ (double)getGlowAnimationEndTimeForStyle:(long long)arg1;
+ (bool)getGlowAnimationStateForStyle:(long long)arg1;
+ (const struct { bool x1[36]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; BOOL x7[100]; BOOL x8[100]; BOOL x9[2][100]; BOOL x10[1024]; unsigned int x11; int x12; int x13; unsigned int x14; int x15; unsigned int x16; BOOL x17[150]; int x18; int x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; BOOL x23[256]; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; BOOL x33[256]; BOOL x34[256]; BOOL x35[100]; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; double x39; unsigned int x40 : 1; }*)getStatusBarData;
+ (struct { bool x1[36]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 2; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; struct { bool x_28_1_1[36]; BOOL x_28_1_2[64]; BOOL x_28_1_3[64]; BOOL x_28_1_4[256]; int x_28_1_5; int x_28_1_6; BOOL x_28_1_7[100]; BOOL x_28_1_8[100]; BOOL x_28_1_9[2][100]; BOOL x_28_1_10[1024]; unsigned int x_28_1_11; int x_28_1_12; int x_28_1_13; unsigned int x_28_1_14; int x_28_1_15; unsigned int x_28_1_16; BOOL x_28_1_17[150]; int x_28_1_18; int x_28_1_19; unsigned int x_28_1_20 : 1; unsigned int x_28_1_21 : 1; unsigned int x_28_1_22 : 1; BOOL x_28_1_23[256]; unsigned int x_28_1_24 : 1; unsigned int x_28_1_25 : 1; unsigned int x_28_1_26 : 1; unsigned int x_28_1_27 : 1; unsigned int x_28_1_28 : 1; unsigned int x_28_1_29; unsigned int x_28_1_30 : 1; unsigned int x_28_1_31 : 1; unsigned int x_28_1_32 : 1; BOOL x_28_1_33[256]; BOOL x_28_1_34[256]; BOOL x_28_1_35[100]; unsigned int x_28_1_36 : 1; unsigned int x_28_1_37 : 1; unsigned int x_28_1_38 : 1; double x_28_1_39; unsigned int x_28_1_40 : 1; } x28; }*)getStatusBarOverrideData;
+ (int)getStyleOverrides;
+ (void)permanentizeStatusBarOverrideData;
+ (void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2;
+ (void)postGlowAnimationState:(bool)arg1 forStyle:(long long)arg2;
+ (void)postStatusBarData:(const struct { bool x1[36]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; BOOL x7[100]; BOOL x8[100]; BOOL x9[2][100]; BOOL x10[1024]; unsigned int x11; int x12; int x13; unsigned int x14; int x15; unsigned int x16; BOOL x17[150]; int x18; int x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; BOOL x23[256]; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; BOOL x33[256]; BOOL x34[256]; BOOL x35[100]; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; double x39; unsigned int x40 : 1; }*)arg1 withActions:(int)arg2;
+ (void)postStatusBarOverrideData:(struct { bool x1[36]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 2; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; struct { bool x_28_1_1[36]; BOOL x_28_1_2[64]; BOOL x_28_1_3[64]; BOOL x_28_1_4[256]; int x_28_1_5; int x_28_1_6; BOOL x_28_1_7[100]; BOOL x_28_1_8[100]; BOOL x_28_1_9[2][100]; BOOL x_28_1_10[1024]; unsigned int x_28_1_11; int x_28_1_12; int x_28_1_13; unsigned int x_28_1_14; int x_28_1_15; unsigned int x_28_1_16; BOOL x_28_1_17[150]; int x_28_1_18; int x_28_1_19; unsigned int x_28_1_20 : 1; unsigned int x_28_1_21 : 1; unsigned int x_28_1_22 : 1; BOOL x_28_1_23[256]; unsigned int x_28_1_24 : 1; unsigned int x_28_1_25 : 1; unsigned int x_28_1_26 : 1; unsigned int x_28_1_27 : 1; unsigned int x_28_1_28 : 1; unsigned int x_28_1_29; unsigned int x_28_1_30 : 1; unsigned int x_28_1_31 : 1; unsigned int x_28_1_32 : 1; BOOL x_28_1_33[256]; BOOL x_28_1_34[256]; BOOL x_28_1_35[100]; unsigned int x_28_1_36 : 1; unsigned int x_28_1_37 : 1; unsigned int x_28_1_38 : 1; double x_28_1_39; unsigned int x_28_1_40 : 1; } x28; }*)arg1;
+ (void)removeStatusBarItem:(int)arg1;
+ (void)removeStyleOverrides:(int)arg1;
+ (void)runServer;
+ (const char *)serviceName;

- (void).cxx_destruct;
- (void)_receivedDoubleHeightStatus:(const char *)arg1 forStyle:(long long)arg2;
- (void)_receivedGlowAnimationState:(bool)arg1 forStyle:(long long)arg2;
- (void)_receivedStatusBarData:(struct { bool x1[36]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; BOOL x7[100]; BOOL x8[100]; BOOL x9[2][100]; BOOL x10[1024]; unsigned int x11; int x12; int x13; unsigned int x14; int x15; unsigned int x16; BOOL x17[150]; int x18; int x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; BOOL x23[256]; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; BOOL x33[256]; BOOL x34[256]; BOOL x35[100]; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; double x39; unsigned int x40 : 1; }*)arg1 actions:(int)arg2 animated:(bool)arg3;
- (void)_receivedStyleOverrides:(int)arg1;
- (void)dealloc;
- (id)initWithStatusBar:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (id)statusBar;

@end
