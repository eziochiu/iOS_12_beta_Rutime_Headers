/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGJournalEntry : NSObject {
    SGStorageContact * _contact;
    SGStorageEvent * _event;
    NSArray * _eventBatch;
    unsigned long long  _operation;
}

@property (nonatomic, readonly) SGStorageContact *contact;
@property (nonatomic, readonly) SGStorageEvent *event;
@property (nonatomic, readonly) NSArray *eventBatch;
@property (nonatomic, readonly) unsigned long long operation;

- (void).cxx_destruct;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)event;
- (id)eventBatch;
- (id)init;
- (id)initWithOperation:(unsigned long long)arg1;
- (id)initWithOperation:(unsigned long long)arg1 contact:(id)arg2;
- (id)initWithOperation:(unsigned long long)arg1 event:(id)arg2;
- (id)initWithOperation:(unsigned long long)arg1 eventBatch:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToJournalEntry:(id)arg1;
- (unsigned long long)operation;

@end
