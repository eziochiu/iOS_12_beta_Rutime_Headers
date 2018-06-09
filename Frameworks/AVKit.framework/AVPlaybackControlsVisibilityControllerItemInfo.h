/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlaybackControlsVisibilityControllerItemInfo : NSObject {
    NSArray * _controls;
    bool  _initiallyHidden;
    long long  _visibilityBehaviorOptions;
}

@property (nonatomic, retain) NSArray *controls;
@property (getter=isInitiallyHidden, nonatomic) bool initiallyHidden;
@property (nonatomic) long long visibilityBehaviorOptions;

- (void).cxx_destruct;
- (id)controls;
- (bool)isInitiallyHidden;
- (void)setControls:(id)arg1;
- (void)setInitiallyHidden:(bool)arg1;
- (void)setVisibilityBehaviorOptions:(long long)arg1;
- (long long)visibilityBehaviorOptions;

@end
