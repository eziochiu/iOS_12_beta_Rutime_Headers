/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

@interface TSULinkedPointerSetEnumerator : NSEnumerator {
    TSULinkedPointerSetEntry * mHead;
    TSULinkedPointerSetEntry * mLastUsed;
}

- (id)initWithFirstEntry:(id)arg1;
- (id)nextObject;

@end
