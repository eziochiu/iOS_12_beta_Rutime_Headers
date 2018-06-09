/* made by EzioChiu.
 */

@protocol HDSyncAnchorMap <NSObject>

@required

- (unsigned long long)anchorCount;
- (long long)anchorForSyncEntityClass:(Class)arg1;
- (long long)anchorForSyncEntityIdentifier:(HDSyncEntityIdentifier *)arg1;
- (void)enumerateAnchorsAndEntityIdentifiersWithBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HDSyncEntityIdentifier *, long long, bool*, void*
- (void)setAnchor:(long long)arg1 forSyncEntity:(Class)arg2;

@end
