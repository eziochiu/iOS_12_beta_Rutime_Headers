/* made by EzioChiu.
 */

@protocol MPMiddlewareAutomaticDependencyOperation <MPMiddlewareOperation>

@required

- (struct NSMapTable { Class x1; }*)inputOperations;
- (NSArray *)inputsProtocols;
- (NSArray *)outputProtocols;
- (void)setInputOperations:(struct NSMapTable { Class x1; }*)arg1;

@end
