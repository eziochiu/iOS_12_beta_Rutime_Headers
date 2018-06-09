/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUContentTileProvider : NSObject {
    PUMediaProvider * _mediaProvider;
    UIWindow * _window;
}

@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMediaProvider:(id)arg1;
- (id)mediaProvider;
- (void)registerTileControllerClassesWithTilingView:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)tileControllerForAsset:(id)arg1 viewModel:(id)arg2 tilingView:(id)arg3;
- (id)window;

@end
