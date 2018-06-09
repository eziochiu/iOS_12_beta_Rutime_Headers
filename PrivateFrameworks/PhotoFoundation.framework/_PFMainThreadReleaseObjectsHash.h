/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface _PFMainThreadReleaseObjectsHash : PFWeakContainer {
    unsigned long long  _highIndex;
    unsigned long long  _lowIndex;
    unsigned long long  _objectCount;
    /* Warning: unhandled array encoding: '[7@]' */ id  _objects;
    Class  _objectsClasses;
    unsigned long long  _releaseCounts;
}

+ (void)addDeferredReleaseObject:(id)arg1;

- (void)addDeferredReleaseObject:(id)arg1;
- (bool)isFull;
- (void)processMainThreadReleases;
- (void)weakReferenceBecameNil;

@end