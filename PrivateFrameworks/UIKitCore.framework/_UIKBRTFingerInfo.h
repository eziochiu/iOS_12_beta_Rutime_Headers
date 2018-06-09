/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKBRTFingerInfo : NSObject <NSCopying> {
    unsigned long long  _identity;
    double  _lastSeenTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    double  _radius;
    bool  _unknownSeen;
}

@property (nonatomic, readonly) double feedbackAlpha;
@property (nonatomic) unsigned long long identity;
@property (nonatomic) double lastSeenTimestamp;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic) double radius;
@property (nonatomic) bool unknownSeen;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)feedbackAlpha;
- (unsigned long long)identity;
- (bool)isEqual:(id)arg1;
- (double)lastSeenTimestamp;
- (struct CGPoint { double x1; double x2; })location;
- (double)radius;
- (void)setIdentity:(unsigned long long)arg1;
- (void)setLastSeenTimestamp:(double)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRadius:(double)arg1;
- (void)setUnknownSeen:(bool)arg1;
- (bool)unknownSeen;

@end
