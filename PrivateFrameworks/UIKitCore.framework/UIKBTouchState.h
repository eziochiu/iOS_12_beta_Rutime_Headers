/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBTouchState : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationInWindow;
    unsigned long long  _pathIndex;
    double  _pathMajorRadius;
    long long  _phase;
    unsigned long long  _tapCount;
    double  _timestamp;
    NSUUID * _touchUUID;
    UIWindow * _window;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } locationInWindow;
@property (nonatomic, readonly) unsigned long long pathIndex;
@property (nonatomic, readonly) double pathMajorRadius;
@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly) unsigned long long tapCount;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) NSUUID *touchUUID;
@property (nonatomic, readonly) UIWindow *window;

+ (void)releaseUUIDForTouch:(id)arg1;
+ (id)touchForTouchUUID:(id)arg1;
+ (id)touchStateForTouch:(id)arg1;
+ (id)touchStateForTouchUUID:(id)arg1 withTimestamp:(double)arg2 phase:(long long)arg3 location:(struct CGPoint { double x1; double x2; })arg4 pathIndex:(unsigned char)arg5 inView:(id)arg6;
+ (id)touchUUIDForTouch:(id)arg1;
+ (id)touchUUIDsForTouches:(id)arg1;
+ (id)touchesForTouchUUIDs:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInWindow;
- (unsigned long long)pathIndex;
- (double)pathMajorRadius;
- (long long)phase;
- (unsigned long long)tapCount;
- (double)timestamp;
- (id)touchUUID;
- (id)window;

@end
