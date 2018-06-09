/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRFileProvidingOperation : BROperation {
    id /* block */  _fileProvidingCompletion;
    unsigned long long  _readingOptions;
    NSURL * _url;
    bool  _wantsCurrentVersion;
}

@property (nonatomic, copy) id /* block */ fileProvidingCompletion;
@property (nonatomic) bool wantsCurrentVersion;

- (void).cxx_destruct;
- (id /* block */)fileProvidingCompletion;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1 readingOptions:(unsigned long long)arg2;
- (void)main;
- (void)setFileProvidingCompletion:(id /* block */)arg1;
- (void)setWantsCurrentVersion:(bool)arg1;
- (bool)wantsCurrentVersion;

@end
