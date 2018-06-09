/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

@interface CommunicationFilterItemCache : NSObject {
    CommunicationFilterItem * _filterItem;
    long long  _isInList;
}

@property (nonatomic) long long isInList;

- (void)dealloc;
- (id)initWithFilterItem:(id)arg1 isInList:(long long)arg2;
- (long long)isInList;
- (bool)matchesItem:(id)arg1;
- (void)setIsInList:(long long)arg1;

@end