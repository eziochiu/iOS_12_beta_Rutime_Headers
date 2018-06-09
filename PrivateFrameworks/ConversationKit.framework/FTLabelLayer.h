/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
 */

@interface FTLabelLayer : CALayer

@property (nonatomic) unsigned long long _animatedContentsTag;

+ (bool)needsDisplayForKey:(id)arg1;
+ (bool)needsLayoutForKey:(id)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForPresentation;
- (void)_clearContents;
- (void)_updateContentLayer;
- (void)display;
- (void)invalidateContentInsets;
- (bool)isKindOfClass:(Class)arg1;

@end
