/* made by EzioChiu.
 */

@protocol _ICLexiconManaging

@required

- (id /* block */)addContactObserver:(void *)arg1; // needs 1 arg types, found 11: id /* block */, struct NSDictionary { Class x1; }*, void*, id, SEL, id /* block */, void*, void, id /* block */, struct NSDictionary { Class x1; }*, void*
- (void)hibernate;
- (NSArray *)loadLexicons:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSString *, id /* block */, NSString *, void*
- (NSArray *)loadLexiconsUsingFilter:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSString *, id /* block */, NSString *, void*
- (void)removeContactObserver:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct NSDictionary { Class x1; }*, void*
- (void)unloadLexicons;
- (void)warmUp;

@end
