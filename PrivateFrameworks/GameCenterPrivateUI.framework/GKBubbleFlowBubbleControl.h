/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleFlowBubbleControl : GKValueWithCaptionBubbleControl

@property (nonatomic, readonly) bool hasAnyContent;

- (bool)hasAnyContent;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)prepareForReuse;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)syncContentFromBubble:(id)arg1;

@end
