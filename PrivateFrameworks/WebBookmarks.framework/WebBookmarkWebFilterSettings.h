/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkWebFilterSettings : NSObject {
    WFUserSettings * _userSettings;
}

@property (nonatomic, readonly) WFUserSettings *userSettings;
@property (getter=isWebFilterEnabled, nonatomic, readonly) bool webFilterEnabled;
@property (getter=isWebFilterWhiteListOnlyModeEnabled, nonatomic, readonly) bool webFilterWhiteListOnlyModeEnabled;

+ (id)sharedWebFilterSettings;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)isWebFilterEnabled;
- (bool)isWebFilterWhiteListOnlyModeEnabled;
- (void)reloadSettings;
- (id)userSettings;

@end