/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface GeocodeRequest : NSObject {
    NSMutableArray * _completionHandlers;
}

@property (nonatomic, retain) NSMutableArray *completionHandlers;

- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)arg1;
- (id)completionHandlers;
- (id)init;
- (void)setCompletionHandlers:(id)arg1;

@end
