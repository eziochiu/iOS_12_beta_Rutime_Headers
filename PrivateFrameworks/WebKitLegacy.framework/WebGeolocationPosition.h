/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationPosition : NSObject {
    WebGeolocationPositionInternal * _internal;
}

- (void)dealloc;
- (id)initWithGeolocationPosition:(struct GeolocationPosition { double x1; double x2; double x3; double x4; struct optional<double> { bool x_5_1_1; union constexpr_storage_t<double> { unsigned char x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct optional<double> { bool x_6_1_1; union constexpr_storage_t<double> { unsigned char x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct optional<double> { bool x_7_1_1; union constexpr_storage_t<double> { unsigned char x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct optional<double> { bool x_8_1_1; union constexpr_storage_t<double> { unsigned char x_2_2_1; double x_2_2_2; } x_8_1_2; } x8; struct optional<double> { bool x_9_1_1; union constexpr_storage_t<double> { unsigned char x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg1;
- (id)initWithTimestamp:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4;

@end
