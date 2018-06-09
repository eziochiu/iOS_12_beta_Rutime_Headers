/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDWorkQueueItem : NSObject {
    NSString * _filename;
    SGDWorkQueueName * _name;
    NSObject<NSSecureCoding> * _object;
}

@property (nonatomic, readonly) unsigned long long fails;
@property (nonatomic, readonly) NSObject<NSSecureCoding> *object;
@property (nonatomic, readonly) NSString *queueId;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned long long)fails;
- (void)finish;
- (id)initWithObject:(id)arg1 name:(id)arg2 dir:(id)arg3;
- (void)markAsFailed;
- (id)object;
- (id)queueId;
- (unsigned long long)state;

@end
