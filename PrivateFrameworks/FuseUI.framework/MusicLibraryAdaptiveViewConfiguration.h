/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryAdaptiveViewConfiguration : MusicLibraryViewConfiguration {
    MusicLibraryViewConfiguration * _compactWidthConfiguration;
    MusicLibraryViewConfiguration * _regularWidthConfiguration;
}

@property (nonatomic, readonly) MusicLibraryViewConfiguration *compactWidthConfiguration;
@property (nonatomic, readonly) MusicLibraryViewConfiguration *regularWidthConfiguration;

- (void).cxx_destruct;
- (id)compactWidthConfiguration;
- (void)enumerateContentViewConfigurationsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)loadCompactWidthConfiguration;
- (id)loadRegularWidthConfiguration;
- (id)regularWidthConfiguration;

@end
