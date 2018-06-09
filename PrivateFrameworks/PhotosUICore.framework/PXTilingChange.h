/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingChange : NSObject {
    NSArray * _compositionInvalidationContexts;
    NSMutableArray * _events;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _initialContentInset;
    PXTilingLayout * _initialLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _initialReferenceSize;
}

@property (nonatomic, readonly, copy) NSArray *compositionInvalidationContexts;
@property (nonatomic, readonly) bool coordinateSpaceDidChange;
@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fromContentInset;
@property (nonatomic, readonly) PXTilingLayout *fromLayout;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fromReferenceSize;
@property (getter=isIdentity, nonatomic, readonly) bool identity;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } initialContentInset;
@property (nonatomic, readonly) PXTilingLayout *initialLayout;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } initialReferenceSize;
@property (nonatomic, readonly) NSArray *invalidationContexts;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } toContentInset;
@property (nonatomic, readonly) PXTilingLayout *toLayout;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } toReferenceSize;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (id)compositionInvalidationContexts;
- (bool)coordinateSpaceDidChange;
- (id)defaultAnimationOptionsForTilingController:(id)arg1;
- (id)description;
- (id)events;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fromContentInset;
- (id)fromLayout;
- (struct CGSize { double x1; double x2; })fromReferenceSize;
- (id)init;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })initialContentInset;
- (id)initialLayout;
- (struct CGSize { double x1; double x2; })initialReferenceSize;
- (id)invalidationContexts;
- (bool)isIdentity;
- (void)recordCompositionInvalidationContexts:(id)arg1;
- (void)recordContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)recordLayout:(id)arg1;
- (void)recordReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })toContentInset;
- (id)toLayout;
- (struct CGSize { double x1; double x2; })toReferenceSize;

@end
