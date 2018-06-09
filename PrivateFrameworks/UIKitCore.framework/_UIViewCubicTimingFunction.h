/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIViewCubicTimingFunction : NSObject <NSCoding, NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _point1;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point2;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } controlPoint1;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } controlPoint2;

- (id)_mediaTimingFunction;
- (struct CGPoint { double x1; double x2; })controlPoint1;
- (struct CGPoint { double x1; double x2; })controlPoint2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithControlPoint1:(struct CGPoint { double x1; double x2; })arg1 controlPoint2:(struct CGPoint { double x1; double x2; })arg2;

@end
