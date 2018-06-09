/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoViewControllerConfiguration : NSObject <NSCopying, SVVideoViewControllerConfiguration> {
    bool  _pagingAllowed;
    bool  _preferredMuteState;
}

@property (getter=isPagingAllowed, nonatomic, readonly) bool pagingAllowed;
@property (nonatomic, readonly) bool preferredMuteState;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPreferredMuteState:(bool)arg1 pagingAllowed:(bool)arg2;
- (bool)isPagingAllowed;
- (bool)preferredMuteState;

@end
