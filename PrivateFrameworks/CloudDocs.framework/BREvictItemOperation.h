/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BREvictItemOperation : BROperation {
    id /* block */  _evictionCompletionBlock;
    unsigned long long  _section;
    NSURL * _url;
}

@property (copy) id /* block */ evictionCompletionBlock;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)evictionCompletionBlock;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)main;
- (void)setEvictionCompletionBlock:(id /* block */)arg1;

@end
