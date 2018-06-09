/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBBlueLightClient : NSObject {
    bool  _supported;
    BrightnessSystemClient * bsc;
    struct { 
        float minCCT; 
        float maxCCT; 
        float midCCT; 
    }  cctRange;
    id /* block */  clientBlock;
    struct { 
        float minCCT; 
        float maxCCT; 
        float midCCT; 
    }  defaultCctRange;
    bool  notificationActive;
    bool  ownsClient;
    bool  rangeOverridden;
    bool  rangeSet;
}

@property bool supported;

+ (bool)supportsBlueLightReduction;

- (void)dealloc;
- (void)disableNotifications;
- (void)enableNotifications;
- (bool)getBlueLightStatus:(struct { bool x1; bool x2; bool x3; int x4; struct { struct { int x_1_2_1; int x_1_2_2; } x_5_1_1; struct { int x_2_2_1; int x_2_2_2; } x_5_1_2; } x5; unsigned long long x6; }*)arg1;
- (bool)getCCT:(float*)arg1;
- (bool)getCCTRange:(struct { float x1; float x2; float x3; }*)arg1;
- (bool)getDefaultCCTRange:(struct { float x1; float x2; float x3; }*)arg1;
- (bool)getStrength:(float*)arg1;
- (bool)getWarningCCT:(float*)arg1;
- (bool)getWarningStrength:(float*)arg1;
- (id)init;
- (id)initWithClientObj:(id)arg1;
- (bool)parseStatusDictionary:(id)arg1 intoStruct:(struct { bool x1; bool x2; bool x3; int x4; struct { struct { int x_1_2_1; int x_1_2_2; } x_5_1_1; struct { int x_2_2_1; int x_2_2_2; } x_5_1_2; } x5; unsigned long long x6; }*)arg2;
- (bool)setActive:(bool)arg1;
- (bool)setCCT:(float)arg1 commit:(bool)arg2;
- (bool)setCCT:(float)arg1 withPeriod:(float)arg2 commit:(bool)arg3;
- (bool)setCCTRange:(struct { float x1; float x2; float x3; }*)arg1;
- (bool)setEnabled:(bool)arg1;
- (bool)setEnabled:(bool)arg1 withOption:(int)arg2;
- (bool)setMode:(int)arg1;
- (bool)setSchedule:(const struct { struct { int x_1_1_1; int x_1_1_2; } x1; struct { int x_2_1_1; int x_2_1_2; } x2; }*)arg1;
- (void)setStatusNotificationBlock:(id /* block */)arg1;
- (bool)setStrength:(float)arg1 commit:(bool)arg2;
- (bool)setStrength:(float)arg1 withPeriod:(float)arg2 commit:(bool)arg3;
- (void)setSupported:(bool)arg1;
- (bool)supported;
- (void)suspendNotifications:(bool)arg1;
- (void)suspendNotifications:(bool)arg1 force:(bool)arg2;

@end
