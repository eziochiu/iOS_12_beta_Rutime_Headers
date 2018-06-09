/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoViewControllerConfiguration : NSObject <NSCopying, SVVideoViewControllerConfiguration> {
    NUVideoViewControllerAdConfiguration * _adConfiguration;
    bool  _pagingAllowed;
    bool  _preferredMuteState;
    bool  _sharingEnabled;
}

@property (nonatomic, readonly, copy) NUVideoViewControllerAdConfiguration *adConfiguration;
@property (getter=isPagingAllowed, nonatomic, readonly) bool pagingAllowed;
@property (nonatomic, readonly) bool preferredMuteState;
@property (getter=isSharingEnabled, nonatomic, readonly) bool sharingEnabled;

- (void).cxx_destruct;
- (id)adConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithSharingEnabled:(bool)arg1 preferredMuteState:(bool)arg2 pagingAllowed:(bool)arg3 adConfiguration:(id)arg4;
- (bool)isPagingAllowed;
- (bool)isSharingEnabled;
- (bool)preferredMuteState;

@end
