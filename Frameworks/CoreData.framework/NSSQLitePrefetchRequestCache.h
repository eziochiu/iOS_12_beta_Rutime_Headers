/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLitePrefetchRequestCache : NSObject {
    unsigned long long  _length;
    id * _prefetchRequestsByEntity;
    NSSQLCore * _sqlCore;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSQLCore:(id)arg1;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;

@end
