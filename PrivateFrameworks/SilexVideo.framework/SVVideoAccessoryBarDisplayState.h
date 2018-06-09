/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAccessoryBarDisplayState : NSObject {
    SVVideoAccessoryBarItemDisplayState * _leadingState;
    SVVideoAccessoryBarItemDisplayState * _trailingState;
}

@property (nonatomic, readonly) SVVideoAccessoryBarItemDisplayState *leadingState;
@property (nonatomic, readonly) SVVideoAccessoryBarItemDisplayState *trailingState;

- (void).cxx_destruct;
- (id)initWithLeadingState:(id)arg1 trailingState:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)leadingState;
- (id)trailingState;

@end
