/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLObjectIDSetFetchRequestContext : NSSQLFetchRequestContext {
    NSString * _columnName;
    NSArray * _idSets;
}

- (void)dealloc;
- (void)executeEpilogue;
- (void)executeRequestCore:(id*)arg1;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 idSets:(id)arg4 columnName:(id)arg5;

@end
