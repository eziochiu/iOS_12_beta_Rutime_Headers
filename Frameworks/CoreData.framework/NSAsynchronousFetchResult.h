/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAsynchronousFetchResult : NSPersistentStoreAsynchronousResult {
    NSAsynchronousFetchRequest * _fetchRequest;
    NSArray * _finalResult;
    id  _intermediateResultCallback;
}

@property (readonly) NSAsynchronousFetchRequest *fetchRequest;
@property (retain) NSArray *finalResult;
@property (copy) id /* block */ intermediateResultCallback;

- (void)dealloc;
- (id)fetchRequest;
- (id)finalResult;
- (id)initForFetchRequest:(id)arg1 withContext:(id)arg2 andProgress:(id)arg3 completetionBlock:(id /* block */)arg4;
- (id /* block */)intermediateResultCallback;
- (void)setFinalResult:(id)arg1;
- (void)setIntermediateResultCallback:(id /* block */)arg1;

@end
