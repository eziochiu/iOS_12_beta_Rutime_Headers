/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIVideoImageDataConsumer : SKUIImageDataConsumer {
    unsigned long long  _allowedOrientations;
    UIColor * _backgroundColor;
    SKUIColorScheme * _colorScheme;
    struct CGSize { 
        double width; 
        double height; 
    }  _landscapeSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _portraitSize;
}

@property (nonatomic) unsigned long long allowedOrientations;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (nonatomic) struct CGSize { double x1; double x2; } landscapeSize;
@property (nonatomic) struct CGSize { double x1; double x2; } portraitSize;

- (void).cxx_destruct;
- (unsigned long long)allowedOrientations;
- (id)backgroundColor;
- (id)colorScheme;
- (id)imageForColor:(id)arg1 orientation:(unsigned long long)arg2;
- (id)imageForImage:(id)arg1;
- (struct CGSize { double x1; double x2; })landscapeSize;
- (struct CGSize { double x1; double x2; })portraitSize;
- (void)setAllowedOrientations:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setLandscapeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPortraitSize:(struct CGSize { double x1; double x2; })arg1;

@end
