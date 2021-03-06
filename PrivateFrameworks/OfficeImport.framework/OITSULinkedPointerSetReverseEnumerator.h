/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSULinkedPointerSetReverseEnumerator : NSEnumerator {
    OITSULinkedPointerSetEntry * mLastUsed;
    OITSULinkedPointerSetEntry * mTail;
}

- (id)initWithLastEntry:(id)arg1;
- (id)nextObject;

@end
