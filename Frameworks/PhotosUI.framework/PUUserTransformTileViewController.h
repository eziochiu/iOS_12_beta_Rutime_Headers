/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUserTransformTileViewController : PUTileViewController <PUUserTransformViewDelegate> {
    PUDisplayTileTransform * __displayTileTransform;
    NSString * __identifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __untransformedContentFrame;
    PUAssetReference * _assetReference;
    <PUUserTransformTileViewControllerDelegate> * _delegate;
    struct { 
        bool respondsToDidChangeModelTileTransform; 
        bool respondsToDidChangeIsUserInteracting; 
        bool respondsToShouldReceiveTouchAtLocationFromProvider; 
    }  _delegateFlags;
    bool  _userInteractionEnabled;
    PUUserTransformView * _userTransformView;
}

@property (setter=_setDisplayTileTransform:, nonatomic, retain) PUDisplayTileTransform *_displayTileTransform;
@property (setter=_setIdentifier:, nonatomic, copy) NSString *_identifier;
@property (setter=_setUntransformedContentFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _untransformedContentFrame;
@property (nonatomic, retain) PUAssetReference *assetReference;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUUserTransformTileViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (setter=setUserInteractionEnabled:, nonatomic) bool userInteractionEnabled;
@property (setter=_setUserTransformView:, nonatomic, retain) PUUserTransformView *userTransformView;

- (void).cxx_destruct;
- (id)_displayTileTransform;
- (id)_identifier;
- (void)_setDisplayTileTransform:(id)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setUntransformedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setUserTransformView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_untransformedContentFrame;
- (void)_updateUserInteractionEnabled;
- (void)_updateUserTransformPadding;
- (void)_updateUserTransformView;
- (id)_userInputOriginIdentifier;
- (void)applyLayoutInfo:(id)arg1;
- (id)assetReference;
- (void)becomeReusable;
- (void)dealloc;
- (id)delegate;
- (void)didChangeAnimating;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)loadView;
- (void)setAssetReference:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (bool)userInteractionEnabled;
- (id)userTransformView;
- (void)userTransformView:(id)arg1 didChangeIsUserInteracting:(bool)arg2;
- (void)userTransformView:(id)arg1 didChangeUserAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 isUserInteracting:(bool)arg3;
- (bool)userTransformView:(id)arg1 shouldReceiveTouchAtPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
