/* made by EzioChiu.
 */

@protocol _CDContextServer <NSObject>

@required

- (void)deregisterCallback:(_CDContextualChangeRegistration *)arg1;
- (void)evaluatePredicate:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: _CDContextualPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)hasKnowledgeOfPath:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: _CDContextualKeyPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)propertiesOfPath:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: _CDContextualKeyPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject *, NSDate *, void*
- (void)registerCallback:(_CDContextualChangeRegistration *)arg1;

@end
