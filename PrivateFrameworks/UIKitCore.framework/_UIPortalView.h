/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPortalView : UIView {
    UIView * _sourceView;
}

@property (nonatomic) bool allowsBackdropGroups;
@property (nonatomic) bool hidesSourceView;
@property (nonatomic) bool matchesAlpha;
@property (nonatomic) bool matchesPosition;
@property (nonatomic) bool matchesTransform;
@property (nonatomic, readonly) CAPortalLayer *portalLayer;
@property (nonatomic) UIView *sourceView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)allowsBackdropGroups;
- (id)description;
- (bool)hidesSourceView;
- (bool)matchesAlpha;
- (bool)matchesPosition;
- (bool)matchesTransform;
- (id)portalLayer;
- (void)setAllowsBackdropGroups:(bool)arg1;
- (void)setHidesSourceView:(bool)arg1;
- (void)setMatchesAlpha:(bool)arg1;
- (void)setMatchesPosition:(bool)arg1;
- (void)setMatchesTransform:(bool)arg1;
- (void)setSourceView:(id)arg1;
- (id)sourceView;

@end
