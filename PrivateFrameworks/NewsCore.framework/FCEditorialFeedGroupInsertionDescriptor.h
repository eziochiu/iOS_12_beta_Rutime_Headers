/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEditorialFeedGroupInsertionDescriptor : NSObject <FCFeedGroupInsertionDescriptor> {
    NSSet * _groupTypesToExhaust;
    unsigned long long  _minPrecedingTopicGroups;
}

@property (nonatomic, readonly, copy) NSSet *groupTypesToExhaust;
@property (nonatomic, readonly) unsigned long long minPrecedingTopicGroups;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groupTypesToExhaust;
- (id)init;
- (id)initWithGroupTypesToExhaust:(id)arg1 minPrecedingTopicGroups:(unsigned long long)arg2;
- (unsigned long long)minPrecedingTopicGroups;
- (bool)wantsToInsertGroup:(id)arg1 withContext:(id)arg2;

@end
