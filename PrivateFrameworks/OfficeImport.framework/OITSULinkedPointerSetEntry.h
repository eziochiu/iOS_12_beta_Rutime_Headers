/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSULinkedPointerSetEntry : NSObject {
    OITSULinkedPointerSetEntry * mNext;
    id  mObject;
    OITSULinkedPointerSetEntry * mPrevious;
}

- (void)dealloc;
- (id)initWithObject:(id)arg1 previousEntry:(id)arg2;

@end
