/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPersistentChangeFetchResult : NSObject {
    unsigned long long  _changeCount;
    NSManagedObjectContext * _context;
    NSPersistentHistoryToken * _initialToken;
    NSArray * _transactions;
}

@property (nonatomic, readonly) unsigned long long changeCount;

+ (id)fetchResultWithToken:(id)arg1 managedObjectObjectContext:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (void)enumerateChangesWithBlock:(id /* block */)arg1;
- (id)initWithInitialToken:(id)arg1 transactions:(id)arg2 managedObjectObjectContext:(id)arg3;

@end
