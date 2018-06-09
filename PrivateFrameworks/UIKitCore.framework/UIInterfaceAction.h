/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInterfaceAction : NSObject <NSCopying> {
    <_UIInterfaceActionPresenting> * __presentingController;
    UIInterfaceActionRepresentationView * __visualRepresentation;
    NSString * _classificationTitle;
    UIView * _customContentView;
    UIViewController * _customContentViewController;
    bool  _enabled;
    bool  _focused;
    id /* block */  _handler;
    UIColor * _imageTintColor;
    UIImage * _leadingImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _leadingImageLayoutSize;
    bool  _preferred;
    NSString * _title;
    long long  _titleAlignment;
    UIColor * _titleTextColor;
    UIImage * _trailingImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _trailingImageLayoutSize;
    long long  _type;
    UIInterfaceActionVisualStyle * _visualStyle;
    NSPointerArray * _weakDisplayPropertyObservers;
}

@property (setter=_setPresentingController:, nonatomic) <_UIInterfaceActionPresenting> *_presentingController;
@property (nonatomic, readonly) long long _typeForDeterminingViewRepresentation;
@property (setter=_setVisualRepresentation:, nonatomic) UIInterfaceActionRepresentationView *_visualRepresentation;
@property (nonatomic, copy) NSString *classificationTitle;
@property (nonatomic, readonly) UIView *customContentView;
@property (nonatomic, retain) UIViewController *customContentViewController;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=_isFocused, setter=_setIsFocused:, nonatomic) bool focused;
@property (nonatomic, copy) id /* block */ handler;
@property (getter=_imageTintColor, setter=_setImageTintColor:, nonatomic, retain) UIColor *imageTintColor;
@property (nonatomic, retain) UIImage *leadingImage;
@property (nonatomic) struct CGSize { double x1; double x2; } leadingImageLayoutSize;
@property (getter=_isPreferred, setter=_setIsPreferred:, nonatomic) bool preferred;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long titleAlignment;
@property (getter=_titleTextColor, setter=_setTitleTextColor:, nonatomic, retain) UIColor *titleTextColor;
@property (nonatomic, retain) UIImage *trailingImage;
@property (nonatomic) struct CGSize { double x1; double x2; } trailingImageLayoutSize;
@property (nonatomic) long long type;
@property (getter=_visualStyle, setter=_setVisualStyle:, nonatomic, retain) UIInterfaceActionVisualStyle *visualStyle;
@property (nonatomic, readonly) NSPointerArray *weakDisplayPropertyObservers;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_observableDisplayProperties;
+ (void)_setInterfaceActionCanInvokeActionsWithoutPresentingController:(bool)arg1;
+ (id)actionWithCustomContentView:(id)arg1;
+ (id)actionWithCustomContentViewController:(id)arg1;
+ (id)actionWithTitle:(id)arg1 type:(long long)arg2 handler:(id /* block */)arg3;
+ (bool)changedProperties:(id)arg1 containsAny:(id)arg2;

- (void).cxx_destruct;
- (void)_addActionDisplayPropertyObserver:(id)arg1;
- (id)_imageTintColor;
- (void)_invokeHandlerWithCompletionBlock:(id /* block */)arg1;
- (bool)_isFocused;
- (bool)_isPreferred;
- (struct CGSize { double x1; double x2; })_layoutSizeForImageProperty:(id)arg1;
- (void)_notifyObserversDidChangeActionProperty:(id)arg1;
- (void)_notifyObserversVisualStyleDidChange;
- (id)_presentingController;
- (void)_removeActionDisplayPropertyObserver:(id)arg1;
- (void)_setImageTintColor:(id)arg1;
- (void)_setIsFocused:(bool)arg1;
- (void)_setIsPreferred:(bool)arg1;
- (void)_setPresentingController:(id)arg1;
- (void)_setTitleTextColor:(id)arg1;
- (void)_setVisualRepresentation:(id)arg1;
- (void)_setVisualStyle:(id)arg1;
- (id)_titleTextColor;
- (long long)_typeForDeterminingViewRepresentation;
- (id)_visualRepresentation;
- (id)_visualStyle;
- (id)classificationTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customContentView;
- (id)customContentViewController;
- (id)description;
- (id /* block */)handler;
- (id)initWithTitle:(id)arg1 type:(long long)arg2 customContentViewController:(id)arg3 customContentView:(id)arg4 handler:(id /* block */)arg5;
- (bool)isEnabled;
- (id)leadingImage;
- (struct CGSize { double x1; double x2; })leadingImageLayoutSize;
- (void)setClassificationTitle:(id)arg1;
- (void)setCustomContentViewController:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)setLeadingImageLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAlignment:(long long)arg1;
- (void)setTrailingImage:(id)arg1;
- (void)setTrailingImageLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setType:(long long)arg1;
- (id)title;
- (long long)titleAlignment;
- (id)trailingImage;
- (struct CGSize { double x1; double x2; })trailingImageLayoutSize;
- (long long)type;
- (id)weakDisplayPropertyObservers;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)actionWithTitle:(id)arg1 resource:(id)arg2 handler:(id /* block */)arg3;

@end
