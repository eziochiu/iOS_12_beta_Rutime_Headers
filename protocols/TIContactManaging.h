/* made by EzioChiu.
 */

@protocol TIContactManaging <TIKeyboardActivityObserving>

@required

- (id /* block */)addContactObserver:(void *)arg1; // needs 1 arg types, found 11: id /* block */, TIContactCollection *, void*, id, SEL, id /* block */, void*, void, id /* block */, TIContactCollection *, void*
- (NSUUID *)contactCollectionUUID;
- (void)getOnce:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIContactCollection *, void*
- (void)removeContactObserver:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TIContactCollection *, void*
- (void)unload;

@end
