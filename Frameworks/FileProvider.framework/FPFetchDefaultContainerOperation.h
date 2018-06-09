/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPFetchDefaultContainerOperation : FPActionOperation {
    NSString * _appIdentifier;
    NSString * _appName;
    NSFileProviderDomain * _domain;
    id /* block */  _fetchCompletionBlock;
}

@property (nonatomic, copy) id /* block */ fetchCompletionBlock;

- (void).cxx_destruct;
- (id /* block */)fetchCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initForApplicationProxy:(id)arg1 provider:(id)arg2;
- (void)mainWithExtensionProxy:(id)arg1;
- (void)setFetchCompletionBlock:(id /* block */)arg1;

@end
