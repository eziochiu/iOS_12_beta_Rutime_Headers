/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerDisableModificationsCommand : _MPCPlayerCommand <MPCPlayerDisableModificationsCommand> {
    bool  _disable;
    bool  _disabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disable;
@property (getter=isDisabled, nonatomic, readonly) bool disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)isDisabled;
- (bool)isDisabled;
- (void)setDisable:(bool)arg1;
- (id)setDisabled:(bool)arg1;

@end
