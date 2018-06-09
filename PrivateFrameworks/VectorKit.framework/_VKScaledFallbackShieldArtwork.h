/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface _VKScaledFallbackShieldArtwork : VKShieldArtwork {
    VKShieldArtwork * _artwork;
}

- (void)dealloc;
- (id)initWithShieldArtwork:(id)arg1 scale:(double)arg2;
- (struct CGImage { }*)newImageWithShieldText:(id)arg1 allowMultiline:(bool)arg2 widthPaddingMultiple:(double)arg3 centerPoint:(struct CGPoint { double x1; double x2; }*)arg4;

@end
