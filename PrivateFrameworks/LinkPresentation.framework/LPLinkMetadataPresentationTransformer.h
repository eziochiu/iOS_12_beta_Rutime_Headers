/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPLinkMetadataPresentationTransformer : NSObject {
    NSURL * _URL;
    bool  _allowsTapToLoad;
    bool  _complete;
    bool  _forceMiniStyle;
    LPLinkMetadata * _metadata;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) bool allowsTapToLoad;
@property (nonatomic, readonly, copy) NSURL *canonicalURL;
@property (getter=isComplete, nonatomic) bool complete;
@property (nonatomic) bool forceMiniStyle;
@property (nonatomic, copy) LPLinkMetadata *metadata;
@property (nonatomic, readonly, copy) NSURL *originalURL;

- (void).cxx_destruct;
- (id)URL;
- (bool)allowsTapToLoad;
- (id)backgroundColorForStyle:(long long)arg1;
- (id)bottomCaptionForStyle:(long long)arg1;
- (id)canonicalURL;
- (bool)forceMiniStyle;
- (id)imageForStyle:(long long)arg1 icon:(id*)arg2;
- (bool)isComplete;
- (id)mainCaptionBarForStyle:(long long)arg1;
- (id)metadata;
- (id)originalURL;
- (id)presentationProperties;
- (id)quotedTextForStyle:(long long)arg1;
- (long long)rendererStyle;
- (void)setAllowsTapToLoad:(bool)arg1;
- (void)setComplete:(bool)arg1;
- (void)setForceMiniStyle:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setURL:(id)arg1;
- (id)topCaptionForStyle:(long long)arg1;
- (id)videoForStyle:(long long)arg1;

@end
