/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedTransformationBlockFilter : NSObject <FCFeedTransforming> {
    id /* block */  _predicate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ predicate;
@property (readonly) Class superclass;

+ (id)blockFilterWithPredicate:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)predicate;
- (void)setPredicate:(id /* block */)arg1;
- (id)transformFeedItems:(id)arg1;

@end
