/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSObservationSink : NSObject <NSObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)handleErrorsWithBlock:(id /* block */)arg1;
+ (id)handleValuesWithBlock:(id /* block */)arg1;

@end
