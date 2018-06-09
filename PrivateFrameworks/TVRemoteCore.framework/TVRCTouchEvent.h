/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCTouchEvent : NSObject <NSSecureCoding> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitizerLocation;
    long long  _finger;
    long long  _phase;
    double  _timestamp;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } digitizerLocation;
@property (nonatomic, readonly) long long finger;
@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (id)_initWithTimestamp:(double)arg1 finger:(long long)arg2 phase:(long long)arg3 digitizerLocation:(struct CGPoint { double x1; double x2; })arg4;
- (id)description;
- (struct CGPoint { double x1; double x2; })digitizerLocation;
- (void)encodeWithCoder:(id)arg1;
- (long long)finger;
- (id)initWithCoder:(id)arg1;
- (long long)phase;
- (double)timestamp;

@end
