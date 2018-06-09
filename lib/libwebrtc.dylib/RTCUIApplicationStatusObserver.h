/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface RTCUIApplicationStatusObserver : NSObject {
    bool  _isActive;
}

+ (void)prepareForUse;
+ (id)sharedInstance;

- (id)init;
- (bool)isApplicationActive;
- (void)setActive;
- (void)setInactive;

@end
