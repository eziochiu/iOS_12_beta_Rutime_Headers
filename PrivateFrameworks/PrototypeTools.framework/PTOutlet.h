/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTOutlet : NSObject {
    NSMutableDictionary * _actionsByToken;
    unsigned long long  _nextToken;
}

- (void).cxx_destruct;
- (id)_init;
- (void)_invokeActions;
- (struct NSNumber { Class x1; }*)addAction:(id /* block */)arg1;
- (void)removeActionForToken:(struct NSNumber { Class x1; }*)arg1;

@end
