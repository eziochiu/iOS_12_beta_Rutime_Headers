/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator {
    bool  _includeHidden;
    unsigned long long  _index;
    NSMutableArray * _mailboxes;
}

- (id)_initWithMailbox:(id)arg1 includeHiddenChildren:(bool)arg2;
- (void)dealloc;
- (id)nextObject;

@end
