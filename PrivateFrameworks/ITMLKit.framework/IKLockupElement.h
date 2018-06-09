/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKLockupElement : IKViewElement

@property (nonatomic, readonly, retain) IKTextElement *descriptionText;
@property (nonatomic, readonly, retain) IKImageElement *fullscreenImage;
@property (nonatomic, readonly, retain) IKImageElement *image;
@property (nonatomic, readonly, retain) IKOrdinalElement *ordinal;
@property (nonatomic, readonly, retain) IKViewElement *overlays;
@property (nonatomic, readonly) bool showTitlesOnFocus;
@property (nonatomic, readonly, retain) IKTextElement *subtitle;
@property (nonatomic, readonly, retain) IKTextElement *title;

- (id)descriptionText;
- (id)fullscreenImage;
- (id)image;
- (id)ordinal;
- (id)overlays;
- (bool)showTitlesOnFocus;
- (id)subtitle;
- (id)title;

@end
