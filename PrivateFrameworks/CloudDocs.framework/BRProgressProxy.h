/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRProgressProxy : NSProgress {
    <BRProgressProxyDelegate> * _delegate;
    id  _globalProgressSubscriber;
    NSURL * _url;
}

@property <BRProgressProxyDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithURL:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
