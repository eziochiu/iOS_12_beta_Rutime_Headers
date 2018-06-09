/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPreviewActionGroup : NSObject <NSCopying, UIPreviewActionItem, UIPreviewActionItem_Internal> {
    NSArray * _actions;
    UIColor * _color;
    NSString * _identifier;
    UIImage * _image;
    long long  _style;
    NSString * _title;
}

@property (getter=_actions, setter=_setActions:, nonatomic, copy) NSArray *actions;
@property (getter=_color, setter=_setColor:, nonatomic, retain) UIColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)_actionGroupWithPreviewMenuItemWithSubactions:(id)arg1;
+ (id)_actionGroupWithTitle:(id)arg1 style:(long long)arg2 color:(id)arg3 actions:(id)arg4;
+ (id)actionGroupWithTitle:(id)arg1 style:(long long)arg2 actions:(id)arg3;

- (void).cxx_destruct;
- (id)_actions;
- (id)_color;
- (id)_effectiveColor;
- (id)_effectiveImage;
- (void)_setActions:(id)arg1;
- (void)_setColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)image;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end
