/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAccessibilityHUDItem : NSObject <NSCopying> {
    UIView * _customView;
    bool  _disabledAppearance;
    bool  _flattenImage;
    UIImage * _image;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageInsets;
    bool  _scaleImage;
    NSString * _title;
}

@property (nonatomic, retain) UIView *customView;
@property (nonatomic) bool disabledAppearance;
@property (nonatomic) bool flattenImage;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageInsets;
@property (nonatomic) bool scaleImage;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)HUDItemForBarButtonItem:(id)arg1;
+ (id)HUDItemForTabBarItem:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customView;
- (bool)disabledAppearance;
- (bool)flattenImage;
- (unsigned long long)hash;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (id)initWithCustomView:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2 imageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 scaleImage:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)scaleImage;
- (void)setCustomView:(id)arg1;
- (void)setDisabledAppearance:(bool)arg1;
- (void)setFlattenImage:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScaleImage:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)HUDItemForBarButtonItem:(id)arg1;

@end
