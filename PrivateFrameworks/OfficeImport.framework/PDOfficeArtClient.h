/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient> {
    PDAnimationInfo * mAnimationInfo;
    bool  mHasOleChart;
    OADImageRecolorInfo * mImageRecolorInfo;
    int  mInheritedTextStylePlaceholderType;
    bool  mIsComment;
    PDPlaceholder * mPlaceholder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int inheritedTextStylePlaceholderType;
@property (readonly) Class superclass;

- (id)animationInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (id)description;
- (bool)hasAnimationInfo;
- (bool)hasBounds;
- (bool)hasOleChart;
- (bool)hasPlaceholder;
- (id)imageRecolorInfo;
- (int)inheritedTextStylePlaceholderType;
- (id)init;
- (bool)isComment;
- (id)placeholder;
- (void)setAnimationInfo:(id)arg1;
- (void)setHasOleChart:(bool)arg1;
- (void)setImageRecolorInfo:(id)arg1;
- (void)setInheritedTextStylePlaceholderType:(int)arg1;
- (void)setIsComment:(bool)arg1;
- (void)setPlaceholder:(id)arg1;

@end
