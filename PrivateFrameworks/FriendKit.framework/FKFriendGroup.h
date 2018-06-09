/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
 */

@interface FKFriendGroup : NSObject {
    <FKFriendGroupDelegate> * _delegate;
    NSMutableArray * _friendsManager;
    unsigned long long  _groupSize;
    unsigned long long  _selectedPosition;
    NSString * _title;
}

@property (nonatomic) <FKFriendGroupDelegate> *delegate;
@property (nonatomic) unsigned long long selectedPosition;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (long long)_firstEmptyPosition;
- (void)addFriend:(id)arg1 error:(unsigned int*)arg2;
- (bool)containsFriend:(id)arg1;
- (unsigned long long)count;
- (id)delegate;
- (id)displayNameForGroupWithSeparator:(id)arg1;
- (id)friendAtPosition:(unsigned long long)arg1;
- (id)friends;
- (id)init;
- (id)initWithDelegate:(id)arg1 groupSize:(unsigned long long)arg2;
- (id)initWithGroupSize:(unsigned long long)arg1;
- (bool)isFull;
- (unsigned long long)positionOfFriend:(id)arg1;
- (void)removeFriendAtPosition:(unsigned long long)arg1;
- (unsigned long long)selectedPosition;
- (void)setDelegate:(id)arg1;
- (void)setFriend:(id)arg1 atPosition:(unsigned long long)arg2 error:(unsigned int*)arg3;
- (void)setFriends:(id)arg1;
- (void)setSelectedPosition:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
