/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CADisplayMode : NSObject {
    struct CADisplayModePriv { struct Mode { union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 16; unsigned int x_1_3_3 : 24; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 4; unsigned int x_1_3_6 : 2; } x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; } x1; id x2; unsigned long long x3; } * _priv;
}

@property (nonatomic, readonly, copy) NSString *colorGamut;
@property (nonatomic, readonly, copy) NSString *colorMode;
@property (nonatomic, readonly, copy) NSString *hdrMode;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long internalRepresentation;
@property (nonatomic, readonly) bool isVirtual;
@property (nonatomic, readonly) double pixelAspectRatio;
@property (nonatomic, readonly) unsigned long long preferredScale;
@property (nonatomic, readonly) double refreshRate;
@property (nonatomic, readonly) unsigned long long width;

+ (id)_displayModeWithMode:(struct Mode { union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 24; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 4; unsigned int x_1_2_6 : 2; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg1 display:(id)arg2;

- (id)_display;
- (id)_initWithMode:(struct Mode { union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 24; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 4; unsigned int x_1_2_6 : 2; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg1 display:(id)arg2;
- (struct Mode { union { struct { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 24; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 4; unsigned int x_1_2_6 : 2; } x_1_1_1; unsigned long long x_1_1_2; } x1; })_mode;
- (void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)colorGamut;
- (id)colorMode;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)hdrMode;
- (unsigned long long)height;
- (unsigned long long)internalRepresentation;
- (bool)isEqual:(id)arg1;
- (bool)isVirtual;
- (double)pixelAspectRatio;
- (unsigned long long)preferredScale;
- (double)refreshRate;
- (unsigned long long)width;

@end
