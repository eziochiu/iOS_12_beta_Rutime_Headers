/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpSuggestion : NSObject {
    id /* block */  _dismissHandler;
    UIImage * _image;
    NSString * _localizedDismissButtonTitle;
    NSString * _localizedMessage;
    NSString * _localizedTitle;
    AVAsset * _loopingVideoAsset;
    AVVideoComposition * _loopingVideoComposition;
    id /* block */  _markAsSeenHandler;
    long long  _preferredPresentationStyle;
    UIImage * _titleIcon;
}

@property (nonatomic, copy) id /* block */ dismissHandler;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *localizedDismissButtonTitle;
@property (nonatomic, retain) NSString *localizedMessage;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, retain) AVAsset *loopingVideoAsset;
@property (nonatomic, retain) AVVideoComposition *loopingVideoComposition;
@property (nonatomic, copy) id /* block */ markAsSeenHandler;
@property (nonatomic) long long preferredPresentationStyle;
@property (nonatomic, retain) UIImage *titleIcon;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)dismissHandler;
- (id)image;
- (id)localizedDismissButtonTitle;
- (id)localizedMessage;
- (id)localizedTitle;
- (id)loopingVideoAsset;
- (id)loopingVideoComposition;
- (id /* block */)markAsSeenHandler;
- (long long)preferredPresentationStyle;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setLocalizedDismissButtonTitle:(id)arg1;
- (void)setLocalizedMessage:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setLoopingVideoAsset:(id)arg1;
- (void)setLoopingVideoComposition:(id)arg1;
- (void)setMarkAsSeenHandler:(id /* block */)arg1;
- (void)setPreferredPresentationStyle:(long long)arg1;
- (void)setTitleIcon:(id)arg1;
- (id)titleIcon;

@end
