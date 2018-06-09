/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUKeyValueObserver : NSObject {
    id /* block */  _changeHandler;
    NSString * _keyPath;
    id  _target;
}

+ (id)observerWithTarget:(id)arg1 keyPath:(id)arg2 changeHandler:(id /* block */)arg3;
+ (id)observerWithTarget:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 changeHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 changeHandler:(id /* block */)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
