/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLDeviceMotionProperties : NSObject {
    int  fMode;
}

@property (nonatomic) int mode;

- (id)description;
- (id)initWithMode:(int)arg1;
- (int)mode;
- (void)setMode:(int)arg1;

@end
