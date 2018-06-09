/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDocumentInteractionControllerDismissMarkupAction : NSObject {
    id /* block */  _completionHandler;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSString *title;

+ (id)actionWithTitle:(id)arg1 handler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)initWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
