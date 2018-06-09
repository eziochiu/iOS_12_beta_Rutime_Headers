/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSObservationTransformer : NSObservationSource <NSObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)mapErrorsWithBlock:(id /* block */)arg1;
+ (id)mapValuesWithBlock:(id /* block */)arg1;

@end
