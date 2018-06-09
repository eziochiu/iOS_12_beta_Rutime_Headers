/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REArrayDiff : NSObject {
    NSArray * _allOperations;
    NSArray * _fromElements;
    NSArray * _toElements;
}

@property (nonatomic, readonly) NSArray *allOperations;
@property (nonatomic, readonly) NSArray *fromElements;
@property (nonatomic, readonly) NSArray *toElements;

+ (id)_createSetFromElementArray:(id)arg1 equalComparator:(id /* block */)arg2 hashGenerator:(id /* block */)arg3;
+ (id)_indexSetFromSet:(id)arg1;
+ (id)diffFromElements:(id)arg1 toElements:(id)arg2;
+ (id)diffFromElements:(id)arg1 toElements:(id)arg2 equalComparator:(id /* block */)arg3 hashGenerator:(id /* block */)arg4 changeComparator:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)allOperations;
- (void)enumerateOperationsUsingBlock:(id /* block */)arg1;
- (id)fromElements;
- (id)toElements;

@end
