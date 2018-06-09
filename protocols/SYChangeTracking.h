/* made by EzioChiu.
 */

@protocol SYChangeTracking <NSObject>

@required

- (void)addObject:(id <SYObject>)arg1;
- (void)addObject:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <SYObject> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)addObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2;
- (void)addObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3;
- (void)deleteObject:(id <SYObject>)arg1;
- (void)deleteObject:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <SYObject> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)deleteObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2;
- (void)deleteObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3;
- (void)updateObject:(id <SYObject>)arg1;
- (void)updateObject:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <SYObject> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2;
- (void)updateObject:(id <SYObject>)arg1 context:(NSDictionary *)arg2 idsOptions:(NSDictionary *)arg3;

@end
