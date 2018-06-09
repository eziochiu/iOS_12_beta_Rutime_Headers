/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetSupportChecker : NSObject

+ (void)_alertTitleAndMessageForAsset:(id)arg1 type:(long long)arg2 title:(id*)arg3 message:(id*)arg4;
+ (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 knowledgeBaseURL:(id)arg3 alertControllerPresenter:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
+ (void)checkIsSupportedAndPresentAlertForAsset:(id)arg1 type:(long long)arg2 alertControllerPresenter:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (void)checkIsSupportedAsset:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)presentAlertForAsset:(id)arg1 type:(long long)arg2 alertControllerPresenter:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
+ (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 uti:(id)arg3 codecName:(id)arg4 alertControllerPresenter:(id /* block */)arg5 completionHandler:(id /* block */)arg6;

@end
