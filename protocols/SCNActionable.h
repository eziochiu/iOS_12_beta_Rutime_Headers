/* made by EzioChiu.
 */

@protocol SCNActionable <NSObject>

@required

- (SCNAction *)actionForKey:(NSString *)arg1;
- (NSArray *)actionKeys;
- (bool)hasActions;
- (void)removeActionForKey:(NSString *)arg1;
- (void)removeAllActions;
- (void)runAction:(SCNAction *)arg1;
- (void)runAction:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: SCNAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)runAction:(SCNAction *)arg1 forKey:(NSString *)arg2;
- (void)runAction:(void *)arg1 forKey:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: SCNAction *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
