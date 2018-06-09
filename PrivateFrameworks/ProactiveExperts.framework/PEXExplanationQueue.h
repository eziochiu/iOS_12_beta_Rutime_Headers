/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXExplanationQueue : NSObject {
    NSMutableArray * _queue;
}

+ (id)sharedInstance;
+ (id)stringFromExplanation:(unsigned char)arg1;
+ (id)uniqueKeycodeFromExplanation:(unsigned char)arg1;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)enumerateAndFlushWithBlock:(id /* block */)arg1;
- (id)init;
- (unsigned char)peek;
- (void)push:(unsigned char)arg1;

@end
