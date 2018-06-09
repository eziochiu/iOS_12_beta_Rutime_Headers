/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface AROrientationTrackingConfiguration : ARConfiguration

@property (getter=isAutoFocusEnabled, nonatomic) bool autoFocusEnabled;

+ (id)new;
+ (id)supportedVideoFormats;

- (id)description;
- (id)init;

@end
