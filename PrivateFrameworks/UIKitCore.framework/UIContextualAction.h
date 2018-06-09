/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIContextualAction : NSObject {
    UIColor * _backgroundColor;
    id /* block */  _completionHandler;
    bool  _forcesFallbackBackgroundColor;
    id /* block */  _handler;
    UIImage * _image;
    id /* block */  _preHandler;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) bool forcesFallbackBackgroundColor;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, readonly) bool isDestructive;
@property (nonatomic, copy) id /* block */ preHandler;
@property (nonatomic, readonly) long long style;
@property (nonatomic, copy) NSString *title;

+ (id)contextualActionWithStyle:(long long)arg1 title:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_completeWithResult:(bool)arg1;
- (id)backgroundColor;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)description;
- (void)executeHandlerWithView:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)executePreHandlerWithView:(id)arg1;
- (bool)forcesFallbackBackgroundColor;
- (id /* block */)handler;
- (id)image;
- (bool)isDestructive;
- (id /* block */)preHandler;
- (void)setBackgroundColor:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setForcesFallbackBackgroundColor:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setPreHandler:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end
