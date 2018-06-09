/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextPasteController : NSObject <UITextPasteCoordinatorDelegate> {
    NSMapTable * _sessions;
    <UITextPasteConfigurationSupporting_Internal> * _supportingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <UITextPasteConfigurationSupporting_Internal> *supportingView;

+ (id)combineAttributedStrings:(id)arg1;

- (void).cxx_destruct;
- (id)_clampRange:(id)arg1;
- (id)_combineItemAttributedStrings:(id)arg1 forRange:(id)arg2;
- (void)_executePasteForSession:(id)arg1 animator:(id)arg2;
- (void)_performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 progressSupport:(id)arg3 animator:(id)arg4 completion:(id /* block */)arg5;
- (void)_transformTextPasteItem:(id)arg1;
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3;
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2;
- (void)coordinator:(id)arg1 endPastingItems:(id)arg2;
- (id)initWithSupportingView:(id)arg1;
- (void)setSupportingView:(id)arg1;
- (id)supportingView;

@end
